######################################################################
# Create test executable for Java binding
######################################################################
include(../tests.pri)

TARGET_JAVA_DIR = $$IVEF_TARGETS_DIR/java

! exists( classes ) {
    system( mkdir classes )
}
! exists( target ) {
    system( mkdir target )
}

jar.commands += javac -d classes -classpath $$TARGET_JAVA_DIR/ivef/ivef.jar src/*java
win32:jar.commands += &
unix:jar.commands += ;
jar.commands += cd classes
win32:jar.commands += &
unix:jar.commands += ;
jar.commands += jar cMf ../target/testjava.jar *

QMAKE_EXTRA_TARGETS += jar
PRE_TARGETDEPS += jar
QMAKE_CLEAN += classes/testjava/*
QMAKE_CLEAN += target/testivef.jar

MOC_DIR = ./tmp/moc
OBJECTS_DIR = ./tmp/obj

TEMPLATE = lib
TARGET = dummy
