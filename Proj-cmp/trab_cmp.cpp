#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float nota1,nota2,not_trab,Med_sem; // variáveis publicas ou globais
void solicitar_Notas(){ //função que permite ao utilizador inserir os notas
     printf("|Digite as Notas com Atencao    |\n"); 
     printf("|_______________________________|\n");
     
     printf("|Digite a Primeira Nota:  "); 
          scanf("%f",&nota1);  
     printf("|_______________________________|\n");        
     printf("|Digite a Segunda Nota:   ");
          scanf("%f",&nota2); 
     printf("|_______________________________|\n");
       
     printf("|Digite a Nota do Trabalho: "); 
          scanf("%f",&not_trab); 
     printf("|_______________________________|\n");
     _sleep(500);
    system("cls");
}
void solicitar_Novas_Notas(){ //função que permite ao utilizador inserir as novamente as notas
     printf("_________Tente Novamente_________\n");
     printf("Digite Notas entre (0 a 20)\n");
     _sleep(2500);
     system("cls");
     printf("_________Tente Novamente_________\n");
}
void notas_validas(){ //função executada quando as notas são válidas
        Med_sem= ((nota1*0.3)+(nota2*0.3)+(not_trab*0.4));
        
        system("cls");
         if(Med_sem>=13.5){
          printf("\n_____________________RESULTADOS____________________");
          printf("\n| Nota_1 | Nota_2 | Nota Trabalho| Media | Situacao|");
          printf("\n|%2.1f    | %2.1f   |     %2.1f     |  %2.1f |  Apto   |",
          nota1,nota2,not_trab,Med_sem);    
          printf("\n|__________________________________________________|\n");
        }   else if(Med_sem>=7 && Med_sem<13.5){
          printf("\n_____________________RESULTADOS____________________");
          printf("\n| Nota_1 | Nota_2 | Nota Trabalho| Media | Situacao|");
          printf("\n| %2.1f   | %2.1f   |     %2.1f     |  %2.1f | Exame   |",
          nota1,nota2,not_trab,Med_sem);    
          printf("\n|__________________________________________________|\n");
        } else if(Med_sem<7){
          printf("\n_____________________RESULTADOS____________________");
          printf("\n| Nota_1 | Nota_2 | Nota Trabalho| Media | Situacao|");
          printf("\n| %2.1f    | %2.1f    |     %2.1f      |  %2.1f  | Recurso |",
          nota1,nota2,not_trab,Med_sem);    
          printf("\n|__________________________________________________|\n");
        }    
}
void nota_invalidas(){ //função executada quando as notas são invalidas
          system("cls");
          printf("\n            MENSAGEM DE ERRO \n");
          printf("________________________________________\n");
         _sleep(500);
          printf("Digitou ");
           if((nota1<0 || nota1>20)){
              printf("<%.1f >", nota1);
           } if((nota2<0 || nota2>20)){
               printf(" <%.1f> ", nota2);
           } if(not_trab<0 || not_trab>20){
               printf(" <%.1f>", not_trab);
           } 
          printf("\nDados invalidos");
           _sleep(3500);
 	        system("cls");      
}
 void usando_do_while(){
      int test=0; // variavel local 
   do{ 
             printf("________________________________\n");
             printf("|    Validando as Notas.");
             _sleep(1000); printf(".");
             _sleep(1000); printf(".      |");
              printf("\n|_______________________________|\n");
             _sleep(1000);
   	  if((nota1>=0 && nota1<=20) && (nota2>=0 && nota2<=20) && (not_trab>=0 && not_trab<=20)){

            notas_validas();  
            char resp; //variavel local
            printf("Pretendes continuar? [S/N].\n");
             scanf("%s",&resp);
            if(resp=='S'|| resp=='s'){
            	system("cls");
               solicitar_Notas();
            }else{
               notas_validas();             
               test=1;
            }
        }else{
        	 nota_invalidas();
           solicitar_Novas_Notas();
           solicitar_Notas();
		}
   }while(test!=1);
}
main (){
       system("cls");
       printf("A Iniciar...  (LDB)\n");
      _sleep(2000);
	  printf("Grupo A1 de Computacao Cientifica.\n");
      _sleep(1000);
	  printf("Calculadora da media semestral.\n");
	  printf("Versao 0.1\n");
      _sleep(3000);
 	  system("cls");
 	  solicitar_Notas(); 
     usando_do_while();  
}