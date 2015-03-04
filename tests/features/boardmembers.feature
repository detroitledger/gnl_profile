Feature: Manage people and board members
  As an intern
  I need to be able to add new board members to organizations
  So that I can enhance the site's database.

  @api
  Scenario: View an organization with no board members
    Given "Organization" content:
    | title    |
    | Dogooders|
    And I am logged in as an editor
    When I go to "/content/dogooders"
    Then I should see "No board terms"

