Feature: Manage people and board members
  As an intern
  I need to be able to add new board members to organizations
  So that I can enhance the site's database.

  Background:
    Given "organization" content:
    | name     |
    | Dogooders|

  @api
  Scenario: View an organization with no board members
    When I go to "/content/dogooders"
    Then I should see "No board terms"

