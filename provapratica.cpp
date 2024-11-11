#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	 setlocale(LC_ALL, "portuguese");
	int m[3][2], op;
	float v[3];
	
	for( int i = 0 ; i < 3; i++){
		for( int j = 0; j < 2 ; j ++){
		 printf("\nPreencha as informações do protudo ( id e Quantidade em estoque):\n");
		scanf("%d", &m[i][j]);
		}}
	for (int i = 0; i < 3; i ++){
		printf("\nInsira o preço do %dº produto:\n", i + 1);
		scanf("%f", &v[i]);
	}
	   

	 
	
	
	  do{
	  	printf(" \n1: Exibir protudos; \n2 Vender produto; \n0 Encerrar programa;");
	  	scanf("%d", &op);
	  	
	  	 switch(op){
	  	 	 case 1:
	  	 	 	printf(" ID: %d | Estoque: %d | Preço: %.2f \n", m[0][0], m[0][1], v[0]);
					printf(" ID: %d | Estoque %d | Preço: %.2f \n", m[1][0], m[1][1], v[1]);	
					printf(" ID: %d | Estoque %d | Preço: %.2f \n", m[2][0], m[2][1], v[2]);
			   
			   for( int i = 0; i < 3; i++){
			   	if( m[i][1] < 3){
			   		printf("\nO produto de ID %d tem um estoque baixo. \n ", m[i][0]);
				   }
			   }
					 break;		
	  	 	 case 2:
	  	 	 	int id, qtd; 
					float preco;
	  	 	 	printf("\nInsira o id do produto a ser vendido:\n");
	  	 	 	scanf("%d", &id);
	  	 	 	  
	  	 	 	  for( int i = 0; i < 3; i ++){
	  	 	 	  	  if( id == m[i][0]){
	  	 	 	  	  	 qtd = m[i][1];
	  	 	 	  	  	printf("\nA quantidade restante desse produto é %d \n", m[i][1]);
	  	 	 	  	  	 printf("\nInsira quantas unidades serão vendidas:\n");
	  	 	 	  	  	 scanf("%d", &qtd);
	  	 	 	  	  	  if( m[i][1] <= 0){
	  	 	 	  	  	  	printf("\nEstoque esgotado. Venda não permitida.\n");
								  } 
						 else if( m[i][1] < qtd){
						 	printf("\nEstoque insuficiente, tente novamente.\n");
						 } else{
						 
	  	 	 	  	  	   preco = qtd * v[i];
	  	 	 	  	
	  	 	 	  	printf("\nVenda realizada. Valor total: %.2f \n", preco);
	  	 	 	  	printf("\nA quantidade restante desse produto é %d\n", m[i][1] - qtd);
	  	 	 	  	   m[i][1] = m[i][1] - qtd;
							}
						}
					  }
	  	 	 	break;
	  	 	 	
	  	 	 case 0:
	  	 	 	break;
	  	 	 	
	  	 	}
	  	
	  	
	  	}while( op != 0 );
	  
}
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
