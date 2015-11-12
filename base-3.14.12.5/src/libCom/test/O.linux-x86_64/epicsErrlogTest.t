#!/usr/bin/perl
$ENV{HARNESS_ACTIVE} = 1 if scalar @ARGV && shift eq '-tap';
exec './epicsErrlogTest' or die "Can't run epicsErrlogTest: $!\n";
