import React, { Component } from 'react';
import './Topbar.css';

class Topbar extends Component {
  render() {
    return (
      <div className="Topbar">
        <div className="Topbar-title">
          Ledger Data Entry: <span className="orgname">Some Org Name Here</span>
        </div>
        <div className="Topbar-userwidget">
          <span className="Topbar-username">Username here</span>
          <a href="https://data.detroitledger.org/user/logout">log out</a>
        </div>
      </div>
    );
  }
}

export default Topbar;