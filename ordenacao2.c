#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define LISTA_MAX 100
#define NOME_MAX 21

typedef struct { 
  char nome[NOME_MAX]; 
  }COMP_CRIANCA;

int main(void) {
	int n, ruim, bom, i;
	char c;
  char aux[21];

	COMP_CRIANCA vetor[LISTA_MAX];
	
	scanf("%d\n", &n);
	for(i = 0, ruim = 0, bom = 0; i < n; i++) {
		scanf(" %c %[^\n]", &c, vetor[i].nome);
		if(c == '+')
			bom++;
		else
			ruim++;
	}
	
  for(int i = 0; i < n-1; i++){
    for(int j = i+1; j < n; j++){
      if(strcmp(vetor[i].nome, vetor[j].nome) > 0){
        strcpy(aux, vetor[i].nome);
        strcpy(vetor[i].nome, vetor[j].nome);
        strcpy(vetor[j].nome, aux);
      }
    }
  }


	for(i = 0; i < n; i++)
		printf("%s\n", vetor[i].nome);
	
  
  printf("Se comportaram: %d | Nao se comportaram: %d\n", bom, ruim);
	
  return 0;
}
