//Clase 12 24/11/2022 Errol Cordero
#include <stdio.h>                                                         //Se incluye librer�a necesaria para programaci�n en c
char text [31];                                                            //Se inicializa un array de 3 datos (sin contar el �ltimo espacio reservado que indica el fin del array)
int selec = 0;															   //Se inicializa variable de selecci�n en 0;
int yes = 1;															   //Se inicializa variable lectura nueva (yes) en 1;
int no = 2;															       //Se inicializa variable de no lectura nueva (no) en 2;
int ex = 0;															       //Se inicializa variable de salida (no) en 0;


int main() {    														   //Inicializaci�n de funci�n principal del programa
    printf("Type a text, less than 30 characters without spaces: \n");     //Impresi�n de solicitud para el ingreso iniciallde un texto, este solo se ejecutar� una vez 
    do{                                                                    //Inicializaci�n de instrucci�n do para ejecuci�n del c�digo interno al menos una vez
        
	    scanf("%s", text);                                                 //Solicitud de ingreso de caracteres para el array simulando un string, %s= lectura secuencial de los caracteres ingresados
	    printf("%s\n", text);											   //Impresi�n del texto introducido, %s= lectura secuencial de los caracteres ingresados
	    printf("Do you want to Type another text? 1 = yes, 2 = no: \n");   //Impresi�n del texto preguntando por un nuevo ingreso de datos
	    scanf("%d", &selec);
	    
	    if (selec == yes){                                                 //Instrucci�n if cuya condici�n de entrada es que la variable selec sea igual a yes (1)
	        printf("Type a new text: \n");                                 //Impresi�n de solicitud de un nuevo texto, este se repetir� todas las veces que el usuario desee
	    }
	    
	    if(selec == no){                                                   //Instrucci�n if cuya condici�n de entrada es que la variable selec sea igual a no (0)
	        ex = no;                                                       //Se carga el valor de no en la variable ex 
	    }
	}	
	
    while (ex != no);                                                      //Instrucci�n while ligada a do, cuya condici�n para repetir el bucle es que ex no sea igual a no
    return 0;                                                              //Se retorna un valor de 0

}
