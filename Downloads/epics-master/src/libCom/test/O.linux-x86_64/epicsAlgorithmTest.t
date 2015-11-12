#!/usr/bin/perl
$ENV{HARNESS_ACTIVE} = 1 if scalar @ARGV && shift eq '-tap';
exec './epicsAlgorithmTest' or die "Can't run epicsAlgorithmTest: $!\n";
