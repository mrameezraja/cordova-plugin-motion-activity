
cordova-plugin-motion-activity
====================

A Cordova plugin that detects and watch motion API.

Installation
------------

<pre>
  <code>
    cordova plugin add https://github.com/mrameezraja/cordova-plugin-motion-activity
  </code>
</pre>


Methods
-------
- cordova.plugins.motionActivity.requestUpdates
- cordova.plugins.motionActivity.stop


cordova.plugins.motionActivity.requestUpdates
-----------------------------------

<pre>
<code>
  window.cordova.plugins.motionActivity.requestUpdates(function success(readings) {
    console.log(JSON.stringify(readings));
    // sample output
    // { 'confidence': 2, 'unknown'; 0, 'stationary': 1, 'walking': 0, 'running': 0, 'cycling': 0, 'automotive': 0 }
  }, function(error){
    console.log(error);
  })
</code>
</pre>

cordova.plugins.motionActivity.stop
-----------------------------------

<pre>
<code>
  window.cordova.plugins.motionActivity.stop(function success() {
    console.log('motion detection stopped');
  }, function(error){
    console.log(error);
  })
</code>
</pre>

Supported Platforms
-------------------

- IOS
- Android (In Progress)
