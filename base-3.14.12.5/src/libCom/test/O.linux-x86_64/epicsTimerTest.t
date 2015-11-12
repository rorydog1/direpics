#!/usr/bin/perl
$ENV{HARNESS_ACTIVE} = 1 if scalar @ARGV && shift eq '-tap';
exec './epicsTimerTest' or die "Can't run epicsTimerTest: $!\n";
