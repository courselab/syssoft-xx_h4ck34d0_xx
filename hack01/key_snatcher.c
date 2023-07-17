#include <stdio.h>

int main(){
	FILE*fileStream;
	fileStream = fopen("encrypt_strings.txt","r");
	
	char aux[50];
	for(int i=0; i<31; i++)
		fgets(aux, 50, fileStream);
	
	printf("\nencryption key: %s\nUse make run FILE=<filename> KEY=%s", aux, aux);
	fclose(fileStream);
	
	return 0;
}
