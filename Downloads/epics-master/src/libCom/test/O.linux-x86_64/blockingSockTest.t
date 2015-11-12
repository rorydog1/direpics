#!/usr/bin/perl
$ENV{HARNESS_ACTIVE} = 1 if scalar @ARGV && shift eq '-tap';
exec './blockingSockTest' or die "Can't run blockingSockTest: $!\n";
