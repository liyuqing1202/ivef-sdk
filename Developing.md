The SDK is strongly based on code generation. The actual definition is done in an XML Schema Diagram (XSD) which specifies the objects, attributes, types, bounderies etc.
This XSD is fed to a code generator that creates an interface library in various languages. The SDK includes examples on how to use the library

![http://ivef-sdk.googlecode.com/files/flowchart.png](http://ivef-sdk.googlecode.com/files/flowchart.png)

The library has a prescribed interface in all languages, which is explained in the following diagram

![http://ivef-sdk.googlecode.com/files/interface.png](http://ivef-sdk.googlecode.com/files/interface.png)

At the core is an interface that consists of:

  * reading strings with IVEF XML
  * emiting objects generated from that XML
  * boundary checking
  * generating XML from the objects

We have included some [examples](examples.md)

Note: that the current Java implementation does not "emit" events yet. It requires the user to subclass the Parser class an overwrite the handle methods as apposed to listening to a particular event. This will change in the future


---

[Home](http://code.google.com/p/ivef-sdk/)