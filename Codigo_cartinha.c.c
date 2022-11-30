#include <stdio.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL,"Portuguese");
	
	char nome[50],dados,dataDeNascimento[50],dependentes[50],endereco[50];
	char biometria[1];
	
	printf("Deseja inserir biometria? S ou N");
	scanf("%c", &biometria);
	
	switch('biometria'){
		case 's': {
		printf("Eita porra");
			break;
		}
			
	}
	
	printf("Biometria salva com sucesso!\n");
	printf ("\n-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
	
	printf("Infome o nome:");
	scanf(" %[^\n]s",&nome);

	printf("Infome a data de nascimento:");
	scanf(" %[^\n]s",&dataDeNascimento);	
	
	printf("Infome o endereço:");
	scanf(" %[^\n]s",&endereco);
	
	printf("Infome o nome dos dependetes:");
	scanf(" %[^\n]s",&dependentes);
	
	do{
		
		printf ("\n-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n\n");
		printf("O nome informado foi: %s\n",nome);
		printf("A data de nascimento informada foi: %s\n",dataDeNascimento);
		printf("O endereço informado foi: %s\n",endereco);
		printf("O nome dos dependetes informados foram: %s\n",dependentes);
		
		printf("Os dados informados estão coretos?\nDigite <s> ou <n>: ");
		scanf(" %c",&dados);
		printf ("\n\n-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n\n");
	
		
		switch(dados){
			case 'n':
				printf("Infome seu nome:");
				scanf(" %[^\n]s",nome);
				printf("Infome sua data de nascimento:");
				scanf(" %[^\n]s",dataDeNascimento);
				printf("Infome seu endereco:");
				scanf(" %[^\n]s",endereco);
				printf("Infome o nome dos dependetes:");
				scanf(" %[^\n]s",dependentes);									
			break;
			case 's':
			break;
			
			default:
				printf("Valor inválido!\n");
		}
	}while (dados != 's');
	
	printf("Cadastro salvo com sucesso!\n");

	return 0;
}

