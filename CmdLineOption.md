CmdLineOption is a helper class that allows you to easily parse commandline options.

Simply create a CmdLineOption object and add known options to it by calling:

```
CmdLineOption.append(....)
```

Once the object has been properly set up you can call parse to parse the command line options.

Because CmdLineOption knows all the valid options, it can print a help text for you by calling:

```
CmdLineOption.printHelp()
```



---

[Home](http://code.google.com/p/ivef-sdk/) [Contents](Contents.md) [Developer](Developer.md)