import fetch from 'isomorphic-fetch';

//export const API_HOST = 'https://data.detroitledger.org';
export const API_HOST = 'http://unresolvable';

/**
 *  Mutate an array of responses into an object keyed by their IDs.
 *
 * @param array
 * @return object
 */
export const normalizeToObject = (res) => {
  return Object.assign(...res.map(d => ({ [d['id']]: d  })));
}

export const fetchUserpdfs = () => {
  return fetch(`${API_HOST}/api/1.0/assigned_pdfs.json`, { credentials: 'include' })
  .then((response) => {
    return response.json();
  })
  .then((rawUserpdfs) => {
    return Promise.resolve(normalizeToObject(rawUserpdfs));
  });
}

export const updateUserpdf = (id, currentpg, done) => {
  return fetch(`${API_HOST}/services/session/token`, {
    method: 'GET',
    credentials: 'include',
  })
  .then(function(response) {
    return response.text();
  })
  .then(function(token) {
    return fetch(`${API_HOST}/api/1.0/assigned_pdfs/${id}.json`, {
      method: 'PUT',
      credentials: 'include',
      headers: {
        'Content-type': 'application/json',
        'X-CSRF-Token': token,
      },
      body: JSON.stringify({
        currentpg,
        done,
      }),
    });
  })
  .then((response) => {
    return response.json();
  });
}