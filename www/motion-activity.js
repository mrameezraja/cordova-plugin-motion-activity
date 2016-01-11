var exec = require('cordova/exec');

var MotionActivity = function() { }

MotionActivity.prototype = {
  startActivity: function(success, error, options){
    exec(success, error, "MotionActivitySensor", "startActivity", [])
  },
  stopActivity: function(success, error, options){
    exec(success, error, "MotionActivitySensor", "stopActivity", [])
  }
}

module.exports = new MotionActivity();
