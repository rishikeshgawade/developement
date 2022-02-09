package require_keyword1;
use strict;
use Exporter;
our @ISA=qw(Exporter);
our @EXPORT=qw(hello world $number);

our $number=18;
sub hello
{
 	print("$number\n");
}
sub world
{
	print($number+100,"\n");
}
1;
