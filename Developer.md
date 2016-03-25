# Breakdown #
When browsing the src dir of iListen you will find the following classes:

  * CmdLineOption
  * IVEFFileHandler
  * IVEFHandler
  * IVEFStreamHandler
  * iListenApplication
  * main

# Setup #
In the **main** class you will only find a call to setup a Qt Application. This **iListenApplication** sets up most variables and handles the command line options you have provided with the help of the **CmdLineOption** class.

# Parsing #
The actual parsing is done in **IVEFHandler** This class parses the XML stream and tries to generate sensible output. It is used by both the **IVEFStreamHandler** and **IVEFFileHandler** which feed it with either a tcp stream of data or with a file stream of data.

# Coding style #
Kernighan & Ritchie style formatting/indenting is used, and ensured by running **astyle --style=kr**

# Building #
There's an entire page devoted to [building](http://code.google.com/p/ivef-sdk/wiki/Building) the software



---

[Home](http://code.google.com/p/ivef-sdk/) [Contents](Contents.md)