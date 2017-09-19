import React from 'react';
import ReactDOM from 'react-dom';

import { createStore, applyMiddleware, compose } from 'redux';
import { Provider } from 'react-redux';

import thunk from 'redux-thunk';

import createHistory from 'history/createBrowserHistory';
import { Route } from 'react-router';

import { ConnectedRouter, routerMiddleware } from 'react-router-redux';

import reducer from './reducers';

import './index.css';
import App from './App';

import registerServiceWorker from './registerServiceWorker';

const history = createHistory();

const enhancers = [];
const middleware = [
  thunk,
  routerMiddleware(history),
];

if (process.env.NODE_ENV !== 'production') {
  const devToolsExtension = window.devToolsExtension;

  if (typeof devToolsExtension === 'function') {
    enhancers.push(devToolsExtension());
  }
}

const composedEnhancers = compose(
  applyMiddleware(...middleware),
  ...enhancers,
);

const store = createStore(
  reducer,
  composedEnhancers
);

ReactDOM.render(
  <Provider store={store}>
    <ConnectedRouter history={history}>
        <Route path="/:filter?" component={App}/>
    </ConnectedRouter>
  </Provider>,
  document.getElementById('root')
)

registerServiceWorker();