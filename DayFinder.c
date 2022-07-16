#include<stdio.h>
int getday(int monthnumber, int date) {
	int codenumbers[] = {4, 0, 3, 0, 3, 6, 2, 4, 5, 0, 1, 3};
	char days[7][10] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thrusday", "Friday", "Saturday"};
	monthnumber = monthnumber - 1;
	int daycode = (codenumbers[monthnumber]+ date) % 7;
	if (daycode == 0) {
		printf("2078 /%d /%d is Saturday!!\n", monthnumber+1, date);
	}
	else {	
		printf("2078 /%d /%d is %s!!\n", monthnumber+1, date, days[daycode-1]);
	}
	return 0;	
}
int main(void) {
	int monthnumber, date;
	printf("\t\t\t\tWelcome to day finder\n");
	printf("\t\t\t\t~~~~~~~~~~~~~~~~~~~~~\n");
	printf("Know day of every date of 2078, Enjoy for free!\n");
	printf("Input the month number: \n");	
	scanf("%d", &monthnumber);
	printf("Input date: \n");
	scanf("%d", &date);
	if (monthnumber > 0 && monthnumber < 13 && date > 0 && date < 33) {
		getday(monthnumber, date);
	}
	else {
		printf("Can not proceed..\n");
	}
	main();
}
