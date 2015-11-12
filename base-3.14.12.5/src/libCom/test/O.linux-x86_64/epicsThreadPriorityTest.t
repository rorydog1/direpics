#!/usr/bin/perl
$ENV{HARNESS_ACTIVE} = 1 if scalar @ARGV && shift eq '-tap';
exec './epicsThreadPriorityTest' or die "Can't run epicsThreadPriorityTest: $!\n";
