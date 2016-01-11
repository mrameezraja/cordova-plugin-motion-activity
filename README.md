
cordova-plugin-motion-activity
====================

A Cordova plugin that detects and watch motion API. 

Installation
------------

<code> cordova plugin add https://github.com/mrameezraja/cordova-plugin-motion-activity </code>


Methods
-------
- cordova.plugins.motionActivity.startActivity
- cordova.plugins.motionActivity.stopActivity


cordova.plugins.motionActivity.startActivity
-----------------------------------

<pre>
<code>
  window.cordova.plugins.motionActivity.startActivity(function success(readings) {
    console.log(JSON.stringify(readings));
  }, function(error){
    console.log(error);
  })
</code>
</pre>

<pre>
<code>
  window.cordova.plugins.motionActivity.stopActivity(function success() {
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

