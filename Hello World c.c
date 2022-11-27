//Clase 12 24/11/2022 Errol Cordero
#include <stdio.h>                                                         //Se incluye librería necesaria para programación en c
char text [31];                                                            //Se inicializa un array de 3 datos (sin contar el último espacio reservado que indica el fin del array)
int selec = 0;															   //Se inicializa variable de selección en 0;
int yes = 1;															   //Se inicializa variable lectura nueva (yes) en 1;
int no = 2;															       //Se inicializa variable de no lectura nueva (no) en 2;
int ex = 0;															       //Se inicializa variable de salida (no) en 0;


int main() {    														   //Inicialización de función principal del programa
    printf("Type a text, less than 30 characters without spaces: \n");     //Impresión de solicitud para el ingreso iniciallde un texto, este solo se ejecutará una vez 
    do{                                                                    //Inicialización de instrucción do para ejecución del código interno al menos una vez
        
	    scanf("%s", text);                                                 //Solicitud de ingreso de caracteres para el array simulando un string, %s= lectura secuencial de los caracteres ingresados
	    printf("%s\n", text);											   //Impresión del texto introducido, %s= lectura secuencial de los caracteres ingresados
	    printf("Do you want to Type another text? 1 = yes, 2 = no: \n");   //Impresión del texto preguntando por un nuevo ingreso de datos
	    scanf("%d", &selec);
	    
	    if (selec == yes){                                                 //Instrucción if cuya condición de entrada es que la variable selec sea igual a yes (1)
	        printf("Type a new text: \n");                                 //Impresión de solicitud de un nuevo texto, este se repetirá todas las veces que el usuario desee
	    }
	    
	    if(selec == no){                                                   //Instrucción if cuya condición de entrada es que la variable selec sea igual a no (0)
	        ex = no;                                                       //Se carga el valor de no en la variable ex 
	    }
	}	
	
    while (ex != no);                                                      //Instrucción while ligada a do, cuya condición para repetir el bucle es que ex no sea igual a no
    return 0;                                                              //Se retorna un valor de 0

}
