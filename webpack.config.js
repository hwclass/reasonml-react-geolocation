const path = require('path');

module.exports = {
  entry: {
    geolocation: './lib/js/src/component/root.js'
  },
  output: {
    path: path.join(__dirname, "bundledOutputs"),
    filename: '[name].js',
  },
};
