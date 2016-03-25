## IVEF SDK 0.1.3 Released ##
03 November 2009 - The new IVEF release is now available to the open source community. IVEF is a cross-platform message exchange framework for VTS data exchange. IVEF is available for customer use, evaluation and open source download.

IVEF includes full interface capabilities in C++, JAVA and OBJECTIVE-C and has thoroughly  been tested on Linux (OpenSuSE 11, 64 bit), Apple Mac OS X 10.5 and MS Windows XP SP2

For detailed information on fixes and optimizations included in this releases, please consult the [change](http://code.google.com/p/ivef-sdk/source/list) log, or browse the source code contained in the [SVN](http://code.google.com/p/ivef-sdk/source/browse) repository

### Open Source Downloads ###
Open Source Edition of IVEF is available.  The Open Source Editions are released under the GPL for open source development.

### IVEF Definition ###
This IVEF SDK supports the IVEF 0.1.x definition. This definition represents the initial IVEF definition which was the starting point for the international working group.

### Additions ###
  * Backwards compatible support for Sensor information (backport 0.2)
  * Backwards compatible support for People On Board and Height over Keel (backport 0.2)
  * Backwards compatible support for Tagged Items (backport 0.2)
  * Documentation based on the 0.1 definition (starting point for the 0.2 definition)

### Fixes ###
  * [Issue-39](http://code.google.com/p/ivef-sdk/issues/detail?id=39) SDK won't build on OS X (Obj-C)
  * [Issue-40](http://code.google.com/p/ivef-sdk/issues/detail?id=40) Parser cannot handle multpile root elements
  * [Issue-41](http://code.google.com/p/ivef-sdk/issues/detail?id=41) iListen is not printing unicode strings correctly

### Recommendations ###
All users should upgrade immediately since Issue-40 could cause loss of data

### Contents ###
See the [status](http://code.google.com/p/ivef-sdk/wiki/Status) page to see the versions of the individual components


---

[Home](http://code.google.com/p/ivef-sdk/)