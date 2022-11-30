/*estudar ****long int**** */
#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL,"Portuguese");
	int dia=0, mes=0, ano=0, verificaData, verificaNumero, verificaCPF;
	char nome[80],dados,endereco[100], CPF[15], telefone[15];
	char biometriaResponsavel;
	char sexo[10];
	
	
		printf("Deseja inserir biometria? S ou N: ");
		scanf("%c", &biometriaResponsavel);
	
	switch(biometriaResponsavel){
		case 's':
		case 'S': {
			printf("\nInsira o dedo anelar para realizar a biometria: \n");
			printf("(//dedo deve ser inserido nesse momento//)\n");
			printf ("\n-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
			printf("Biometria salva com sucesso!\n");
			printf ("-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
		break;
		
		case 'n':
		case 'N': {
			printf ("\n-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*");
			printf("\nInsira o restante dos dados necessários.\n");
			printf ("-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*");			
			break;
		}
		}
			
	}
	
	
	printf("\n\nInforme o nome do responsável: ");
	scanf(" %[^\n]s",&nome);

	fflush(stdin);		
	printf("\nInforme o CPF do responsável (000.000.000-00): ");
	scanf("%s", &CPF);
	
	do{
			
		printf("\nData de nascimento do responsável: (dia mes ano) ");
		scanf("%d%d%d", &dia, &mes, &ano);
		if(dia>31 || mes<1 || mes>12 || ano>2004 || ano<1900){
			printf("Data inválida\n");
			verificaData = 0;
		}
		else{
			verificaData = 1;
		}
	}while(verificaData != 1);
		
	
	fflush(stdin);
	printf("\nInforme o sexo do responsável: masculino, feminino, outros: ");
	scanf("%s", &sexo);
		
	printf("\nInfome o endereço do responsável: ");
	scanf(" %[^\n]s",&endereco);
	
	fflush(stdin);		
	printf("\nInforme o telefone do responsável (ddd) + numero): ");
	fgets(telefone, 15, stdin);


		
		printf ("\n-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n\n");
		printf("O nome informado foi: %s\n",nome);
		printf("O CPF informado foi: %s\n", CPF);
		printf("A data de nascimento informada foi: %d/%d/%d\n", dia, mes, ano);
		printf("O sexo informado foi: %s\n", sexo);
		printf("O endereço informado foi: %s\n",endereco);
		printf("O numero informado foi: %s\n", telefone);
		

		printf ("\n\n-*-*-*-*-*-*-*-*-*-*-*-*-*\n\n");
		printf("Cadastro salvo com sucesso!\n");
		printf ("\n\n-*-*-*-*-*-*-*-*-*-*-*-*-*\n\n");
		
		printf("SISTEMA DIRECIONA PARA CADASTRO DOS DEPENDENTES");

	return 0;
}
