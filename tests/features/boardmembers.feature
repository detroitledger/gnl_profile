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
    And I should see row "Sally, Trustee, January 1, 2010 to December 31, 2010"
  
