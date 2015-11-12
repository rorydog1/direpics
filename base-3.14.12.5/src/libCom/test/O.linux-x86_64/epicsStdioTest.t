#!/usr/bin/perl
$ENV{HARNESS_ACTIVE} = 1 if scalar @ARGV && shift eq '-tap';
exec './epicsStdioTest' or die "Can't run epicsStdioTest: $!\n";
