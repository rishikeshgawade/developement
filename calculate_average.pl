# this program is for calculate average of array elements
@number=(10,20,30,40,50);
$count=@number;
$sum=0;

foreach $num (@number)
{
	$sum+=$num;
}

print("Average is =",$sum/$count);



