const path = require('path');

module.exports = {
  entry: {
    geolocation: './src/js/index.js'
  },
  output: {
    path: path.join(__dirname, "bundledOutputs"),
    filename: '[name].js',
  },
};
