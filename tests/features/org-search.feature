Feature: Visitor browses organizations
  As a visitor
  I need to be able to view a list of organizations and search them
  So that I learn about the scope of the project's data

  Scenario: View default listing of organizations on homepage
    Given I am on the homepage
    When I go to the homepage
    Then I should see 50 ".homepage-org" elements
