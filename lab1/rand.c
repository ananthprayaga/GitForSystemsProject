#include<stdlib.h>
#include<stdio.h>
#include<time.h>
int main(){
	int i = 0;
	char record[i];
	srand(time(NULL));
	for(i=0; i<120; i++){
		record[i] = '0' + rand()%26;
		}
	printf("record: %s",record);
		
}
