import React, { Component } from 'react';
import PropTypes from 'prop-types';

import PDF from 'react-pdf-js';

import './Pdfviewer.css';

class Pdfviewer extends Component {
  state = {};

  onDocumentComplete = (pages) => {
    this.setState({ scale: 1, page: 1, pages });
  }

  onPageComplete = (page) => {
    this.setState({ page });
  }

  handlePrevious = () => {
    this.setState({ page: this.state.page - 1 });
  }

  handleNext = () => {
    this.setState({ page: this.state.page + 1 });
  }

  handleFirst = () => {
    this.setState({ page: 1 });
  }

  handleLast = () => {
    this.setState({ page: this.state.pages });
  };

  handleZoomIn = () => {
    this.setState({ scale: this.state.scale + .25 });
  }

  handleZoomOut = () => {
    this.setState({ scale: this.state.scale - .25 });
  }

  renderPagination = (page, pages) => {
    let firstButton = <button className="first" onClick={this.handleFirst}>&laquo;</button>;
    let lastButton = <button className="last" onClick={this.handleLast}>&raquo;</button>;

    let previousButton = <button className="previous" onClick={this.handlePrevious}>&lt;</button>;
    if (page === 1) {
      previousButton = <button disabled className="previous disabled">&lt;</button>;
    }
    let nextButton = <button className="next" onClick={this.handleNext}>&gt;</button>;
    if (page === pages) {
      nextButton = <button disabled className="next disabled">&gt;</button>;
    }

    return (
      <span className="Pdfviewer-pager">
        {firstButton}
        {previousButton}
        {nextButton}
        {lastButton}
      </span>
      );
  }

  renderZoomer = () => {
    return (
      <span className="Pdfviewer-zoomer">
        <button onClick={this.handleZoomOut}>-</button>
        <button onClick={this.handleZoomIn}>+</button>
      </span>
    );
  }

  render() {
    let pagination = null;

    if (this.state.pages) {
      pagination = this.renderPagination(this.state.page, this.state.pages);
    }

    const zoomer = this.renderZoomer();

    return (
      <div className="Pdfviewer">
        <PDF file={this.props.pdfUrl} onDocumentComplete={this.onDocumentComplete} onPageComplete={this.onPageComplete} page={this.state.page} scale={this.state.scale} />
        <nav className="Pdfviewer-controls">
          {pagination}
          {zoomer}
        </nav>
      </div>
    )
  }
}

Pdfviewer.propTypes = {
  pdfUrl: PropTypes.string.isRequired,
};

export default Pdfviewer;