$ENV{HARNESS_ACTIVE} = 1;
$ENV{TOP} = '/home/rory/Desktop/epics/extensions/src/seq-2.2.3';
$ENV{PATH} = '/home/rory/Desktop/epics/extensions/src/seq-2.2.3/bin/:/usr/local/bin:/usr/local/sbin:/usr/bin:/usr/sbin:/bin:/sbin';
$ENV{EPICS_CA_SERVER_PORT} = 10000 + $$ % 30000;
my $pid = fork();
die "fork failed: $!" unless defined($pid);
if (!$pid) {
  exec("./pvPutAsync -S -d ../pvPutAsync.db");
  die "exec failed: $!";
}
system("./pvPutAsync -S -t");
kill 9, $pid or die "kill failed: $!";
