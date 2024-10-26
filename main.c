/*Este codigo não está 100%, mas funciona  as primeiras opções dele, dê um olhada e descubra*/
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
    printf("\n Escolha uma das opções abaixo que você deseje explorar:");
    printf("\n");
    printf("\n 1 - Cálculo das Matérias Anuais(Português, Matemática e Educação Física) \n 2 - Cálculo do Semestre de Humanas(História, Sociologia, Filosofia, Geografia, e Inglês) \n 3 - Cálculo do Semestre de Exatas(Física, Biologia, Química, Espanhol e Artes)");
    printf("\n");
    printf("\n Insira a opção: ");
    scanf("%d", &choose);
    printf("\n============================================================");
    
    switch(choose){
    	case 1:
    		printf("\n Bem vindo(a) a área das matérias anuais!");
    		printf("\n Escolha uma das opções abaixo:");
    		printf("\n");
    		printf("\n 1 - Português \n 2 - Matemática \n 3 - Educação Física");
    		printf("\n");
    		printf("\n Insira a opção: ");
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
    				printf("\n ----------Cálculo da nota de Português----------");
    				printf("\n Escolha quais das opções abaixo você deseja calcular a nota de Português.");
    				printf("\n");
    				printf("\n 1 - 1º Bimestre \n 2 - 2º Bimestre \n 3 - 3º Bimestre \n 4 - 4º Bimestre \n 5 - Soma Geral dos Bimestres");
    				printf("\n");
    				printf("\n Insira a opção: ");
    				scanf("%d", &choose1_1);
    				printf("\n============================================================");
					
					switch(choose1_1){
						case 1:
							printf("\n ----------1º Bimestre----------");
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
							printf("\n Sua média no Bimestre foi: %.2f", (t + pb + c + tt + tt1)/5);
							
						break;
						case 2:
							printf("\n ----------2º Bimestre----------");
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
							printf("\n Sua média no Bimestre foi: %.2f", (t + pb + c + tt + tt1)/5);
						break;
						case 3:
							printf("\n ----------3º Bimestre----------");
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
							printf("\n Sua média no Bimestre foi: %.2f", (t + pb + c + tt + tt1)/5);
						break;
						case 4:
							printf("\n ----------4º Bimestre----------");
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
							printf("\n Sua média no Bimestre foi: %.2f", (t + pb + c + tt + tt1)/5);
						break;
						case 5:
							printf("\n ----------Soma Geral dos Bimestres----------");
							printf("\n Nota 1º Bimestre: ");
							scanf("%f", &b1);
							
							printf("\n Nota 2º Bimestre: ");
							scanf("%f", &b2);
							
							printf("\n Nota 3º Bimestre: ");
							scanf("%f", &b3);
			
							printf("\n Nota 4º Bimestre: ");
							scanf("%f", &b4);
							
							printf("\n Sua nota total do Ano foi: %.2f", b1 + b2 + b3 + b4);
							printf("\nE sua média Anual foi: %.2f", (b1 + b2 + b3 + b4)/4);
						break;
					}	
    			break;
    			case 2:
    				printf("\n ----------Cálculo da nota de Matématica----------");
    				printf("\n Escolha quais das opções abaixo você deseja calcular a nota de Matemática.");
    				printf("\n");
    				printf("\n 1 - 1º Bimestre \n 2 - 2º Bimestre \n 3 - 3º Bimestre \n 4 - 4º Bimestre \n 5 - Soma Geral");
    				printf("\n");
    				printf("\n Insira a opção: ");
    				scanf("%d", &choose1_2);
    				printf("\n============================================================");
    				
    				switch(choose1_2){
						case 1:
							printf("\n ----------1º Bimestre----------");
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
							printf("\n Sua média no Bimestre foi: %.2f", (t + pb + c + tt + tt1)/5);
							
						break;
						case 2:
							printf("\n ----------2º Bimestre----------");
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
							printf("\n Sua média no Bimestre foi: %.2f", (t + pb + c + tt + tt1)/5);
						break;
						case 3:
							printf("\n ----------3º Bimestre----------");
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
							printf("\n Sua média no Bimestre foi: %.2f", (t + pb + c + tt + tt1)/5);
						break;
						case 4:
							printf("\n ----------4º Bimestre----------");
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
							printf("\n Sua média no Bimestre foi: %.2f", (t + pb + c + tt + tt1)/5);
						break;
						case 5:
							printf("\n ----------Soma Geral dos Bimestres----------");
							printf("\n Nota 1º Bimestre: ");
							scanf("%f", &b1);
							
							printf("\n Nota 2º Bimestre: ");
							scanf("%f", &b2);
							
							printf("\n Nota 3º Bimestre: ");
							scanf("%f", &b3);
			
							printf("\n Nota 4º Bimestre: ");
							scanf("%f", &b4);
							
							printf("\n Sua nota total do Ano foi: %.2f", b1 + b2 + b3 + b4);
							printf("\nE sua média Anual foi: %.2f", (b1 + b2 + b3 + b4)/4);
						break;
					}
    			break;
    			case 3:
    				printf("\n ----------Cálculo da nota de Educação Física----------");
    				printf("\n Escolha quais das opções abaixo você deseja calcular a nota de Educação Física.");
    				printf("\n");
    				printf("\n 1 - 1º Bimestre \n 2 - 2º Bimestre \n 3 - 3º Bimestre \n 4 - 4º Bimestre \n 5 - Soma Geral");
    				printf("\n");
    				printf("\n Insira a opção: ");
    				scanf("%d", &choose1_3);
    				printf("\n============================================================");
    				
    				switch(choose1_3){
						case 1:
							printf("\n ----------1º Bimestre----------");
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
							printf("\n Sua média no Bimestre foi: %.2f", (t + pb + c + tt + tt1)/5);
							
						break;
						case 2:
							printf("\n ----------2º Bimestre----------");
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
							printf("\n Sua média no Bimestre foi: %.2f", (t + pb + c + tt + tt1)/5);
						break;
						case 3:
							printf("\n ----------3º Bimestre----------");
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
							printf("\n Sua média no Bimestre foi: %.2f", (t + pb + c + tt + tt1)/5);
						break;
						case 4:
							printf("\n ----------4º Bimestre----------");
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
							printf("\n Sua média no Bimestre foi: %.2f", (t + pb + c + tt + tt1)/5);
						break;
						case 5:
							printf("\n ----------Soma Geral dos Bimestres----------");
							printf("\n Nota 1º Bimestre: ");
							scanf("%f", &b1);
							
							printf("\n Nota 2º Bimestre: ");
							scanf("%f", &b2);
							
							printf("\n Nota 3º Bimestre: ");
							scanf("%f", &b3);
			
							printf("\n Nota 4º Bimestre: ");
							scanf("%f", &b4);
							
							printf("\n Sua nota total do Ano foi: %.2f", b1 + b2 + b3 + b4);
							printf("\nE sua média Anual foi: %.2f", (b1 + b2 + b3 + b4)/4);
						break;
					}
    			break;
    			default:
    				printf("\n Opção selecionada Inexistente , por favor tente novamente :(");
			}
    	break;
    	case 2:
    		printf("\n Bem vindo(a) a área do semestre de humanas!");
    		printf("\n Escolha uma das opções abaixo:");
    		printf("\n");
    		printf("\n 1 - História  \n 2 - Sociologia \n 3 - Filosofia \n 4 - Geografia 5 - Inglês ");
    		printf("\n");
    		printf("\n Insira a opção: ");
    		scanf("%d", &choose2);
    		printf("\n============================================================");
    		
    		switch(choose2){
    			
    			case 1:
    				printf("\n ----------Cálculo da nota de História----------");
    				printf("\n Escolha quais das opções abaixo você deseja calcular a nota de História.");
    				printf("\n");
    				printf("\n 1 - 1º Bimestre \n 2 - 2º Bimestre \n  3 - Soma Geral dos Bimestres");
    				printf("\n");
    				printf("\n Insira a opção: ");
    				scanf("%d", &choose2_1);
    				printf("\n============================================================");
    				
    			break;
    			
			}
    	break;
		default:
			printf("\n Opção selecionada Inexistente, por favor tente novamente :(");
	}

    return 0;
}

