#!/usr/bin/perl
$ENV{HARNESS_ACTIVE} = 1 if scalar @ARGV && shift eq '-tap';
exec './epicsCalcTest' or die "Can't run epicsCalcTest: $!\n";
