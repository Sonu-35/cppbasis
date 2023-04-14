//college ki bkchodi
#include<stdio.h>
#include<math.h>

int main()
{
	 int dis, time, speed,n;

	 printf("Speed of the train with given input is \n");

	 printf("Enter the distance of the train(in m) \n");
	 scanf("%d", &dis);

	printf("Enter the time taken by the train(in sec) \n");
	scanf("%d", &time);

	speed = dis / time;

	printf("Speed of the train(in m/sec) %d\n", speed);

	n = speed *(3600/1000);
	printf("Speed of the train(in km/hr) %d\n", n);
	 
	 return(0);
}