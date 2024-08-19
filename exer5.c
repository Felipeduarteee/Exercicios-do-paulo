#include<stdio.h>


void main(){

        int mm= 0;
	float media;
        float total;
	int quant_num;

	  printf("Digite a quantidade de numeros a usar:\n");
	  scanf("%d", &quant_num );
          int numeros[quant_num];


	for(int i = 0; i<quant_num;i++){
         printf("numeros:\n");
	 scanf("%d", &numeros[i]);
	 while(numeros[i]<0){
	 
		 printf("Digite numeros positivos e inteiros!!!\n");
		 scanf("%d", &numeros[i]);}

	 total= numeros[i]+total;
	   //printf("O resultado é, %d\n", total);
	    }
	 
	media=total/quant_num;
         printf("O resultado é, %.2f\n", media);
         
	for(int i=0; i<quant_num;i++){
	
		if(numeros[i]>media){
			
			mm=mm+1;
		}
	} 


             printf(" Os valores maiores que a media são: %d\n", mm);
}












