#!/usr/bin/perl
$ENV{HARNESS_ACTIVE} = 1 if scalar @ARGV && shift eq '-tap';
exec './epicsExceptionTest' or die "Can't run epicsExceptionTest: $!\n";
