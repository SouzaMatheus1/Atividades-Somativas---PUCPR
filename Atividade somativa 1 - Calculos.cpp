#include <stdio.h>

int main(){
	int g,h,sgh;
	printf("g h: ");
	scanf("%d %d", &g, &h);
	sgh = g + h;
	if(sgh % 5 == 0)
		printf("%d + %d = %d, e eh impar e multiplo de 5", g,h,sgh);
	else if(sgh % 2 == 0)
		printf("%d + %d = %d, e eh par", g,h,sgh);
	else
		printf("%d + %d = %d, e eh impar", g,h,sgh);
	return 0;
}	
