Feature: Retrieve board member data via the API
  As an API consumer
  I need to be able to retrieve data about board members
  So that I can show them in an app or whatever

  @api
  Scenario: Search for people
  Given "Person" content:
    | title      |
    | Boz Scaggs |
    When I send a GET request to "people?filters[title]=Boz Scaggs"
    Then the first element in the "people" result should contain attributes:
    """
    {
      "title": "Boz Scaggs"
    }
    """
