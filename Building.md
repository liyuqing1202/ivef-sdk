# Installing #
The software is a pure Qt application and it's initial release was developed against [Qt 4.4.0](http://www.trolltech.com)
In order to build iListen you will the iListen [source](http://code.google.com/p/ivef-sdk/source/checkout) code but you will also need to obtain Qt, and install it for your particular platform. You can obtain Qt through TrollTech , see [Qt installation](http://doc.trolltech.com/4.4/installation.html) for instructions on how to install Qt for your particular platform. After Qt has been installed, follow the instructions below to compile and link an application of the iListen source code.
See the [usage](http://code.google.com/p/ivef-sdk/wiki/Usage) page for details how to run the software.

# Building #
## OS X ##
```
 qmake
 xcodebuild -configuration Release.
```
## Linux ##
```
 qmake
 make
```

## Windows ##
```
 qmake
 mingw-make32
```



---

[Home](http://code.google.com/p/ivef-sdk/) [Contents](Contents.md)