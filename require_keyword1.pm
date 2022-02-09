use strict;
package Foo;
my $number=18;
sub hello
{
 	print("$number\n");
}
sub world
{
	print($number+100,"\n");
}
package bar;
my $number=121;
sub hello
{
 	print("$number\n");
}
sub world
{
	print($number+100,"\n");
}
1;
