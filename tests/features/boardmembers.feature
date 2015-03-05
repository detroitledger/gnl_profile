Feature: Manage people and board memberships
  As an intern
  I need to be able to record relationships between people and organizations
  So that I can enhance the site's database.

  @api
  Scenario: View an organization with no board members
    Given "Organization" content:
      | title     |
      | Dogooders |
    And I am logged in as an editor
    When I go to "/content/dogooders"
    Then I should see "No board terms"

  @api
  Scenario: View an organization with board members
    Given "Organization" content:
      | title     |
      | Dogooders |
    And "Person" content:
      | title |
      | Sally |
    And "Board term" content:
      | organization  | person  | term dates                  | position  | compensation  | source  |
      | Dogooders     | Sally   | 2010/Jan/01 to 2010/Dec/31  | Trustee   | $2,000        | IRS990  |  
    And I am logged in as an editor
    When I go to "/content/dogooders"
    Then I should see "All board members" table with header row "Person, Position, Term" 
    And I should see record "Sally, Trustee, January 1, 2010 to December 31, 2010"
    
  @api
  Scenario: Organization field of Board term is automatically populated
    Given "Organization" content:
      | title     |
      | Dogooders |
    And I am logged in as an editor
    When I go to add a board term
    And I fill in "dog" for "Organization"
    And I wait 1 second
    Then I should see "Dogooders" in the "Organization" autocomplete field
    And I select "Dogooders"
    
  @api
  Scenario: Organization field of Board term is limited to existing organizations when adding a new Board term
    Given "Organization" content:
      | title     |
      | Dogooders |
    And I am logged in as an editor
    When I go to add a board term
    And I fill in "dogoodies" for "Organization"
    And I select "save"
    Then I should see an error message "There are no entities matching "dogoodies""
    
  @api
  Scenario: Add a new person to the Person field of Board term
  Given "Organization" content:
      | title     |
      | Dogooders |
    And "Person" content:
      | title |
      | Sally |  
    And I am logged in as an editor
    When I go to add a board term
    And I fill in "Sally" for "Person"
    And I wait 1 second
    Then I should not see "Sally" in the "Person" autocomplete field
    And I select "Add person" anyways
    Then I should see an error message "the selected node is not valid"
    And I select "Add new person"
    And I fill in "Sally"
    And I select "Create Person"
    Then I should see message "New person created"
    And I should see "Sally" in Person field of Board term
  
  @api
  Scenario: Person field of Board term is automatically populated
    Given "Organization" content:
      | title     |
      | Dogooders |
    And "Person" content:
      | title |
      | Sally |  
    And I am logged in as an editor
    When I go to add a board term
    And I fill in "sal" for "Person"
    And I wait 1 second
    Then I should see "Sally" in the "Person" autocomplete field
    And I select "Sally"
    And I select "Add person"
