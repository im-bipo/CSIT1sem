/**** Demonstration of IF nested IF statement *****/
#include <stdio.h>
#include <conio.h>
int main ()
{
	int age;
	printf("Enter your age : \n");
	scanf("%d", &age);
	if (age >12){
		if (age >18){
			if (age > 50){
				printf("\nYou are an adult");
				
				
			}
			else {
				printf("\nYou are old ");
			}		
		}	
		else {
			printf("\nYou are a Teenager.");
		}
		
	}
	else {
		printf("\nYou are a child.");
	}
	
	
	return 0;
}
