#include <linux/switchscheduler.h>
#include <stdio.h>

main(){
	int scheduler_type;
	printf("Enter 1 or 2 for the scheduler type: ");
	scanf("%d",&scheduler_type);
	switchscheduler(scheduler_type);
}
