#!/usr/bin/perl
$ENV{HARNESS_ACTIVE} = 1 if scalar @ARGV && shift eq '-tap';
exec './ringBytesTest' or die "Can't run ringBytesTest: $!\n";
