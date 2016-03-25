## Reading IVEF XML from a file ##
The following example shows how to read from a file and generate IVEF objects from this data:

```
void myApp::readFile(void) {

      // create a parser
      IVEFParser * m_IVEFParser = new IVEFParser();

      // open file
        QFile *file = new QFile("/tmp/test.xml");
                     
        while (!file->atEnd()) {
            QString line = file->readLine();
            m_IVEFParser->parseXMLString(line, true);
        }   
} 
```

This will result in signals to be emitted from the library to the host program. We should "catch" these signals and process them:

```
void myApp::readFile(void) {

      // create a parser
      IVEFParser * m_IVEFParser = new IVEFParser();

      // connect a printer routine to the reception of a MSG_VesselData
      connect( m_IVEFParser, SIGNAL( signalMSG_VesselData(MSG_VesselData)), this, SLOT(printVesselData(MSG_VesselData) ));

      // open file
        QFile *file = new QFile("/tmp/test.xml");
                     
        while (!file->atEnd()) {
            QString line = file->readLine();
            m_IVEFParser->parseXMLString(line, true);
        }  
}  
```


Now we only need to create a printer routine:

```
void myApp::printVesselData( MSG_VesselData obj ) {
            
   for (int i=0; i < obj.getBody().countOfVesselDatas();i++) {
        VesselData vessel = obj.getBody().getVesselDataAt(i);
        std::cout << vessel.toString("").toLatin1().data();
   }
}
```

## Generating IVEF XML ##
The following example shows the creating of a valid IVEF XML message, which can be sent to a Tcp/Ip socket or to a file.

```
    // create a message
    MSG_LoginRequest msg;

    // every message has a header
    Header header;
    header.setMsgRefId(QUuid::createUuid());
    header.setVersion("1.0");
    msg.setHeader(header);

    // and a body with the request
    Body body;
    LoginRequest request;
    request.setName("John Doe");
    request.setPassword("very very secret");
    request.setEncryption(1); // plain
    body.setLoginRequest(request);
    msg.setBody(body);

    QByteArray data = msg.toXML().toUtf8().trimmed();
    sendRawData(data); // send over a tcp socket
```


---

[Home](http://code.google.com/p/ivef-sdk/)