#!/usr/bin/perl
$ENV{HARNESS_ACTIVE} = 1 if scalar @ARGV && shift eq '-tap';
exec './macLibTest' or die "Can't run macLibTest: $!\n";
