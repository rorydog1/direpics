#!/usr/bin/perl
$ENV{HARNESS_ACTIVE} = 1 if scalar @ARGV && shift eq '-tap';
exec './epicsEnvTest' or die "Can't run epicsEnvTest: $!\n";
