// Crie um Menu. O menu deverá ter opções quaisquer de 1 a 9,se o usuário digitar algum número entre 1 e 9,
// o programa deverá reexibir o menu.
//Caso contrário digitar outro número com exceção do 0, o program deve informar que a opção desejada é inexistente.
//E por fim, caso o usuário digitar 0, o programa deve exibir mensagem de despedida e terminar a execução.

#include <stdio.h>
#include <stdlib.h>

main()

{
	char ch;
	
	
	printf("Menu de Escolhas\n\n");
		printf("1.Opcao Camarao\n");
			printf("2.Opcao File\n");
		printf("3.Opcao Carne de Sol\n");
			printf("4.Opcao Frango\n");
		printf("5.Opcao Carne Suina\n");
			printf("6.Opcao Carpaccio\n");
		printf("7.Opcao Ovos\n");
			printf("8.Opcao Galinha\n");
		printf("9.Opcao Mocoto\n");

		printf("0.Opcao Nao quero nada \n");
		
	printf("  Entre com a sua escolha:  \n\n");
	
	ch=getchar();
	
	switch(ch)
	{
		case'1':
			printf(">>Opcao 1 foi selecionada\n\n");
			break;
			
		case'2':
			printf(">>Opcao 2 foi selecionada\n\n");
			break;
			
		case'3':
			printf(">>Opcao 3 foi selecionada\n\n");
			break;
			
		case'4':
			printf(">>Opcao 4 foi selecionada\n\n");
			break;
			
		case'5':
			printf(">>Opcao 5 foi selecionada\n\n");
			break;
			
		case'6':
			printf(">>Opcao 6 foi selecionada\n\n");
			break;
			
		case'7':
			printf(">>Opcao 7 foi selecionada\n\n");
			break;
			
		case'8':
			printf(">>Opcao 8 foi selecionada\n\n");
			break;
			
		case'9':
			printf(">>Opcao 9 foi selecionada\n\n");
			break;
			
		case'0':
			printf(">>Muito Obrigado e ate breve\n\n");
			break;
		
		default:
			printf(">>A opcao desejada e inexistente \n\n");
	}
				
	system("pause");

