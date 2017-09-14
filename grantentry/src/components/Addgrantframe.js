import React, { Component } from 'react';
import PropTypes from 'prop-types';

import './Addgrantframe.css';

class Addgrantframe extends Component {
  render() {
    const orgNameAndId = `${this.props.orgName} (${this.props.orgId})`;
    const toYear = this.props.year + 1;

    const iframeSrc = `https://data.detroitledger.org/node/add/grant?edit[field_year][und][0][value][date]=01/${this.props.year}&edit[field_year][und][0][value2][date]=01/${toYear}&edit[field_funder][und][0][target_id]=${orgNameAndId}`;

    return (
      <div className="Addgrantframe">
        <iframe title="add grant" src={iframeSrc}/>
      </div>
    );
  }
}

Addgrantframe.propTypes = {
  orgName: PropTypes.string.isRequired,
  orgId: PropTypes.number.isRequired,
  year: PropTypes.number.isRequired,
};

export default Addgrantframe;