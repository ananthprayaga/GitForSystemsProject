#include<stdlib.h>
#include<stdio.h>
#include<time.h>
int main(){
	srand(time(NULL));
	int randomNumber = rand()%8;
	while(){
		char randomletter = '0' + rand()%26;
		printf("%d, %c\n",randomNumber,randomletter);
		}
}
