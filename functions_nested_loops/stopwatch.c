#include <stdio.h>
#include <unistd.h>
int main(void)
{
	int seconds = 0;
	int minutes = 0;
	int hours = 0;
	

	while(1){
		printf("hours: %d\nminutes: %d\nseconds: %d\n\n", hours, minutes, seconds);
		sleep(1);
		seconds++;
		if(seconds==60){
		seconds = 0;
		minutes++;
		}
		if(minutes==60){
			minutes = 0;
			hours++;
		}
	}
	return(0);
}
