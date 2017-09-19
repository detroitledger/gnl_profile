import React, { Component } from 'react';

import { API_HOST } from '../api';

import './Topbar.css';

class Topbar extends Component {
  render() {
    const LOGOUT_LINK = `${API_HOST}/user/logout`;
    return (
      <div className="Topbar">
        <div className="Topbar-title">
          Ledger Data Entry: <span className="orgname">Some Org Name Here</span>
        </div>
        <div className="Topbar-userwidget">
          <span className="Topbar-username">Username here</span>
          <a href={LOGOUT_LINK}>log out</a>
        </div>
      </div>
    );
  }
}

export default Topbar;
