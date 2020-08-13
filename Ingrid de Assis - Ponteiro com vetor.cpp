#include <stdio.h> //funções de entrada/saída
#include <stdlib.h> //Gerencia memória, comunicação com o ambiente, aritmética de inteiros, busca e etc
#include <conio.h>

int main() {
	
 int i, j,aux; //cria as variáveis
 
 	int *pont = (int *) malloc(sizeof(int)); //aloca um espaço de memória no vetor
 
 puts("Feito por Ingrid de Assis ");
 
    //recebe os valores do vetor
 for(i=0;i < 6;i++){
	printf("Digite os valores do vetor:\n"); 
  	scanf("%d",(pont+i)); //O vetor recebe o valor digitado pelo usuário e a variável i serve para ir andando as casas
 }
 
 //COMEÇA O VETOR EM ORDEM CRESCENTE
 
 for(i=0;i <6; i++){ //sendo i já iniciado em 2 por causa do for de cima ^
 for(j=0; j< 6; j++){  //j se inicia em 0
 
    if(*(pont+i) < *(pont+j)){ //faz a comparaçao do ponteiro com valor i e com valor j
      //se i<j então ocorre a inversão dos valores do vetor
       aux = *(pont+i); //o auxiliar recebe o valor de i para que esse valor não seja perdido (agr aux valerá i)
       *(pont+i) = *(pont+j); //i recebe j
       *(pont+j) = aux; //j receberá o valor do aux, que neste caso vale i
    						 }  //fecha o if  
  					} //fecha o for
 					} //fecha o for
 					
 //imprime o vetor já organizado
 printf("\n\n  Vetor organizado em ordem crescente: \n\n");
  for(i=0;i < 6;i++){
  printf("Posicao [%d] :  %d Endereco: %p \n",i, *(pont+i), pont);
 					} //fecha o for
 					
 

  //DECRESCENTE
 i=0; //limpa o valor da variável
 j=0; //limpa o valor da variável
 for(i=5;i >=0; i--){ 
 for(j=5; j>=0; j--){  
 
    if(*(pont+i) < *(pont+j)){  //faz a comparaçao do ponteiro com valor i e com valor j
      //se i<j então ocorre a inversão dos valores do vetor
       aux = *(pont+i); //o auxiliar recebe o valor de i para que esse valor não seja perdido (agr aux valerá i)
       *(pont+i) = *(pont+j); //i recebe j
       *(pont+j) = aux; //j receberá o valor do aux, que neste caso vale i
     						} //fecha o if 
  					} //fecha o for
 					} //fecha o for
 					
 //imprime o vetor já organizado
	 printf("\n\n  Vetor organizado em ordem decrescente: \n\n");
	 
  for(i=0;i <= 5;i++){
  		printf("Posicao [%d] :  %d  Endereco: %p \n ",i, *(pont+i), pont);
 					} //fecha o for
} //fecha o int

