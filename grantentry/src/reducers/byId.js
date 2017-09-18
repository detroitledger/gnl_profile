const byId = (state = {}, action) => {
  if (action && action.response) {
    return {
      ...state,
      ...action.response,
    };
  }
  return state;
};

export default byId;

export const getUserpdf = (state, id) => state[id];