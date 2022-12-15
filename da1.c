#include <stdio.h>
 #include<time.h>

void towerOfHanoi (int n, char from_rod, char to_rod, char aux_rod)
{
	if (n == 1)
	{
		printf ("\n Move disk 1 from rod %c to rod %c", from_rod, to_rod);
		return;
	}
	towerOfHanoi (n-1, from_rod, aux_rod, to_rod);
   	printf ("\n Move disk %d from rod %c to rod %c", n, from_rod, to_rod);
	towerOfHanoi (n-1, aux_rod, to_rod, from_rod);
}

int main ()
{
	int n = 4;
	clock_t start=clock (); 
	towerOfHanoi (n, 'A','C', 'B');
 	clock_t end=clock();
	printf ("Start time is %lf\n",(double)start); 
	printf ("End time is %lf\n",(double)end); 
	printf ("Total time is %lf\n",(double)(end-start));
	return 0;
}

