import React from 'react';
import PropTypes from 'prop-types';

import ListableUserpdf from './ListableUserpdf';

const ListUserpdfs = ({ userpdfs, onUserpdfClick }) => (
  <ul>
    {userpdfs.map(userpdf =>
      <ListableUserpdf
        key={userpdf.id}
        userpdf={userpdf}
        onClick={() => onUserpdfClick(userpdf.id)}
      />
    )}
  </ul>
);

ListUserpdfs.propTypes = {
  userpdfs: PropTypes.arrayOf(PropTypes.shape({
    id: PropTypes.number.isRequired,
    org: PropTypes.shape({
      id: PropTypes.number.isRequired,
      name: PropTypes.string.isRequired,
    }).isRequired,
    pdfurl: PropTypes.string.isRequired,
    done: PropTypes.bool.isRequired,
    year: PropTypes.number.isRequired,
    currentpg: PropTypes.number.isRequired,
  }).isRequired).isRequired,
  onUserpdfClick: PropTypes.func.isRequired,
};

export default ListUserpdfs;