#!/usr/bin/perl
$ENV{HARNESS_ACTIVE} = 1 if scalar @ARGV && shift eq '-tap';
exec './epicsThreadOnceTest' or die "Can't run epicsThreadOnceTest: $!\n";
