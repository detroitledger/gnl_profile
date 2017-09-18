import { combineReducers } from 'redux';

import byId, * as fromById from './byId';
import createList, * as fromList from './createList';

const listByFilter = combineReducers({
  all: createList('all'),
  active: createList('active'),
  completed: createList('completed'),
});

const userpdfs = combineReducers({
  byId,
  listByFilter,
});

export default userpdfs;

export const getVisibleUserpdfs = (state, filter) => {
  const ids = fromList.getIds(state.listByFilter[filter]);
  return ids.map(id => fromById.getUserpdf(state.byId, id));
};

export const getIsFetching = (state, filter) =>
  fromList.getIsFetching(state.listByFilter[filter]);

export const getErrorMessage = (state, filter) =>
  fromList.getErrorMessage(state.listByFilter[filter]);