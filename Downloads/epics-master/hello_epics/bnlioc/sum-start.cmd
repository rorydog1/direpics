epicsEnvSet("ARCH","linux-x86_64")
epicsEnvSet("IOC","mytestioc")
dbLoadRecords("sum.db","INST=calc")
iocInit

