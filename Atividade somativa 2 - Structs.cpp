#include <stdio.h>
#include <string.h>
#define tam 3

typedef struct{
	char nome[20];
	char sexo;
	float rend;
} pessoa;

int main(){
	pessoa p[tam];
	char temp[20];
	
	for(int i=0;i<tam;i++){
		printf("Digite o nome da pessoa %d..........: ", i+1);
		fflush(stdin);
        gets(p[i].nome);
        
		printf("Digite o sexo da pessoa %d..........: ", i+1);
		scanf("%c", &p[i].sexo);
		
		printf("Digite os rendimentos da pessoa %d..: ", i+1);
		scanf("%f", &p[i].rend);
		
		printf("------------------------------------\n");
	}
	
	printf("Nome           Sexo    Rend(R$)\n");
	printf("-------------------------------\n");
	for(int i=0;i<tam;i++){
		printf("%s    %c     R$%.2f\n", p[i].nome,p[i].sexo,p[i].rend);
		
	}
}

