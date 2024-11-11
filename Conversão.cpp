#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
    
    int c, f, k, num, op;
    
        printf("Digite a temperatura que deseja converter: ");
    scanf("%d", &num);
     
       do{
        printf("\nEscolha: \n1: Celcius para Fahrenheit \n2: Fahrenheit para Celcius \n3: Celcius para Kelvin \n4: Kelvin para Celcius \n5: Sair\n");
    scanf("%d", &op);
    
    	switch(op){
		case 1:
			f = (num * 9/5) + 32;
			printf("O valor convertido é: %d", f,"\n");
			break;
		case 2:
			c = (num - 32) * 5/9;
			printf("O valor convertido é: %d", c,"\n");
			break;
		case 3:
			k = num + 273.15;
			printf("O valor convertido é: %d", k,"\n");
			break;
		case 4:
			c = num - 273.15;
			printf("O valor convertido é: %d", c,"\n");
			break;	
   }
 }while(op != 5);
}


