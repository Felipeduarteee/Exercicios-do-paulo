#include<stdio.h>

void main(){

int salario[999];
int novo_salario[999];
int cod[999];
int percentual[3];
//percentual[0,1,2] = 15,10,5;
percentual[0] = 15;
percentual[1] = 10;
percentual[2] = 5;


     for(int i = 0; i<999; i++){

	     printf("digite seu cod: ");
             scanf("%d", &cod[i]);


	if(cod[i]!=999){        
	printf("digite seu salario:");
	scanf("%d", &salario[i]);
	if(salario[i]<=500){
		novo_salario[i]=((salario[i]*percentual[0]/100)+salario[i]);
	     //   novo_salario[i]=salario[i]+salario[i]*15/100;	
		printf(" O salario ficou %d\n", novo_salario[i]);

	}else if(salario[i]<=1000){
	
		novo_salario[i]=((salario[i]*percentual[1]/100)+salario[i]);
		printf(" O salario ficou %d\n", novo_salario[i]);
	}
	else{
	
		novo_salario[i]=((salario[i]*percentual[2]/100)+salario[i]);
		printf(" O salario ficou %d\n", novo_salario[i]);

	}
	
}
}
}     









