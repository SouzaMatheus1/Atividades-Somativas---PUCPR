#include <stdio.h>

#define IMPRIME(num, str)\
	{\
		printf("%d", num);\
		printf(" eh um numero");\
		printf(" %s.", str);\
		printf("\n");\
	}
	
#define MIN(x, y, str)\
	{\
		if(x < y){\
 		printf("%d", x);\
		printf(" eh ");\
		printf(" %s.", str);\
		printf("\n");\
	}\
	}
#define MAX(x, y, str)\
	{\
		if(x > y){\
 		printf("%d", x);\
		printf(" eh ");\
		printf(" %s.", str);\
		printf("\n");\
		}\
	}

int parimpar(int n);
int min(int n1, int n2);

int main(){
	int n1,n2;
	printf("Digite dois numeros inteiros: ");
	scanf("%d %d", &n1,&n2);
	
	parimpar(n1);
	parimpar(n2);
	
	MIN(n1, n2, "menor");
	MAX(n1, n2, "maior");

}

int parimpar(int n){
	if(n % 2 == 0){
		IMPRIME(n, "par");
	}else IMPRIME(n, "impar");
}

int min(int n1, int n2){
	if(n1 < n2)
		MIN(n1, n2, "menor")
	else MAX(n1, n2, "maior")
}
