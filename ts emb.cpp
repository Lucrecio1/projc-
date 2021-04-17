#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
	float p,np;
	float pc,npc,sal,vlv,cmss,salf;
	
	int n1,n2,n3,r;
	float t1,t2,m;
	
    	printf("digite o primeiro numero:");
	       scanf(" %d", &n1);
	
	           printf("digite o segundo numero:");
	             scanf("%d", &n2);
	
    printf("\n-----------------exercicio n1---------------------------");
	printf("\n a diferenca entre %d e %d e de %d", n1,n2,r=n1-n2);
    printf("\n--------------------------------------------------------");
    printf("\n");
    
    printf("digite o terceiro numero:");
	             scanf("%d", &n3);
	 printf("\n-----------------exercicio n2---------------------------");
	 r=0;
	printf("\n a multiplicacao entre %d , %d , %d e %d", n1,n2,n3,r=(n1*n2*n3));
    printf("\n--------------------------------------------------------");
    printf("\n");       
    
    printf("\n-----------------exercicio n3---------------------------");
	 r=0;
	printf("\n a divisao entre %d e %d e igual %d", n1,n2,r=(n1/n2));
    printf("\n--------------------------------------------------------");
    printf("\n");       
    
    printf("digite a primeira nota:");
	       scanf(" %f", &t1);
	
	 printf("digite a segunda nota:");
	 scanf("%f", &t2);
	             
	    m=(((t1*2)+(t2*3))/5);
	             
	printf("\n-----------------exercicio n4---------------------------");
	printf("\n a media entre %4.1f e %4.1f e igual %4.1f", t1,t2,m);
    printf("\n--------------------------------------------------------");
    printf("\n"); 
    
    printf("digite o valor do produto:");
    scanf(" %f", &pc);
      
    	printf("\n-----------------exercicio n5---------------------------");  
        printf("\n o novo preco e: %5.2f ", npc=(pc-0.1));           
	    printf("\n--------------------------------------------------------");  
	    printf("\n");
	    
	 printf(" digite o salario do funcionarios :");
	 scanf("%f", &sal);
	 
	 printf("digite o valor das suas vendas:");
	 scanf("%f", &vlv);
	 
	 cmss=vlv/100;
	 salf=sal+cmss;
	 
	 printf("\n-----------------exercicio n6---------------------------");
	 printf("\n a comissao e igual a :%5.2f e o seu salario fixo e %5.2f:",cmss,salf);  
	 printf("\n--------------------------------------------------------"); 
    
    
    //printf("digite o peso: ");
    //scanf("% f ", &p);    
}