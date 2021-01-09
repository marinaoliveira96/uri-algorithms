 #include<stdio.h>
int main() {
 	
 	int cod, quant;
    double total;
 	
    scanf("%d", &cod);
    scanf("%d", &quant);
    
   	switch(cod){
   		case 1:
   			total = 4 * quant;
   			break;
   		case 2:
   			total = 4.5 * quant;
   			break;
   		case 3:
   			total = 5 * quant;
   			break;
   		case 4:
   			total = 2 * quant;
   			break;
   		case 5:
   			total = 1.5 * quant;
   			break;	
	   }
    
    printf("Total: R$ %.2lf\n", total);
 
    return 0;
}

