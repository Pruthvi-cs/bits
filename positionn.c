

#include<stdio.h>
#include<unistd.h>
void main(){
	int i,j=0;
	for (i=10;i<20;i++){
		for(j=10;j<=i;j++){
			if(j==10||i==j||i==19){
				printf("%c[

%d;%df",0x1B,i,j);
                		printf("*\n");
                		usleep(200000);
				}
		}
	}
	printf("\n");
}
