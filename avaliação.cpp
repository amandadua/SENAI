#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");

    int i, num;
    printf("Digite um n�mero: \n");
    scanf("%d", &num);
    
    if(num % 3 == 0){
    for(i = 0; i <= num; i++){
    	
    	if (i % 3 == 0){
    printf("O n�mero � m�ltiplo de 3: %d\n", i, "\n");
     }   
  }
}
	
	else if(num % 5 == 0){
	for(i = 0; i <= num; i++){
		
	    if (i % 5 == 0){
		printf("O n�mero � m�ltiplo de 5: %d\n", i, "\n");	
    	}
     }
   }
}
