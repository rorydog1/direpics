#!../../bin/linux-x86_64/gp08_ioc01

< envPaths

cd ${TOP}

## Register all support components
dbLoadDatabase ("dbd/gp08_ioc01.dbd")
gp08_ioc01_registerRecordDeviceDriver (pdbbase)

epicsEnvSet IOCSH_PS1 "GEN-CS-GP08:IOC01 > "

## Brainboxes ES-279 Ports
drvAsynIPPortConfigure ("BB_PORT1",  "192.168.1.11:9001", 0, 0, 0)
drvAsynIPPortConfigure ("BB_PORT2",  "192.168.1.11:9002", 0, 0, 0)
drvAsynIPPortConfigure ("BB_PORT3",  "192.168.1.11:9003", 0, 0, 0)
drvAsynIPPortConfigure ("BB_PORT4",  "192.168.1.11:9004", 0, 0, 0)
drvAsynIPPortConfigure ("BB_PORT5",  "192.168.1.11:9005", 0, 0, 0)
drvAsynIPPortConfigure ("BB_PORT6",  "192.168.1.11:9006", 0, 0, 0)
drvAsynIPPortConfigure ("BB_PORT7",  "192.168.1.11:9007", 0, 0, 0)
drvAsynIPPortConfigure ("BB_PORT8",  "192.168.1.11:9008", 0, 0, 0)

finsUDPInit ("PLC1", "148.79.117.42")

epicsEnvSet ("STREAM_PROTOCOL_PATH",                         "$(AGILENT4UHV)/agilent4uhvApp/protocol")
epicsEnvSet ("STREAM_PROTOCOL_PATH", "$(STREAM_PROTOCOL_PATH):$(AGILENTXGS600)/agilentXgs600App/protocol")
epicsEnvSet ("STREAM_PROTOCOL_PATH", "$(STREAM_PROTOCOL_PATH):$(BILTITEST)/biltItestApp/protocol")

## Load record instances

# LdbLoadRecords ("db/healthMonitor.db")
dbLoadRecords ("db/plc.db")
dbLoadRecords ("db/ionPumps.db")
dbLoadRecords ("db/gauges.db")

cd ${TOP}/iocBoot/${IOC}

iocInit()
