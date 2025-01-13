#include <stdio.h> // Biblioteca de comunicação com o usuár
#include <stdlib.h> //biblioteca de alocação de espaço em memória
#include <locale.h> // biblioteca de alocações de texto por região
#include <string.h> // Biblioteca responsável por cuidar das string

int registro() // Função por cadastrar os usuários no sistema
{    
    // Inicio na criação de variáveis/string
	char arquivo[40];
    char cpf[40];
    char nome[40];
    char sobrenome[40];
    char cargo[40];
    // Final na criação de variáveis/string
    
    printf("Digite o CPF a ser cadastrado: "); // Coletando informação do usuário
    scanf("%s", cpf); // %s refere-se a string
    
    strcpy(arquivo, cpf); // Responsavel por copiar os valores das string
    
    FILE *file; // Cria o arquivo 
    file = fopen(arquivo, "w"); // Cria o arquivo e o "w" significa escrever
    fprintf(file,cpf); // Salva o valor da variável
    fclose(file); // Fecha o arquivo
    
    file = fopen(arquivo, "a");
    fprintf(file,","); // Salva o valor da variável
    fclose(file);// Fecha o arquivo
    
    printf("Digite o nome a ser cadastrado: "); // Coletando informação do usuário
    scanf("%s",nome);// %s refere-se a string
    
    file = fopen(arquivo, "a");
    fprintf(file,nome);// Salva o valor da variável
    fclose(file);// Fecha o arquivo
    
    file = fopen(arquivo, "a");
    fprintf(file,","); // Salva o valor da variável
    fclose(file);// Fecha o arquivo
    
    printf("Digite o sobrenome a ser cadastrado: "); // Coletando informação do usuário
    scanf("%s",sobrenome); // %s refere-se a string
    
    file = fopen(arquivo, "a");
    fprintf(file,sobrenome); // Salva o valor da variável
    fclose(file); // Fecha o arquivo
    
    file = fopen(arquivo, "a");
    fprintf(file,","); // Salva o valor da variável
    fclose(file); // Fecha o arquivo
    
    printf("Digite o cargado a ser cadastrado: "); // Coletando informação do usuário
    scanf("%s",cargo); // %s refere-se a string
    
	file = fopen(arquivo,"a");
	fprintf(file,cargo); // Salva o valor da variável
	fclose(file); // Fecha o arquivo
	
	system("pause");
    
    
}
int consultar() // Função para consultar os usuários no sistema
{
	setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem
	
    char cpf[40];
    char conteudo[200];
    
    printf("Digite o CPF a ser consultado: "); // Coletando informação do usuário
    scanf("%s",cpf); // %s refere-se a string
    
	FILE *file; // Cria o arquivo 
    file = fopen(cpf,"r"); // Cria o arquivo e o "r" significa ler
    
    
    if(file == NULL)
    {
        printf("Não foi possivel abrir o arquivo, não localizado!.\n"); 
	}
	
    while(fgets(conteudo, 200, file) != NULL)
    {
    	printf("\nEssas são as informações do usuário: ");
    	printf("%s", conteudo);
    	printf("\n\n");
	}
    system("Pause");


}

int deletar()
{
	char cpf[40];
	
	printf("Digite o CPF do usuário a ser deletado: "); // Coletando informação do usuário
	scanf("%s",cpf); // %s refere-se a string
	
	remove(cpf);
	
	FILE *file; // Cria o arquivo
	file = fopen(cpf,"r"); // Cria o arquivo e o "r" significa ler
	
	if(file == NULL)
	{
		printf("O usuário não se encontra no sistema!.\n");
		system("Pause");
		
	}


}


int main()

{		
	int opcao=0; //Definindo as variáveis
	int laco=1;
	
	for(laco=1;laco=1;)
	{
	
	    system("cls"); //Responsavel por limpar a tela
		
		setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem
	
	    printf("### Cartório da EBAC ### \n\n"); //Inicio do menu
	    printf("Escolha a opção desejada no menu:\n\n");
	    printf("\t1 - registrar nomes\n");
	    printf("\t2 - consultar nomes\n");
	    printf("\t3 - deletar nomes\n\n"); 
	    printf("Opção: ");//Fim do menu
	
    	scanf("%d", &opcao); //Armazenando a escolha do usuário
	
    	system("cls"); //Responsavel por limpar a tela
	
	
	    switch(opcao) // Inicio da seleção do menu
	    {
	   	    case 1:
	        registro(); // Chamada de funções
	        break;
	        
	        case 2:
	        consultar(); // Chamada de funções
            break;
            
            case 3:
            deletar(); // Chamada de funções
            break;
            
            default:
            printf("Essa opção não está disponivel!\n");
	        system("Pause");
	        break;
	        // Fim da seleção
	    
	   
	    }

    }       
}



	



	

	
	
        
	
	



