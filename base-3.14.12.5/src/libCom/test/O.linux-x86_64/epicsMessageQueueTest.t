#!/usr/bin/perl
$ENV{HARNESS_ACTIVE} = 1 if scalar @ARGV && shift eq '-tap';
exec './epicsMessageQueueTest' or die "Can't run epicsMessageQueueTest: $!\n";
