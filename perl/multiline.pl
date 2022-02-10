$a=10;
$var = <<"DEL";
This is the syntax for here document and it will continue
until it encounters a EOF in the first line.
This is case of double quote so variable value will be 
interpolated. For example value of a = $a
DEL
print "$var\n";
