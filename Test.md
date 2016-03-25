## Framework ##
The test frame work is based on the following items:

  * An application linked to the library that:
    * Reads XML from STDIN
    * Parses this XML with the libary
    * Generates events for each message
    * Generates XML from each event
    * Writes the XML to standard out
  * A test script that
    * Executes all tests in a directory
    * Verifies if the output matches the expected output
  * Test scripts
    * With valid sample data
    * With valid data for all possible paths **to be done**
    * With invalid data for all possible paths **to be done**

## Test Execution ##
To execute the tests, build the test software and run the script in the tests directory. Below is the output of the tests of IVEF\_0\_1\_0\_RC2:

```
lukassen@andromeda:~/develop/ivef-sdk/trunk/tools/testqt/tests> ./run_all_tests.sh 
running test 01 MSG_LoginRequest.xml ......OK
running test 02 MSG_LoginRequest.xml ......OK
running test 03 MSG_LoginResponse.xml ......OK
running test 04 MSG_Logout.xml ......OK
running test 05 MSG_Ping.xml ......OK
running test 06 MSG_Pong.xml ......OK
running test 07 MSG_ServerStatus.xml ......OK
running test 08 MSG_ServiceRequest.xml ......OK
running test 09 MSG_VesselData.xml ......NOK
---
7c7
< <PosReport Id="0" SourceId="0" UpdateTime="2001-12-17T09:30:47.123" SOG="3.14159" COG="3.14159" Lost="no" RateOfTurn="3.14159" Orientation="3.14159" Length="3.14159" Breadth="3.14159" Altitude="3.14159" NavStatus="0" UpdSensorType="1" ATONOffPos="1">
---
> <PosReport Id="0" SourceId="0" UpdateTime="2001-12-17T09:30:47.123" SOG="3.14159" COG="3.14159" Lost="no" RateOfTurn="3.14159" Orientation="3.14159" Length="3.14159" Breadth="3.14159" Altitude="3.14159" NavStatus="0" UpdSensorType="1" ATONOffPos="no">
---
```

And of IVEF\_0\_1\_0\_RC3 (with the fix)

```
lukassen@andromeda:~/develop/ivef-sdk/trunk/tools/testqt/tests> ./run_all_tests.sh 
running test 01 MSG_LoginRequest.xml ......OK
running test 02 MSG_LoginRequest.xml ......OK
running test 03 MSG_LoginResponse.xml ......OK
running test 04 MSG_Logout.xml ......OK
running test 05 MSG_Ping.xml ......OK
running test 06 MSG_Pong.xml ......OK
running test 07 MSG_ServerStatus.xml ......OK
running test 08 MSG_ServiceRequest.xml ......OK
running test 09 MSG_VesselData.xml ......OK
running test 10 MSG_VesselData.xml ......OK
lukassen@andromeda:~/develop/ivef-sdk/trunk/tools/testqt/tests> 
```

Note that for RC3 an additional test was created to test both paths of the boolean setting, this is the policy for every bug. First create a test that fails, fix the bug, and use the test to verify your work.



---

[Home](http://code.google.com/p/ivef-sdk/) [Contents](Contents.md)