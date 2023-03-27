#include<stdio.h>
#include<string.h>

void main() {
	char red[255], * posRec, Rec[255], red1[255];
	gets(red);
	strcpy(red1, red);
	posRec = strtok(red, " ");
	while (posRec) {
		strcpy(Rec, posRec);
		posRec = strtok(NULL, " ");
	}
	strncpy(red, red1, strlen(red1) - strlen(Rec));
	strcat(Rec, " ");
	strcat(Rec, red);
	Rec[strlen(red1)] = '\0';
	printf("%s\n", Rec);
}