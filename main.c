#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

    int choose;
    
    int choose1;
    int choose1_1;
    int choose1_2;
    int choose1_3;
    
    int choose2;
    int choose2_1;
    int choose2_2;
    int choose2_3;
    
    int choose3;
    int choose3_1;
    int choose3_2;
    int choose3_3;
    

    printf("\n ==========Bem vindo ao Sistema de Alunos!==========");
    printf("\n");
    printf("\n Escolha uma das op��es abaixo que voc� deseje explorar:");
    printf("\n");
    printf("\n 1 - C�lculo das Mat�rias Anuais(Portugu�s, Matem�tica e Educa��o F�sica) \n 2 - C�lculo do Semestre de Humanas(Hist�ria, Sociologia, Filosofia, Geografia, e Ingl�s) \n 3 - C�lculo do Semestre de Exatas(F�sica, Biologia, Qu�mica, Espanhol e Artes)");
    printf("\n");
    printf("\n Insira a op��o: ");
    scanf("%d", &choose);
    printf("\n============================================================");
    
    switch(choose){
    	case 1:
    		printf("\n Bem vindo(a) a �rea das mat�rias anuais!");
    		printf("\n Escolha uma das op��es abaixo:");
    		printf("\n");
    		printf("\n 1 - Portugu�s \n 2 - Matem�tica \n 3 - Educa��o F�sica");
    		printf("\n");
    		printf("\n Insira a op��o: ");
    		scanf("%d", &choose1);
    		printf("\n============================================================");
    		
    		switch(choose1){
    			float t;
    			float pb;
    			float c;
    			float tt;
    			float tt1;
    			float b1;
    			float b2;
    			float b3;
    			float b4;
    			int media = 5;
    			case 1:
    				printf("\n ----------C�lculo da nota de Portugu�s----------");
    				printf("\n Escolha quais das op��es abaixo voc� deseja calcular a nota de Portugu�s.");
    				printf("\n");
    				printf("\n 1 - 1� Bimestre \n 2 - 2� Bimestre \n 3 - 3� Bimestre \n 4 - 4� Bimestre \n 5 - Soma Geral dos Bimestres");
    				printf("\n");
    				printf("\n Insira a op��o: ");
    				scanf("%d", &choose1_1);
    				printf("\n============================================================");
					
					switch(choose1_1){
						case 1:
							printf("\n ----------1� Bimestre----------");
							printf("\n Nota das Trilhas: ");
							scanf("%f", &t);
							
							printf("\n Nota da Prova Bimestral: ");
							scanf("%f", &pb);
							
							printf("\n Nota do Caderno: ");
							scanf("%f", &c);
							
							printf("\n Nota do Trabalho 1 ou Teste 1: ");
							scanf("%f", &tt);
							
							printf("\n Nota do Trabalho 2 ou Teste 2: ");
							scanf("%f", &tt1);
							
							printf("\n Sua nota total foi: %.2f", t + pb + c + tt + tt1);
							printf("\n Sua m�dia no Bimestre foi: %.2f", (t + pb + c + tt + tt1)/5);
							
						break;
						case 2:
							printf("\n ----------2� Bimestre----------");
							printf("\n Nota das Trilhas: ");
							scanf("%f", &t);
							
							printf("\n Nota da Prova Bimestral: ");
							scanf("%f", &pb);
							
							printf("\n Nota do Caderno: ");
							scanf("%f", &c);
							
							printf("\n Nota do Trabalho 1 ou Teste 1: ");
							scanf("%f", &tt);
							
							printf("\n Nota do Trabalho 2 ou Teste 2: ");
							scanf("%f", &tt1);
							
							printf("\n Sua nota total foi: %.2f", t + pb + c + tt + tt1);
							printf("\n Sua m�dia no Bimestre foi: %.2f", (t + pb + c + tt + tt1)/5);
						break;
						case 3:
							printf("\n ----------3� Bimestre----------");
							printf("\n Nota das Trilhas: ");
							scanf("%f", &t);
							
							printf("\n Nota da Prova Bimestral: ");
							scanf("%f", &pb);
							
							printf("\n Nota do Caderno: ");
							scanf("%f", &c);
							
							printf("\n Nota do Trabalho 1 ou Teste 1: ");
							scanf("%f", &tt);
							
							printf("\n Nota do Trabalho 2 ou Teste 2: ");
							scanf("%f", &tt1);
							
							printf("\n Sua nota total foi: %.2f", t + pb + c + tt + tt1);
							printf("\n Sua m�dia no Bimestre foi: %.2f", (t + pb + c + tt + tt1)/5);
						break;
						case 4:
							printf("\n ----------4� Bimestre----------");
							printf("\n Nota das Trilhas: ");
							scanf("%f", &t);
							
							printf("\n Nota da Prova Bimestral: ");
							scanf("%f", &pb);
							
							printf("\n Nota do Caderno: ");
							scanf("%f", &c);
							
							printf("\n Nota do Trabalho 1 ou Teste 1: ");
							scanf("%f", &tt);
							
							printf("\n Nota do Trabalho 2 ou Teste 2: ");
							scanf("%f", &tt1);
							
							printf("\n Sua nota total foi: %.2f", t + pb + c + tt + tt1);
							printf("\n Sua m�dia no Bimestre foi: %.2f", (t + pb + c + tt + tt1)/5);
						break;
						case 5:
							printf("\n ----------Soma Geral dos Bimestres----------");
							printf("\n Nota 1� Bimestre: ");
							scanf("%f", &b1);
							
							printf("\n Nota 2� Bimestre: ");
							scanf("%f", &b2);
							
							printf("\n Nota 3� Bimestre: ");
							scanf("%f", &b3);
			
							printf("\n Nota 4� Bimestre: ");
							scanf("%f", &b4);
							
							printf("\n Sua nota total do Ano foi: %.2f", b1 + b2 + b3 + b4);
							printf("\nE sua m�dia Anual foi: %.2f", (b1 + b2 + b3 + b4)/4);
						break;
					}	
    			break;
    			case 2:
    				printf("\n ----------C�lculo da nota de Mat�matica----------");
    				printf("\n Escolha quais das op��es abaixo voc� deseja calcular a nota de Matem�tica.");
    				printf("\n");
    				printf("\n 1 - 1� Bimestre \n 2 - 2� Bimestre \n 3 - 3� Bimestre \n 4 - 4� Bimestre \n 5 - Soma Geral");
    				printf("\n");
    				printf("\n Insira a op��o: ");
    				scanf("%d", &choose1_2);
    				printf("\n============================================================");
    				
    				switch(choose1_2){
						case 1:
							printf("\n ----------1� Bimestre----------");
							printf("\n Nota das Trilhas: ");
							scanf("%f", &t);
							
							printf("\n Nota da Prova Bimestral: ");
							scanf("%f", &pb);
							
							printf("\n Nota do Caderno: ");
							scanf("%f", &c);
							
							printf("\n Nota do Trabalho 1 ou Teste 1: ");
							scanf("%f", &tt);
							
							printf("\n Nota do Trabalho 2 ou Teste 2: ");
							scanf("%f", &tt1);
							
							printf("\n Sua nota total foi: %.2f", t + pb + c + tt + tt1);
							printf("\n Sua m�dia no Bimestre foi: %.2f", (t + pb + c + tt + tt1)/5);
							
						break;
						case 2:
							printf("\n ----------2� Bimestre----------");
							printf("\n Nota das Trilhas: ");
							scanf("%f", &t);
							
							printf("\n Nota da Prova Bimestral: ");
							scanf("%f", &pb);
							
							printf("\n Nota do Caderno: ");
							scanf("%f", &c);
							
							printf("\n Nota do Trabalho 1 ou Teste 1: ");
							scanf("%f", &tt);
							
							printf("\n Nota do Trabalho 2 ou Teste 2: ");
							scanf("%f", &tt1);
							
							printf("\n Sua nota total foi: %.2f", t + pb + c + tt + tt1);
							printf("\n Sua m�dia no Bimestre foi: %.2f", (t + pb + c + tt + tt1)/5);
						break;
						case 3:
							printf("\n ----------3� Bimestre----------");
							printf("\n Nota das Trilhas: ");
							scanf("%f", &t);
							
							printf("\n Nota da Prova Bimestral: ");
							scanf("%f", &pb);
							
							printf("\n Nota do Caderno: ");
							scanf("%f", &c);
							
							printf("\n Nota do Trabalho 1 ou Teste 1: ");
							scanf("%f", &tt);
							
							printf("\n Nota do Trabalho 2 ou Teste 2: ");
							scanf("%f", &tt1);
							
							printf("\n Sua nota total foi: %.2f", t + pb + c + tt + tt1);
							printf("\n Sua m�dia no Bimestre foi: %.2f", (t + pb + c + tt + tt1)/5);
						break;
						case 4:
							printf("\n ----------4� Bimestre----------");
							printf("\n Nota das Trilhas: ");
							scanf("%f", &t);
							
							printf("\n Nota da Prova Bimestral: ");
							scanf("%f", &pb);
							
							printf("\n Nota do Caderno: ");
							scanf("%f", &c);
							
							printf("\n Nota do Trabalho 1 ou Teste 1: ");
							scanf("%f", &tt);
							
							printf("\n Nota do Trabalho 2 ou Teste 2: ");
							scanf("%f", &tt1);
							
							printf("\n Sua nota total foi: %.2f", t + pb + c + tt + tt1);
							printf("\n Sua m�dia no Bimestre foi: %.2f", (t + pb + c + tt + tt1)/5);
						break;
						case 5:
							printf("\n ----------Soma Geral dos Bimestres----------");
							printf("\n Nota 1� Bimestre: ");
							scanf("%f", &b1);
							
							printf("\n Nota 2� Bimestre: ");
							scanf("%f", &b2);
							
							printf("\n Nota 3� Bimestre: ");
							scanf("%f", &b3);
			
							printf("\n Nota 4� Bimestre: ");
							scanf("%f", &b4);
							
							printf("\n Sua nota total do Ano foi: %.2f", b1 + b2 + b3 + b4);
							printf("\nE sua m�dia Anual foi: %.2f", (b1 + b2 + b3 + b4)/4);
						break;
					}
    			break;
    			case 3:
    				printf("\n ----------C�lculo da nota de Educa��o F�sica----------");
    				printf("\n Escolha quais das op��es abaixo voc� deseja calcular a nota de Educa��o F�sica.");
    				printf("\n");
    				printf("\n 1 - 1� Bimestre \n 2 - 2� Bimestre \n 3 - 3� Bimestre \n 4 - 4� Bimestre \n 5 - Soma Geral");
    				printf("\n");
    				printf("\n Insira a op��o: ");
    				scanf("%d", &choose1_3);
    				printf("\n============================================================");
    				
    				switch(choose1_3){
						case 1:
							printf("\n ----------1� Bimestre----------");
							printf("\n Nota das Trilhas: ");
							scanf("%f", &t);
							
							printf("\n Nota da Prova Bimestral: ");
							scanf("%f", &pb);
							
							printf("\n Nota do Caderno: ");
							scanf("%f", &c);
							
							printf("\n Nota do Trabalho 1 ou Teste 1: ");
							scanf("%f", &tt);
							
							printf("\n Nota do Trabalho 2 ou Teste 2: ");
							scanf("%f", &tt1);
							
							printf("\n Sua nota total foi: %.2f", t + pb + c + tt + tt1);
							printf("\n Sua m�dia no Bimestre foi: %.2f", (t + pb + c + tt + tt1)/5);
							
						break;
						case 2:
							printf("\n ----------2� Bimestre----------");
							printf("\n Nota das Trilhas: ");
							scanf("%f", &t);
							
							printf("\n Nota da Prova Bimestral: ");
							scanf("%f", &pb);
							
							printf("\n Nota do Caderno: ");
							scanf("%f", &c);
							
							printf("\n Nota do Trabalho 1 ou Teste 1: ");
							scanf("%f", &tt);
							
							printf("\n Nota do Trabalho 2 ou Teste 2: ");
							scanf("%f", &tt1);
							
							printf("\n Sua nota total foi: %.2f", t + pb + c + tt + tt1);
							printf("\n Sua m�dia no Bimestre foi: %.2f", (t + pb + c + tt + tt1)/5);
						break;
						case 3:
							printf("\n ----------3� Bimestre----------");
							printf("\n Nota das Trilhas: ");
							scanf("%f", &t);
							
							printf("\n Nota da Prova Bimestral: ");
							scanf("%f", &pb);
							
							printf("\n Nota do Caderno: ");
							scanf("%f", &c);
							
							printf("\n Nota do Trabalho 1 ou Teste 1: ");
							scanf("%f", &tt);
							
							printf("\n Nota do Trabalho 2 ou Teste 2: ");
							scanf("%f", &tt1);
							
							printf("\n Sua nota total foi: %.2f", t + pb + c + tt + tt1);
							printf("\n Sua m�dia no Bimestre foi: %.2f", (t + pb + c + tt + tt1)/5);
						break;
						case 4:
							printf("\n ----------4� Bimestre----------");
							printf("\n Nota das Trilhas: ");
							scanf("%f", &t);
							
							printf("\n Nota da Prova Bimestral: ");
							scanf("%f", &pb);
							
							printf("\n Nota do Caderno: ");
							scanf("%f", &c);
							
							printf("\n Nota do Trabalho 1 ou Teste 1: ");
							scanf("%f", &tt);
							
							printf("\n Nota do Trabalho 2 ou Teste 2: ");
							scanf("%f", &tt1);
							
							printf("\n Sua nota total foi: %.2f", t + pb + c + tt + tt1);
							printf("\n Sua m�dia no Bimestre foi: %.2f", (t + pb + c + tt + tt1)/5);
						break;
						case 5:
							printf("\n ----------Soma Geral dos Bimestres----------");
							printf("\n Nota 1� Bimestre: ");
							scanf("%f", &b1);
							
							printf("\n Nota 2� Bimestre: ");
							scanf("%f", &b2);
							
							printf("\n Nota 3� Bimestre: ");
							scanf("%f", &b3);
			
							printf("\n Nota 4� Bimestre: ");
							scanf("%f", &b4);
							
							printf("\n Sua nota total do Ano foi: %.2f", b1 + b2 + b3 + b4);
							printf("\nE sua m�dia Anual foi: %.2f", (b1 + b2 + b3 + b4)/4);
						break;
					}
    			break;
    			default:
    				printf("\n Op��o selecionada Inexistente , por favor tente novamente :(");
			}
    	break;
    	case 2:
    		printf("\n Bem vindo(a) a �rea do semestre de humanas!");
    		printf("\n Escolha uma das op��es abaixo:");
    		printf("\n");
    		printf("\n 1 - Hist�ria  \n 2 - Sociologia \n 3 - Filosofia \n 4 - Geografia 5 - Ingl�s ");
    		printf("\n");
    		printf("\n Insira a op��o: ");
    		scanf("%d", &choose2);
    		printf("\n============================================================");
    		
    		switch(choose2){
    			
    			case 1:
    				printf("\n ----------C�lculo da nota de Hist�ria----------");
    				printf("\n Escolha quais das op��es abaixo voc� deseja calcular a nota de Hist�ria.");
    				printf("\n");
    				printf("\n 1 - 1� Bimestre \n 2 - 2� Bimestre \n  3 - Soma Geral dos Bimestres");
    				printf("\n");
    				printf("\n Insira a op��o: ");
    				scanf("%d", &choose2_1);
    				printf("\n============================================================");
    				
    			break;
    			
			}
    	break;
		default:
			printf("\n Op��o selecionada Inexistente, por favor tente novamente :(");
	}

    return 0;
}

