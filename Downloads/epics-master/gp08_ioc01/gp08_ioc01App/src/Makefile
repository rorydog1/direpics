TOP=../..

include $(TOP)/configure/CONFIG
#----------------------------------------
#  ADD MACRO DEFINITIONS AFTER THIS LINE
#=============================

#=============================
# build an ioc application

PROD_IOC = gp08_ioc01
# gp08_ioc01.dbd will be created and installed
DBD += gp08_ioc01.dbd

# gp08_ioc01.dbd will be made up from these files:
gp08_ioc01_DBD += base.dbd
gp08_ioc01_DBD += elinp-iocmon.dbd
gp08_ioc01_DBD += elinp-sysmon.dbd
gp08_ioc01_DBD += asyn.dbd
gp08_ioc01_DBD += stream.dbd
gp08_ioc01_DBD += modbus.dbd
gp08_ioc01_DBD += modbusSupport.dbd
gp08_ioc01_DBD += drvAsynIPPort.dbd
gp08_ioc01_DBD += drvAsynSerialPort.dbd
gp08_ioc01_DBD += finsUDP.dbd
gp08_ioc01_DBD += genSubRecord.dbd

# <name>_registerRecordDeviceDriver.cpp will be created from <name>.dbd
gp08_ioc01_SRCS += gp08_ioc01_registerRecordDeviceDriver.cpp
gp08_ioc01_SRCS_DEFAULT += gp08_ioc01Main.cpp
gp08_ioc01_SRCS_vxWorks += -nil-

# The following adds support from base/src/vxWorks
gp08_ioc01_OBJS_vxWorks += $(EPICS_BASE_BIN)/vxComLibrary

# Add a definition for each support application used by this application
gp08_ioc01_LIBS += elinp-iocmon
gp08_ioc01_LIBS += elinp-sysmon
gp08_ioc01_LIBS += asyn
gp08_ioc01_LIBS += stream
gp08_ioc01_LIBS += modbus
gp08_ioc01_LIBS += FINS
gp08_ioc01_LIBS += genSub
gp08_ioc01_LIBS += status

# We need to link this IOC application against the EPICS base libraries
gp08_ioc01_LIBS += $(EPICS_BASE_IOC_LIBS)

include $(TOP)/configure/RULES
#----------------------------------------
#  ADD RULES AFTER THIS LINE:
