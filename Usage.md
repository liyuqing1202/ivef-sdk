# Connecting to a server #
In order to connect to an IVEF server, simply type:

```
 Gregorius:iListen aqua$ ./iListen --host=ivef.hitt.nl --port=8043 --user=guest --password=jamesbond
```
which would initiate a connection to host ivef.hitt.nl on port 8043. The application will attempt a user login based on the username and password provided. If all goes well, the server will send an login reply, followed by a stream of track data which will be decoded by iListen, and displayed on standard out.

```
Gregorius:iListen aqua$ ./iListen --host=ivef.hitt.nl --port=8043 
--user=guest --password=jamesbond
iListen started
iListen opening connection to ivef.hitt.nl:8043
iListen connection established logging in as guest
iListen data available
found message: MSG_VesselData
found message: Header
    MsgRefId = {3dcc52dd-e6d7-4bcd-b6f2-eb909afe2177}
    Version = 1.0
found message: Body
found message: VesselData
found message: PosReport
    UpdateTime = 2007-11-15T23:29:06.996
    Lost = no
    Orientation = 217.7
    SourceId = 1
    Breadth = 22
    Length = 134
    SOG = 9.2
    COG = 216.1
    Id = 4290
found message: Pos
    Lat = 52.74209
    Long = 3.70828
found message: StaticData
    ShipName = MS PARTNERSHIP
    Callsign = MKQT7
    Breadth = 22
    Length = 134
    MMSI = 235010050
    Id = 235010050
    Source = AIS
    SourceName = AIS
    ....
```

# Logging the input #
With iListen you can also create a logfile of the incomming data stream. Which you can use for analysing later on. The software has not been tested with huge files, and should probably not be used that way anyway.
In order to log to a file, simply provide the --outfile with a valid filename on a writeable location. Like:

```

Gregorius:iListen aqua$ ./iListen --host=ivef.hitt.nl --port=8043 
--user=guest --password=jamesbond --outfile=/tmp/mylogfile
```

# Reading from logfiles #
What good is a logfile if you cannot read it back? simply provide the iListen application with the --infile argument to specify from which file you want to read, and it will parse the contents, just as it would do when it was obtained from an IVEF server.

```
Gregorius:iListen aqua$ ./iListen --infile=/tmp/mylogfile
iListen started
iListen parsing file: /tmp/mylogfile
found message: MSG_VesselData
found message: Header
    MsgRefId = {3dcc52dd-e6d7-4bcd-b6f2-eb909afe2177}
    Version = 1.0
found message: Body
found message: VesselData
found message: PosReport
    UpdateTime = 2007-11-15T23:29:06.996
    Lost = no
    Orientation = 217.7
    .....

```

# Other options #
The other options are the illustrative --help and its companion --version both provide interesting output:

```
Gregorius:iListen aqua$ ./iListen --help
Usage: iListen [ options ]

Available options:
     --help                          show this information and exit.
     --host=TEXT_STRING              server ip nummer or hostname (default localhost).
     --infile=TEXT_STRING            read from file, presence negates host:port connection
     --outfile=TEXT_STRING           write to file, cannot be used in conjunction with infile
     --password=TEXT_STRING          password (default guest).
     --port=INTEGER_VALUE            port for IVEF XML connection (default 8043).
     --user=TEXT_STRING              user name (default guest).
     --version                       show version information and exit.

Gregorius:iListen aqua$ ./iListen --version

 iListen 0.0.1
----------------------------------------

 an example implementation for an IVEF Listener (hence iListen).
```



---

[Home](http://code.google.com/p/ivef-sdk/) [Contents](Contents.md)