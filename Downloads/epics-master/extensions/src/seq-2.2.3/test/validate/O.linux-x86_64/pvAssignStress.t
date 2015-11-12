$ENV{HARNESS_ACTIVE} = 1;
$ENV{TOP} = '/home/rory/Desktop/epics/extensions/src/seq-2.2.3';
$ENV{PATH} = '/home/rory/Desktop/epics/extensions/src/seq-2.2.3/bin/:/usr/local/bin:/usr/local/sbin:/usr/bin:/usr/sbin:/bin:/sbin';
$ENV{EPICS_CA_SERVER_PORT} = 10000 + $$ % 30000;
system "./pvAssignStress -S -t -d ../pvAssignStress.db";
