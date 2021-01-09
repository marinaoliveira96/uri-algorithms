#include<stdio.h>
int main(){
	
	int n1,n2, i, maior, menor, soma;
	scanf("%d", &n1);
	scanf("%d", &n2);
	soma = 0;
	
	// condição pra saber o maior
	if (n1 > n2){
		printf("maior = %d\n", n1);
		maior = n1;
		menor = n2;
	}else{
		maior = n2;
		menor = n1;
		printf("maior = %d\n", n2);
	}
	for(i=menor; i < maior; i++){
		if(i % 2 != 0){
			soma += i;
			if(i == menor || i == maior){
				soma -= i;
			}
			printf("soma %d = %d\n",i ,soma);
		}
	}
	
	//exluir o maior e menor valor
	printf("soma final = %d\n", soma);
	return 0;
}	
