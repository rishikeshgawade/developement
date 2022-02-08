#this program is for practice on loops 
#for loop
for($i=0;$i<10;$i++)
{
    print("$i\t")
}
print "\n";
# While loop
$number=10;
while($number<20)
{
	print("$number\t");
	$number++; 
}

print "\n";
# until loop
$number=10;
until($number>20)
{
	print("$number\t");
	$number++; 
}

print "\n";
#do - while loop
$number=10;
do
{
	print("$number\t");
	$number++; 
}while($number < 20);

print "\n";

@number=(10,20,30,40,50);
foreach $number (@number)
{
	print("$number\t");
}

print "\n";

for($i=1;$i<=10;$i++)
{
	for($j=1;$j<=10;$j++)
	{
		print($i*$j,"\t");
	}
	print "\n";
}
