/* Make this solution parallel: divide 'number_of_random' on N equal numbers and run N calc threads.
Perform a set of tasks: 
	1) Use pthreads, grab results into some thread
	2) Results should be collected into a process from different session - use shared memory to communicate with.
	2) Make a set of experiments:
		a) Check time in single-thread mode and time with N threads, where N - number of your physical cores.
		b) Sequently increasing the number of threads, find the limit of performance increase
*/

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
 
double func(double x)
{
        return 1-x*x; 
}
 
int main()
{
        int point_a = -1; 
        int point_b = 1;
        int number_of_random=0; 
        double s=0; 
        printf("how much random points? ");
        scanf("%ld",&number_of_random); 
        srand((unsigned)time(NULL));
        for (int i=0;i<number_of_random;i++) 
        {
             s+=func(point_a+((double)rand()/RAND_MAX*(point_b-point_a))); 
        }
        s=s/(double)number_of_random*(point_b-point_a); 
        printf("\nintegral %f \n",s);
        return 0;
}
