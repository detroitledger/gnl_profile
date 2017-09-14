import React, { Component } from 'react';
import './App.css';

import Pdfviewer from './components/Pdfviewer';
import Addgrantframe from './components/Addgrantframe';
import Topbar from './components/Topbar';
import Bottombar from './components/Bottombar';

class App extends Component {
  render() {
    return (
      <div className="App">
        <div className="Topbar-container">
          <Topbar/>
        </div>
        <div className="wrapper">
          <div className="Pdfviewer-container" role="complementary">
            <Pdfviewer pdfUrl="/203899187_2015_0d2284a6.PDF" />
          </div>
          <div className="Addgrantframe-container" role="main">
            <Addgrantframe orgName="Abayomi Community Development Corporation" orgId={6} year={2666} />
          </div>
        </div>
        <div className="Bottombar-container">
          <Bottombar/>
        </div>
      </div>
    );
  }
}

export default App;
