import reducer from './';

import { MOCK_API_RESPONSES } from '../actions/fixtures';
import { normalizeToObject } from '../api';

const emptyStore = {
  "byId": {},
  "listByFilter": {
    "active": {
      "errorMessage": null,
      "ids": [],
      "isFetching": false,
    },
    "all": {
      "errorMessage": null,
      "ids": [],
      "isFetching": false,
    },
    "completed": {
      "errorMessage": null,
      "ids": [],
      "isFetching": false,
    },
  },
  "router": { "location": null },
};

describe('userpdfs reducer', () => {
  it('should return the initial state', () => {
    expect(reducer(undefined, {})).toEqual(emptyStore);
  });

  it('should handle FETCH_USERPDFS_SUCCESS', () => {
    expect(
      reducer({}, {
        type: 'FETCH_USERPDFS_SUCCESS',
        response: normalizeToObject(MOCK_API_RESPONSES.assignedPdfs),
      })
    ).toEqual({
      "byId": {
        "2": {
          "currentpg": 5,
          "done": true,
          "id": 2,
          "org": {
            "id": 55,
            "name": "Bollywood Music Festival - Michigan Philharmonic",
          },
          "pdfurl": "http://google.com/aliens-are-real.pdf",
          "year": 2389,
        },
        "3": {
          "currentpg": 666,
          "done": false,
          "id": 3,
          "org": {
            "id": 10360,
            "name": "SHA-SHA’S KIDDY KORNER CHILD CARE",
          },
          "pdfurl": "http://pdfs.com/pdf.pdf",
          "year": 1983,
        },
      },
      "listByFilter": {
        "active": {
          "errorMessage": null,
          "ids": [ "3" ],
          "isFetching": false,
        },
        "all": {
          "errorMessage": null,
          "ids": [ "2", "3" ],
          "isFetching": false,
        },
        "completed": {
          "errorMessage": null,
          "ids": [ "2" ],
          "isFetching": false,
        },
      },
      "router": { "location": null },
    });
  });
});