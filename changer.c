#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main(){
	FILE *target,*out;
	char line[150];
	target = fopen("report.txt","r");
	out=fopen("temp.txt","w");
	while(fgets(line,sizeof(line),target)){
		while(strstr(line,"Good")){
			char temp[500];
			int pos = strstr(line,"Good")-line;
			strncpy(temp,line,pos);
			temp[pos]='\0';
			strcat (temp,"Bad ");
			strcat(temp,line+pos+4);
			strcpy(line,temp);
		}
		fputs(line,out);
	}
	fclose(target);
	fclose(out);

	remove("report.txt");
	rename("temp.txt","report.txt");
	printf("JOb completed");
}
