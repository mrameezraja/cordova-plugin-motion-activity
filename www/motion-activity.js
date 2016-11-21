var exec = require('cordova/exec');

var MotionActivity = function() { }

MotionActivity.prototype = {
  requestUpdates: function(success, error, options){
    exec(success, error, "MotionActivity", "requestUpdates", [])
  },
  stop: function(success, error, options){
    exec(success, error, "MotionActivity", "stopActivity", [])
  }
}

module.exports = new MotionActivity();
