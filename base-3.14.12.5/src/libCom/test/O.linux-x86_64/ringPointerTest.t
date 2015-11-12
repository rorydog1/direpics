#!/usr/bin/perl
$ENV{HARNESS_ACTIVE} = 1 if scalar @ARGV && shift eq '-tap';
exec './ringPointerTest' or die "Can't run ringPointerTest: $!\n";
