#!/usr/bin/perl
$ENV{HARNESS_ACTIVE} = 1 if scalar @ARGV && shift eq '-tap';
exec './epicsTimeTest' or die "Can't run epicsTimeTest: $!\n";
