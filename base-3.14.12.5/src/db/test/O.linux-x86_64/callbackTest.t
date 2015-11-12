#!/usr/bin/perl
$ENV{HARNESS_ACTIVE} = 1 if scalar @ARGV && shift eq '-tap';
exec './callbackTest' or die "Can't run callbackTest: $!\n";
