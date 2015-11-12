#!/usr/bin/perl
$ENV{HARNESS_ACTIVE} = 1 if scalar @ARGV && shift eq '-tap';
exec './epicsThreadTest' or die "Can't run epicsThreadTest: $!\n";
