#this program is for accept input from user 

$var= <<"DEL";
this is a variable which accept lines 
upto the DEL charcter
DEL
print "$var\n";

# below is the code for accept user input

$number= int(<STDIN>);

chomp $number;

print("Double of =",$number*2);
