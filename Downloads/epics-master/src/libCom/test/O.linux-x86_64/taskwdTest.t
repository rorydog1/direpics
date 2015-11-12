#!/usr/bin/perl
$ENV{HARNESS_ACTIVE} = 1 if scalar @ARGV && shift eq '-tap';
exec './taskwdTest' or die "Can't run taskwdTest: $!\n";
