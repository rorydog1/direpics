#!/usr/bin/perl
$ENV{HARNESS_ACTIVE} = 1 if scalar @ARGV && shift eq '-tap';
exec './epicsSockResolveTest' or die "Can't run epicsSockResolveTest: $!\n";
