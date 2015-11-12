#!/usr/bin/perl
$ENV{HARNESS_ACTIVE} = 1 if scalar @ARGV && shift eq '-tap';
exec './epicsThreadPrivateTest' or die "Can't run epicsThreadPrivateTest: $!\n";
