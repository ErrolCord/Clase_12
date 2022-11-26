//Clase 12 24/11/2022 Errol Cordero
#include <stdio.h>
char text [30];
int selec = 0;
int out = 2;
int string (int selec);

int main() {
	while (selec != out);{
	string(selec);
	}

	return 0;
}

int string (int selec){
	printf("Type a text, less than 30 characters without spaces: \n");
	scanf("%s", text);
	printf("%s\n", text);
	printf("Do you want to Type another text? \n");
	scanf("%d", selec);	
	return selec;
}
