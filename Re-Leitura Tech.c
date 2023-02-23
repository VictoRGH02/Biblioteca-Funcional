//Biblioteca:Re-Leitura Tech.c

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <stdbool.h>
#include <string.h> 
#include <conio.h>

//LIVRARIA

//VARIAVEIS 
int autor, genero, livro, liberado, pagamento, formapagar, exclui;

int cadastro;

float valor2, valor3, valor4, valor5, valor6, ValorRecebido, ValorRecebido2, troco, SomaDosValores;
bool pagamento1, livrobloq2, livrobloq3, livrobloq4, livrobloq5, livrobloq6;

char livros[5][50]; 

int debitocredito, parcela;

float valorparcelado;

bool resetar, resetargeral;
int fecharprog = 0;

int lixo[15];
char lixeira[50];

int quantidadelivro, limitelivro;
//FIM VARIAVEIS

void bemvindo()
{    
    printf("             .--.           .---.        .-.\n");
    printf("     .---|--|   .-.     |   |  .---. |~|    .--.\n");
    printf("  .--|===|  |---|_|--.__|   |--|:::| | |-==-|==|---.\n");
    printf("  |  |   |  |===| |  |  |   |--|   |_| |    |  |___|\n");
    printf("  |  |   | RE - LEITURA |   | TECH | |:|:   |= | |=|\n");
    printf("  |  |   |  |   |_|__|  |   |__|   | | |    |  |___|\n");
    printf("  |~~|===|--|===|~|~~|~~|   |--|:::|=|~|----|==|---|\n");
    printf("  ^--^---'--^---^-^--^--^---'--^---^-^-^-==-^--^---^\n\n");
    printf("------------------------------------------------------");
    printf("\n|                     BEM VINDO                      |\n");
    printf("------------------------------------------------------ \n");
    printf("                          ||          \n");
    printf("                          ||          \n");
    printf("                          \\/          \n");                                
}       

void desenho()
{
	printf("             .--.           .---.        .-.\n");
    printf("     .---|--|   .-.     |   |  .---. |~|    .--.\n");
    printf("  .--|===|  |---|_|--.__|   |--|:::| | |-==-|==|---.\n");
    printf("  |  |   |  |===| |  |  |   |--|   |_| |    |  |___|\n");
    printf("  |  |   | RE - LEITURA |   | TECH | |:|:   |= | |=|\n");
    printf("  |  |   |  |   |_|__|  |   |__|   | | |    |  |___|\n");
    printf("  |~~|===|--|===|~|~~|~~|   |--|:::|=|~|----|==|---|\n");
    printf("  ^--^---'--^---^-^--^--^---'--^---^-^-^-==-^--^---^\n\n");

}  

int areacadastro()
{
    printf("\nVamos realizar o seu cadastro para continuar! \n\n");
    printf("Digite 1 para continuar: \t");
    scanf("%d", &cadastro);
    printf("\n");
    while(cadastro != 1)
    {
        printf("\nPor favor, escolha uma opcao valida! \t");
        scanf("%d", &cadastro);
    }
    return cadastro;
}

struct pessoa
{
    char nome[50], sobrenome[50], cpf[11], telefone[9];
    int ano, idade;
};

int main ()
{
    do
    {
        struct pessoa cliente;
        
        setlocale(LC_ALL,"Portuguese");
        
        int final = 0;
        quantidadelivro = 1;
        limitelivro = 1;
        pagamento = false; 
        livrobloq2 = false;
        livrobloq3 = false;
        livrobloq4 = false;
        livrobloq5 = false;
        livrobloq6 = false;
        resetar = false;
        resetargeral = false;

        bemvindo();
        
        areacadastro();

        int cadastroreal = cadastro;

        if(cadastroreal == 1)
        {
            
            printf("------------------------------------------------------");
            printf("\n|                     CADASTRO                       |\n");
            printf("------------------------------------------------------ \n");
            printf("\nDigite seu nome: \t");
            scanf("%s", &cliente.nome);
            printf("Digite seu sobrenome: \t");
            scanf("%s",&cliente.sobrenome);
            printf("Digite o ano em que nasceu: \t");
            scanf("%d", &cliente.ano);
			cliente.idade = 2022 - cliente.ano;
            while(cliente.ano < 1922 || cliente.ano > 2016)
            {
                printf("Digite o ano valido: \t");
                scanf("%d", &cliente.ano);
            }

            printf("Digite seu CPF: \t");
            scanf("%s", &cliente.cpf);
            while(strlen(cliente.cpf) != 11 || (strcmp(cliente.cpf,"00000000000") == 0) || (strcmp(cliente.cpf,"11111111111") == 0) || (strcmp(cliente.cpf,"22222222222") == 0) ||
            (strcmp(cliente.cpf,"33333333333") == 0) || (strcmp(cliente.cpf,"44444444444") == 0) || (strcmp(cliente.cpf,"55555555555") == 0) ||
            (strcmp(cliente.cpf,"66666666666") == 0) || (strcmp(cliente.cpf,"77777777777") == 0) || (strcmp(cliente.cpf,"88888888888") == 0) ||
            (strcmp(cliente.cpf,"99999999999") == 0))
            {
                printf("Digite um CPF valido: \t");
                scanf("%s", &cliente.cpf);
            }
			
            printf("\nDigite seu telefone para contato (sem pontos e/ou tracos, COM DDD): \t");
            scanf("%d", &cliente.telefone);
            while(strlen(cliente.telefone) != 11 || (strcmp(cliente.telefone,"00000000000") == 0) || (strcmp(cliente.telefone,"11111111111") == 0) || (strcmp(cliente.telefone,"22222222222") == 0) ||
            (strcmp(cliente.telefone,"33333333333") == 0) || (strcmp(cliente.telefone,"44444444444") == 0) || (strcmp(cliente.telefone,"55555555555") == 0) ||
            (strcmp(cliente.telefone,"66666666666") == 0) || (strcmp(cliente.telefone,"77777777777") == 0) || (strcmp(cliente.telefone,"88888888888") == 0) ||
            (strcmp(cliente.telefone,"99999999999") == 0))
            {
                printf("Digite um telefone valido: \t");
                scanf("%s", &cliente.telefone);
            }
            
            
            printf ("\nCadastro realizado com sucesso!");
            printf("\nVoce sera redirecionado para a categoria dos Generos. \n");
        }
        
        //ESCOLHA DO GENERO E LIVRO
        do
        {
        	
            printf("\n");
            system("Pause");
            system("cls");
            if(cliente.idade >= 18)
            {
            	desenho();
                printf("------------------------------------------------------");
                printf("\n|                      GENEROS                       |\n");
                printf("------------------------------------------------------");
                printf("\nPor favor, escolha um dos generos:\n\nOpcao 1 -> Terror\nOpcao 2 -> Romance\n");
                printf("Opcao 3 -> Manga\nOpcao 4 -> Acao e Aventura\n\n");
                printf("Opcao desejada: \t");
                scanf("%d", &genero);
            }
            else if(cliente.idade < 18)
            {
                printf("------------------------------------------------------");
                printf("\n|                      GENEROS                       |\n");
                printf("------------------------------------------------------");
                printf("\n%s, voce nao tem idade para acessar nosso catalogo de generos completo. \n\n", cliente.nome);
                printf("Escolha uma das opcoes disponiveis para voce: \n\n3 -> Manga\n4 -> Acao e Aventura \n\n");
                printf("Opcao desejada: \t");
                scanf("%d", &genero);
                cliente.idade = 18;
                while(genero < 3 || genero > 4)
                {
                    printf("\n\nEscolha uma opcao valida para voce: \n3 - Manga \n4 - Acao e Aventura \n");
                    scanf("%d", &genero);
                }
            } 

            //While usado para retornar a pergunta caso o individuo responda de com valor incorreto.
            while(genero > 4 || genero < 1)
            {
                printf("Por favor, digite uma opcao valida:\n1 - Terror\n2 - Romance\n3 - Manga\n4 - Acao e Aventura\n");
                scanf("%d", &genero); 
            }    

            do
            {
                //Switch usado ap?s a sele??o do genero, usado para selecionar os livros baseados no genero escolhido.
                switch(genero)
                {
                    //Escolhendo o genero Terror, ? listado 3 livros que podem ser escolhidos.
                    case 1:
                    printf("-----------------------------------------------------------");
                    printf("\n|                          TERROR                         |\n");
                    printf("-----------------------------------------------------------\n\n");
                    printf("Escolha o(s) livro(s) desejado(s):  \n\n");
                    printf("Opcao 1 -> Titulo: O Chamado de Cthulhu | Autor: H.P.Lovecraft | Preco: R$50");
                    printf("\nOpcao 2 -> Titulo: It: A coisa | Autor: Stephen King | Preco: R$60\n");
                    printf("Opcao 3 -> Titulo: Os Lobos: Fall Mountain Shifters, Autor: G. Bailey | Preco: R$40\n");
                    printf("Opcao 4 -> Voltar a tela dos generos\n\n");
                    printf("Opcao desejada: \t");
                    scanf("%d", &livro);
                    
                    /*os if's a seguir s?o usados para armazenar o valor do livro baseado na escolha do cliente, 
                    tamb?m usado para armazenar o nome para ser usado na nota fiscal.*/
                    if(livro == 1)
                    {
                        liberado = 1;

                        if(livrobloq2 == false) 
                        {
                            strcpy (livros[0], "O Chamado de Cthulhu | Autor: H.P.Lovecraft");
                            livrobloq2 = true;
                            valor2 = 50; 
                        }
                        else if(livrobloq3 == false)
                        {
                            strcpy (livros[1], "O Chamado de Cthulhu | Autor: H.P.Lovecraft");
                            livrobloq3 = true;
                            valor3 = 50;
                        }
                        else if(livrobloq4 == false)
                        {
                            strcpy (livros[2], "O Chamado de Cthulhu | Autor: H.P.Lovecraft");
                            livrobloq4 = true;
                            valor4 = 50;
                        }
                        
                    }
                    else if(livro == 2)
                    {
                        //valor = 60;
                        liberado = 2;
                        if(livrobloq2 == false)
                        {
                            strcpy (livros[0], "IT: A coisa | Autor: Stephen King");
                            livrobloq2 = true;
                            valor2 = 60;
                        }
                        else if(livrobloq3 == false)
                        {
                            strcpy (livros[1], "IT: A coisa | Autor: Stephen King");
                            livrobloq3 = true;
                            valor3 = 60;
                        }
                        else if(livrobloq4 == false)
                        {
                            strcpy (livros[2], "IT: A coisa | Autor: Stephen King");
                            livrobloq4 = true;
                            valor4 = 60;
                        }
                        
                    }
                    else if(livro == 3)
                    {
                    // valor = 70;
                        liberado = 3;
                        if(livrobloq2 == false)
                        {
                            strcpy (livros[0], "Os Lobos: Fall Mountain Shifters | Autor: G. Bailey");
                            livrobloq2 = true;
                            valor2 = 40;
                        }
                        else if(livrobloq3 == false)
                        {
                            strcpy (livros[1], "Os Lobos: Fall Mountain Shifters | Autor: G. Bailey");
                            livrobloq3 = true;
                            valor3 = 40;
                        }
                        else if(livrobloq4 == false)
                        {
                            strcpy (livros[2], "Os Lobos: Fall Mountain Shifters | Autor: G. Bailey");
                            livrobloq4 = true;
                            valor4 = 40;
                        }
                        
                    }
                    else if(livro == 4)
                    {
                        liberado = 13;
                    }
                    break;  
                    

                    //Escolhendo o genero Romance, ? listado 3 livros que podem ser escolhidos.
                    case 2:
                    printf("-----------------------------------------------------------");
                    printf("\n|                          ROMANCE                        |\n");
                    printf("-----------------------------------------------------------\n\n");
                    printf("Opcao 1 -> Titulo: A culpa e das estrelas | Autor: John Green | Preco: R$ 40,00 \n");
                    printf("Opcao 2 -> Titulo: O duque e eu (Os Bridgertons - Livro 1) | Autor: Julia Quinn | Preco: R$21,00 \n");
                    printf("Opcao 3 -> Titulo: O visconde que me amava (Os Bridgertons - Livro 2) | Autor: Julia Quinn | Preco: R$31,00 \n");
                    printf("Opcao 4 -> Voltar a tela dos generos\n\n");
                    printf("Opcao desejada: \t");
                    scanf("%d", &livro);
                    
                    if(livro == 1)
                    {
                    
                        liberado = 4;
                        if(livrobloq2 == false)
                        {
                            strcpy (livros[0], "A culpa e das estrelas | Autor: John Green");
                            livrobloq2 = true;
                            valor2 = 40;
                        }
                        else if(livrobloq3 == false)
                        {
                            strcpy (livros[1], "A culpa e das estrelas | Autor: John Green");
                            livrobloq3 = true;
                            valor3 = 40;
                        }
                        else if(livrobloq4 == false)
                        {
                            strcpy (livros[2], "A culpa e das estrelas | Autor: John Green");
                            livrobloq4 = true;
                            valor4 = 40;
                        }
                        
                    }
                    else if(livro == 2)
                    {
                    
                        liberado = 5;

                        if(livrobloq2 == false)
                        {
                            strcpy (livros[0], "O duque e eu (Os Bridgertons - Livro 1) | Autor: Julia Quinn");
                            valor2 = 21;
                            livrobloq2 = true;
                        }
                        else if(livrobloq3 == false)
                        {
                            strcpy (livros[1], "O duque e eu (Os Bridgertons - Livro 1) | Autor: Julia Quinn");
                            livrobloq3 = true;
                            valor3 = 21;
                        }
                        else if(livrobloq4 == false)
                        {
                            strcpy (livros[2], "O duque e eu (Os Bridgertons - Livro 1) | Autor: Julia Quinn");
                            livrobloq4 = true;
                            valor4 = 21;
                        }
                        
                    }
                    else if(livro == 3)
                    {                    
                        
                        liberado = 6;
                        
                        if(livrobloq2 == false)
                        {
                            strcpy (livros[0], " O visconde que me amava (Os Bridgertons - Livro 2) | Autor: Julia Quinn");
                            livrobloq2 = true;
                            valor2 = 31;
                        }   
                        else if(livrobloq3 == false)
                        {
                            strcpy (livros[1], " O visconde que me amava (Os Bridgertons - Livro 2) | Autor: Julia Quinn");
                            livrobloq3 = true;
                            valor3 = 31;
                        }   
                        else if(livrobloq4 == false)
                        {
                            strcpy (livros[2], " O visconde que me amava (Os Bridgertons - Livro 2) | Autor: Julia Quinn");
                            livrobloq4 = true;
                            valor4 = 31;
                        }   
                    
                    }
                    else if(livro == 4)
                    {
                        liberado = 13;
                    }

                    break;    
                        
                    //Escolhendo o genero Manga, ? listado 3 livros que podem ser escolhidos.
                    case 3:
                    printf("-----------------------------------------------------------");
                    printf("\n|                         MANGA                           |\n");
                    printf("-----------------------------------------------------------\n\n");
                    printf("Opcao 1 -> Titulo: One piece | Autor: Eiichiro Oda | Preco: R$25 \n");
                    printf("Opcao 2 -> Titulo: Naruto | Autor: Masashi kishimoto | Preco: R$30 \n");
                    printf("Opcao 3 -> Titulo: Dragon ball Z | Autor: Akira Toriyama | Preco: R$45 \n");
                    printf("Opcao 4 -> Voltar a tela dos generos\n\n");
                    printf("Opcao desejada: \t");
                    scanf("%d", &livro);
                    
                    if(livro == 1)
                    { 
                        liberado = 7;

                        if(livrobloq2 == false)
                        {
                            strcpy (livros[0], "One piece | Autor: Eiichiro Oda");
                            livrobloq2 = true;
                            valor2 = 25;
                        }   
                        else if(livrobloq3 == false)
                        {
                            strcpy (livros[1], "One piece | Autor: Eiichiro Oda");
                            livrobloq3 = true;
                            valor3 = 25;
                        }  
                        else if(livrobloq4 == false)
                        {
                            strcpy (livros[2], "One piece | Autor: Eiichiro Oda");
                            livrobloq4 = true;
                            valor4 = 25;
                        }    
                  
                    }
                    else if(livro == 2)
                    {
                        
                    // valor = 55;
                        liberado = 8;
                        if(livrobloq2 == false)
                        {
                            strcpy (livros[0], "Naruto | Autor: Masashi kishimoto");
                            livrobloq2 = true;
                            valor2 = 30;
                        }   
                        else if(livrobloq3 == false)
                        {
                            strcpy (livros[1], "Naruto | Autor: Masashi kishimoto");
                            livrobloq3 = true;
                            valor3 = 30;
                        }  
                        else if(livrobloq4 == false)
                        {
                            strcpy (livros[2], "Naruto | Autor: Masashi kishimoto");
                            livrobloq4 = true;
                            valor4 = 30;
                        }    
            
                    }
                    else if(livro == 3)
                    {
                        
                    // valor = 65;
                        liberado = 9;
                        
                    if(livrobloq2 == false)
                        {
                            strcpy (livros[0], "Dragon ball Z | Autor: Akira Toriyama");
                            livrobloq2 = true;
                            valor2 = 45;
                        } 
                        else if(livrobloq3 == false)
                        {
                            strcpy (livros[1], "Dragon ball Z | Autor: Akira Toriyama");
                            livrobloq3 = true;
                            valor3 = 45;
                        }   
                        else if(livrobloq4 == false)
                        {
                            strcpy (livros[2], "Dragon ball Z | Autor: Akira Toriyama");
                            livrobloq4 = true;
                            valor4 = 45;
                        } 
                                  
                    }
                    else if(livro == 4)
                    {
                        liberado = 13;
                    }
                    break;  

                    //Escolhendo o genero A??o e aventura, ? listado 3 livros que podem ser escolhidos.
                    case 4:
                    printf("-----------------------------------------------------------");
                    printf("\n|                      ACAO E AVENTURA                    |\n");
                    printf("-----------------------------------------------------------\n\n");
                    printf("Opcao 1 -> Titulo: Harry Potter e a Pedra Filosofal | Autor: J.K. Rowling | Preco: R$23,00  \n");
                    printf("Opcao 2 -> Titulo: Esposa Comprada(Casamento por contrato) | Autor: Janice Diniz | Preco: R$20,00 \n");
                    printf("Opcao 3 -> Titulo: Clube da luta | Autor: Chuck Palahniuk | Preco: R$29,00  \n");
                    printf("Opcao 4 -> Voltar a tela dos generos\n\n");
                    printf("Opcao desejada: \t");
                    scanf("%d", &livro);
                    /*Os if's a seguir s?o usados para armazenar o valor do livro baseado na escolha do cliente, 
                    tamb?m usado para armazenar o nome para ser usado na nota fiscal.*/
                    if(livro == 1)
                    {
                    // valor = 45;
                        liberado = 10;

                        if(livrobloq2 == false)
                        {
                            strcpy (livros[0], "Harry Potter e a Pedra Filosofal | Autor: J.K. Rowling");
                            livrobloq2 = true;
                            valor2 = 23;
                        }     
                        else if(livrobloq3 == false)
                        {
                            strcpy (livros[1], "Harry Potter e a Pedra Filosofal | Autor: J.K. Rowling");
                            livrobloq3 = true;
                            valor3 = 23;
                        }   
                        else if(livrobloq4 == false)
                        {
                            strcpy (livros[2], "Harry Potter e a Pedra Filosofal | Autor: J.K. Rowling");
                            livrobloq4 = true;
                            valor4 = 23;
                        }   
                          
                    }
                    else if(livro == 2)
                    { 
                        //valor = 55;
                        liberado = 11;
                        
                        if(livrobloq2 == false)
                        {
                            strcpy (livros[0], "Esposa Comprada(Casamento por contrato) | Autor: Janice Diniz");
                            livrobloq2 = true;
                            valor2 = 20;
                        }   
                        else if(livrobloq3 == false)
                        {
                            strcpy (livros[1], "Esposa Comprada(Casamento por contrato) | Autor: Janice Diniz");
                            livrobloq3 = true;
                            valor3 = 20;
                        }   
                        else if(livrobloq4 == false)
                        {
                            strcpy (livros[2], "Esposa Comprada(Casamento por contrato) | Autor: Janice Diniz");
                            livrobloq4 = true;
                            valor4 = 20;
                        }   
                          

                    }
                    else if(livro == 3) 
                    {
                    
                        liberado = 12;
                        
                        if(livrobloq2 == false)
                        {
                            strcpy (livros[0], "Clube da luta | Autor: Chuck Palahniuk");
                            livrobloq2 = true;
                            valor2 = 29;
                        }   
                        else if(livrobloq3 == false)
                        {
                            strcpy (livros[1], "Clube da luta | Autor: Chuck Palahniuk");
                            livrobloq3 = true;
                            valor3 = 29;
                        }   
                        else if(livrobloq4 == false)
                        {
                            strcpy (livros[2], "Clube da luta | Autor: Chuck Palahniuk");
                            livrobloq4 = true;
                            valor4 = 29;
                        }   
                          
                    }
                    else if(livro == 4)
                    {
                        liberado = 13;
                    }
                    break; 
                
                }

            }while(livro > 4 || livro < 1);
            
            do
            {
                switch (liberado)
                {
                    case 1:
                    printf("\nDeseja mais algum livro? \n\n");
                    printf("Opcao 1 -> Sim\nOpcao 2 -> Nao\n\n");
                    printf("Opcao desejada: \t");
                    scanf("%d", &pagamento);
                    if(pagamento == 2)
                    {
                        pagamento1 = true;
                        //resetar = false;
                        printf("\nVoce sera redirecionado para o carrinho onde podera realizar o pagamento... \n\n");
                    }
                    else if(pagamento == 1)
                    {
                        quantidadelivro ++;
                        limitelivro ++;
                        resetar = true;
                    }
                    break;

                    case 2:
                    printf("\nDeseja mais algum livro? \n\n");
                    printf("Opcao 1 -> Sim\nOpcao 2 -> Nao\n\n");
                    printf("Opcao desejada: \t");
                    scanf("%d", &pagamento);
                    if(pagamento == 2)
                    {
                        pagamento1 = true;    
                        //resetar = false;   
                        printf("\nVoce sera redirecionado para o carrinho onde podera realizar o pagamento... \n\n");      
                    }
                    else if (pagamento == 1)
                    {
                        quantidadelivro++;
                        limitelivro ++;
                        resetar = true;
                    }
                    break;

                    case 3:
                    printf("\nDeseja mais algum livro? \n\n");
                    printf("Opcao 1 -> Sim\nOpcao 2 -> Nao\n\n");
                    printf("Opcao desejada: \t");
                    scanf("%d", &pagamento);
                    if(pagamento == 2)
                    {
                        pagamento1 = true;    
                        //resetar = false;       
                        printf("\nVoce sera redirecionado para o carrinho onde podera realizar o pagamento... \n\n");  
                    }
                    else if (pagamento == 1)
                    {
                        quantidadelivro++;
                        limitelivro ++;
                        resetar = true;
                    }
                    break;

                    case 4:
                    printf("\nDeseja mais algum livro? \n\n");
                    printf("Opcao 1 -> Sim\nOpcao 2 -> Nao\n\n");
                    printf("Opcao desejada: \t");
                    scanf("%d", &pagamento);
                    if(pagamento == 2)
                    {
                        pagamento1 = true;
                        //resetar = false;
                        printf("\nVoce sera redirecionado para o carrinho onde podera realizar o pagamento... \n\n");
                    }
                    else if (pagamento == 1)
                    {
                        quantidadelivro++;
                        limitelivro ++;
                        resetar = true;
                    }
                    break;

                    case 5: 
                    printf("\nDeseja mais algum livro? \n\n");
                    printf("Opcao 1 -> Sim\nOpcao 2 -> Nao\n\n");
                    printf("Opcao desejada: \t");
                    scanf("%d", &pagamento);
                    if(pagamento == 2)
                    {
                        pagamento1 = true;
                        //resetar = false;
                        printf("\nVoce sera redirecionado para o carrinho onde podera realizar o pagamento... \n\n");
                        
                    }
                    else if (pagamento == 1)
                    {
                        quantidadelivro++;
                        limitelivro ++;
                        resetar = true;
                    }
                    break;

                    case 6:
                    printf("\nDeseja mais algum livro? \n\n");
                    printf("Opcao 1 -> Sim\nOpcao 2 -> Nao\n\n");
                    printf("Opcao desejada: \t");
                    scanf("%d", &pagamento);
                    if(pagamento == 2)
                    {
                        pagamento1 = true;
                        //resetar = false;
                        printf("\nVoce sera redirecionado para o carrinho onde podera realizar o pagamento... \n\n");
                    }
                    else if (pagamento == 1)
                    {
                        quantidadelivro++;
                        limitelivro ++;
                        resetar = true;
                    }
                    break;

                    case 7:
                    printf("\nDeseja mais algum livro? \n\n");
                    printf("Opcao 1 -> Sim\nOpcao 2 -> Nao\n\n");
                    printf("Opcao desejada: \t");
                    scanf("%d", &pagamento);
                    if(pagamento == 2)
                    {
                        pagamento1 = true;
                        //resetar = false;
                        printf("\nVoce sera redirecionado para o carrinho onde podera realizar o pagamento... \n\n");
                    }
                    else if (pagamento == 1)
                    {
                        quantidadelivro++;
                        limitelivro ++;
                        resetar = true;
                    }
                    break;

                    case 8:
                    printf("\nDeseja mais algum livro? \n\n");
                    printf("Opcao 1 -> Sim\nOpcao 2 -> Nao\n\n");
                    printf("Opcao desejada: \t");
                    scanf("%d", &pagamento);
                    if(pagamento == 2)
                    {
                        pagamento1 = true;
                        //resetar = false;
                        printf("\nVoce sera redirecionado para o carrinho onde podera realizar o pagamento... \n\n");
                    }
                    else if (pagamento == 1)
                    {
                        quantidadelivro++;
                        limitelivro ++;
                        resetar = true;
                    }
                    break;

                    case 9:
                    printf("\nDeseja mais algum livro? \n\n");
                    printf("Opcao 1 -> Sim\nOpcao 2 -> Nao\n\n");
                    printf("Opcao desejada: \t");
                    scanf("%d", &pagamento);
                    if(pagamento == 2)
                    {
                        pagamento1 = true;
                        //resetar = false;
                        printf("\nVoce sera redirecionado para o carrinho onde podera realizar o pagamento... \n\n");
                    }
                    else if (pagamento == 1)
                    {
                        quantidadelivro++;
                        limitelivro ++;
                        resetar = true;
                    }
                    break;

                    case 10:
                    printf("\nDeseja mais algum livro? \n\n");
                    printf("Opcao 1 -> Sim\nOpcao 2 -> Nao\n\n");
                    printf("Opcao desejada: \t");
                    scanf("%d", &pagamento);
                    if(pagamento == 2)
                    {
                        pagamento1 = true;
                        //resetar = false;
                        printf("\nVoce sera redirecionado para o carrinho onde podera realizar o pagamento... \n\n");
                    }
                    else if (pagamento == 1)
                    {
                        quantidadelivro++;
                        limitelivro ++;
                        resetar = true;
                    }
                    break;

                    case 11:
                    printf("\nDeseja mais algum livro? \n\n");
                    printf("Opcao 1 -> Sim\nOpcao 2 -> Nao\n\n");
                    printf("Opcao desejada: \t");
                    scanf("%d", &pagamento);
                    if(pagamento == 2)
                    {
                        pagamento1 = true;
                        //resetar = false;
                        printf("\nVoce sera redirecionado para o carrinho onde podera realizar o pagamento... \n\n");
                    }
                    else if (pagamento == 1)
                    {
                        quantidadelivro++;
                        limitelivro ++;
                        resetar = true;
                    }
                    break;

                    case 12:
                    printf("\nDeseja mais algum livro? \n\n");
                    printf("Opcao 1 -> Sim\nOpcao 2 -> Nao\n\n");
                    printf("Opcao desejada: \t");
                    scanf("%d", &pagamento);
                    if(pagamento == 2)
                    {
                        pagamento1 = true;
                        //resetar = false;
                        printf("\nVoce sera redirecionado para o carrinho onde podera realizar o pagamento... \n\n");
                    }
                    else if (pagamento == 1)
                    {   
                        quantidadelivro++;
                        limitelivro ++;
                        resetar = true;
                    }
                    break;

                    case 13:
                    pagamento = 2;
                    printf("\nVoltando para a tela de generos\n");
                    resetar = true;
                    break;
                }
                
            }while(pagamento < 1 || pagamento > 2);

            if(limitelivro > 3)
            {
                printf("\nVoce atingiu o limite de compras no dia, voce sera redirecionado para a tela do carrinho.\n");
                quantidadelivro = 3;
                resetar = false;
                pagamento1 = true;
                system("Pause");
            }
            
            if(pagamento1 == true)
            {
                if(limitelivro < 3)
                {
                    system("Pause");
                }
                system("cls");
                desenho();
                printf("------------------------------------------------------");
                printf("\n|                      CARRINHO                      |\n");
                printf("------------------------------------------------------\n");

                if(quantidadelivro == 1) //Somente 1 livro no carrinho
                {
                    printf("\nItem 1 -> %s | Preco R$%.2f \n", livros[0], valor2);
                    printf("\nDeseja excluir algum item do carrinho? \n\nOpcao 1 -> SIM \nOpcao 2 -> NAO \n\n");
                    printf("Opcao desejada: \t");
                    scanf("%d", &exclui);
                    while(exclui < 1 || exclui > 2)
                    {
                        printf("Digite uma opcao valida: \t");
                        scanf("%d", &exclui);
                    }
                    if(exclui == 1) //Excluindo Item do carrinho
                    {
                        printf("Qual item? \n\n1 - %s \n\n", livros[0]);
                        printf("Item: \t");
                        scanf("%d", &lixo[0]);
                        while(lixo[0] != 1)
                        {
                            printf("Digite uma opcao valida: \t");
                            scanf("%d", &lixo[0]);
                        }
                        if(lixo[0] == 1)
                        {
                            strcpy (livros[0], lixeira);
                            valor2 = 0;
                            printf("Nao ha mais livro no carrinho, deseja fechar o programa ou escolher outro livro? \n\n");
                            printf("Opcao 1 -> Fechar \nOpcao 2 -> Mais Livros\n\n");
                            printf("Opcao desejada: \t");
                            scanf("%d", &fecharprog);
                            while(fecharprog < 1 || fecharprog > 2)
                            {
                                printf("Digite uma opcao valida: \t");
                                scanf("%d", &fecharprog);
                            }
                            if(fecharprog == 1)
                            {
                                exit(0);
                            }
                            else if(fecharprog == 2)
                            {
                                lixo[0] = 0;
                                exclui = 0;
                                livrobloq2 = false;
                                resetar = true;
                            }

                        }
                    }
                    else if(exclui == 2)
                    {
                        printf("------------------------------------------------------");
                        printf("\n|                    PAGAMENTO                       |\n");
                        printf("------------------------------------------------------\n");
                        printf("\nLivro: %s\n", livros[0]);
                        SomaDosValores = valor2;
                        printf("Total de R$%.2f \n\nComo deseja realizar o pagamento? \n\nOpcao 1 -> Dinheiro\nOpcao 2 -> Cartao\n\n", SomaDosValores);
                        printf("Digite a forma de pagamento: \t");
                        scanf("%d", &formapagar);
                        while(formapagar < 1 || formapagar > 2)
                        {
                            printf("Digite uma opcao valida: \t");
                            scanf("%d", &formapagar);
                        }
                        if(formapagar == 1) //PAGAMENTO
                        {
                            printf("Digite o valor? \t");
                            scanf("%f", &ValorRecebido);
                            troco = SomaDosValores - ValorRecebido; 
                            while(ValorRecebido < SomaDosValores)
                            {
                                printf("Valor insuficiente, faltam R$ %.2f \nDigite o valor restante \n", troco);
                                scanf("%f", &ValorRecebido2);
                                ValorRecebido = ValorRecebido + ValorRecebido2;
                                troco = SomaDosValores - ValorRecebido; //Troco atualizado
                            }
                            if(ValorRecebido > SomaDosValores)
                            {		
                                printf("Obrigado por comprar nossa loja o seu troco e de R$ %.2f", -troco);	
                                resetar = false;	
                                printf("\n\nProximo cliente? \n\nOpcao 1 -> SIM \nOpcao 2 -> NAO \n\n");
                                printf("Opcao desejada: \t");
                                scanf("%d", &final);
                                while(final < 1 || final > 2)
                                {
                                    printf("Digite uma opcao valida: \t");
                                    scanf("%d", &final);
                                }
        
                            }
                            else if(ValorRecebido = SomaDosValores)
                            {
                                printf("Obrigado por comprar nossa loja, volte sempre!");
                                resetar = false;
                                printf("\n\nProximo cliente? \n\nOpcao 1 -> SIM \nOpcao 2 -> NAO \n\n");
                                printf("Opcao desejada: \t");
                                scanf("%d", &final);
                                while(final < 1 || final > 2)
                                {
                                    printf("Digite uma opcao valida: \t");
                                    scanf("%d", &final);
                                }
                            }
                        }
                        else if(formapagar == 2)
                        {
                            printf("\nOpcao 1 -> Debito\nOpcao 2 -> Credito\n\nOpcao desejada: \t");
                            scanf("%d", &debitocredito);
                            while(debitocredito < 1 || debitocredito > 2)
                            {
                                printf("Digite a opcao correta: \t");
                                scanf("%d", &debitocredito);
                            }
                            if(debitocredito == 1)
                            {
                                printf("\nA forma de pagamento selecionada foi debito, ");
                                printf("porfavor insira o cartao e digite a senha\n");
                                printf("Obrigado por comprar na nossa loja!! ");
                                printf("\n\nProximo cliente? \n\nOpcao 1 -> SIM \nOpcao 2 -> NAO \n\n");
                                printf("Opcao desejada: \t");
                                scanf("%d", &final);
                                while(final < 1 || final > 2)
                                {
                                    printf("Digite uma opcao valida: \t");
                                    scanf("%d", &final);
                                }
                                resetar = false;
                            }
                            else if(debitocredito == 2)
                            {
                                printf("\nQuantas parcelas deseja?\n\nOpcao 1 -> A vista \nOpcao 2 -> 2x \nOpcao 3 -> 3x \n\n");
                                printf("Opcao: \t");
                                scanf("%d", &parcela);
                                if(parcela == 1)
                                {
                                    printf("\nPorfavor insira o cartao e digite a senha\n");
                                    printf("Obrigado por comprar na nossa loja!!\n ");
                                    printf("\n\nProximo cliente? \n\nOpcao 1 -> SIM \nOpcao 2 -> NAO \n\n");
                                    printf("Opcao desejada: \t");
                                    scanf("%d", &final);
                                    while(final < 1 || final > 2)
                                    {
                                        printf("Digite uma opcao valida: \t");
                                        scanf("%d", &final);
                                    }
                                    resetar = false;
                                }
                                else if(parcela == 2)
                                {
                                    valorparcelado = SomaDosValores/2;
                                    printf("O valor total foi: R$%.2f \n\nParcelado em 2x ficou %.2f", SomaDosValores, valorparcelado);
                                    printf("\nPorfavor insira o cart?o e digite a senha\n");
                                    printf("Obrigado por comprar na nossa loja!! ");
                                    printf("\n\nProximo cliente? \n\nOpcao 1 -> SIM \nOpcao 2 -> NAO \n\n");
                                    printf("Opcao desejada: \t");
                                    scanf("%d", &final);
                                    while(final < 1 || final > 2)
                                    {
                                        printf("Digite uma opcao valida: \t");
                                        scanf("%d", &final);
                                    }
                                    resetar = false;
                                }
                                else if(parcela == 3)
                                {
                                    valorparcelado = SomaDosValores/3;
                                    printf("\nO valor total foi: R$%.2f \n\nParcelado em 3x ficou %.2f", SomaDosValores, valorparcelado);
                                    printf("\nPorfavor insira o cartao e digite a senha\n");
                                    printf("Obrigado por comprar na nossa loja!! ");
                                    printf("\n\nProximo cliente? \n\nOpcao 1 -> SIM \nOpcao 2 -> NAO \n\n");
                                    printf("Opcao desejada: \t");
                                    scanf("%d", &final);
                                    while(final < 1 || final > 2)
                                    {
                                        printf("Digite uma opcao valida: \t");
                                        scanf("%d", &final);
                                    }
                                    resetar = false;
                                }
                            }
                        }
                    }
                }
                else if(quantidadelivro == 2) //Dois livros no carrinho
                {
                    printf("\nItem 1 -> %s | Preco R$%.2f \nItem 2 -> %s | Preco R$%.2f \n", livros[0], valor2, livros[1], valor3);
                    printf("\nDeseja excluir algum item do carrinho? \n\nOpcao 1 -> SIM \nOpcao 2 -> NAO \n\n");
                    printf("Opcao desejada: \t");
                    scanf("%d", &exclui);
                    while(exclui < 1 || exclui > 2)
                    {
                        printf("Digite uma opcao valida: \t");
                        scanf("%d", &exclui);
                    }
                    if(exclui == 1)
                    {
                        printf("\nQual item? \n\nItem 1 -> %s \nItem 2 -> %s\n", livros[0], livros[1]);
                        printf("\nItem: \t");
                        scanf("%d", &lixo[0]);
                        while(lixo[0] < 1 || lixo[0] > 2)
                        {
                            printf("Escolha um item valido: \t");
                            scanf("%d", &lixo[0]);
                        }
                        if(lixo[0] == 1)
                        {
                            quantidadelivro--;
                            strcpy (livros[0], livros[1]);
                            valor2 = 0;
                            printf("\nDeseja excluir mais algum item do carrinho?\n\nOpcao 1 -> SIM \nOpcao 2 -> NAO");
                            printf("\n\nOpcao desejada: \t");
                            scanf("%d", &lixo[1]);
                            while(lixo[1] < 1 || lixo[1] > 2)
                            {
                                printf("Escolha uma opcao valida: \t");
                                scanf("%d", &lixo[1]);
                            }
                        }
                        else if(lixo[0] == 2)
                        {
                            quantidadelivro--;
                            strcpy (livros[1], lixeira);
                            valor3 = 0;
                            printf("\nDeseja excluir mais algum item do carrinho?\n\nOpcao 1 -> SIM \n\nOpcao 2 -> NAO");
                            printf("\n\nOpcao desejada: \t");
                            scanf("%d", &lixo[1]);
                            while(lixo[1] < 1 || lixo[1] > 2)
                            {
                                printf("Escolha uma opcao valida: \t");
                                scanf("%d", &lixo[1]);
                            }
                        }

                        if(lixo[1] == 1)
                        {
                            printf("\nNao ha mais livro no carrinho, deseja fechar o programa ou escolher outro livro? \n\n");
                            printf("Opcao 1 -> Fechar \nOpcao 2 -> Mais Livros\n\n");
                            printf("Opcao desejada: \t");
                            scanf("%d", &fecharprog);
                            while(fecharprog < 1 || fecharprog > 2)
                            {
                                printf("Escolha uma opcao valida: \t");
                                scanf("%d", &fecharprog);
                            }
                            if(fecharprog == 1)
                            {
                                exit(0);
                            }
                            else if(fecharprog == 2)
                            {
                                lixo[0] = 0;
                                lixo[1] = 0;
                                exclui = 0;
                                livrobloq2 = false;
                                livrobloq3 = false;
                                resetar = true;
                            }
                        }
                        else if(lixo[1] == 2)
                        {

                            exclui = 2;
                        }
                                      
                    }
                    if(exclui == 2) // ÃREA DE PAGAMENTO
                    {   
                        if(exclui == 2 && quantidadelivro == 1 && lixo[0] == 1) //1 livro no carrinho apÃ³s excluir
                        {
                            printf("------------------------------------------------------");
                            printf("\n|                    PAGAMENTO                       |\n");
                            printf("------------------------------------------------------\n");
                            printf("\nLivro: %s\n", livros[0]);
                            SomaDosValores = valor3;
                            printf("Total de R$%.2f", SomaDosValores);
                            printf("\n\nComo deseja realizar o pagamento? \n\nOpcao 1 -> Dinheiro \nOpcao 2 -> Cartao\n\n");
                            printf("Digite a forma de pagamento: \t");
                            scanf("%d", &formapagar);
                            while(formapagar < 1 || formapagar > 2)
                            {
                                printf("Digite uma opcao valida: \t");
                                scanf("%d", &formapagar);
                            }
                        }
                        else if(exclui == 2 && quantidadelivro == 1 && lixo[0] == 2) //1 livro no carrinho apÃ³s excluir
                        {
                            printf("------------------------------------------------------");
                            printf("\n|                    PAGAMENTO                       |\n");
                            printf("------------------------------------------------------\n");
                            printf("\nLivro: %s\n", livros[0]);
                            SomaDosValores = valor2;
                            printf("Total de R$%.2f\n\n", SomaDosValores);
                            printf("Como deseja realizar o pagamento? \n\nOpcao 1 -> Dinheiro\nOpcao 2 -> Cartao\n\n");
                            printf("Digite a forma de pagamento: \t");
                            scanf("%d", &formapagar);
                            while(formapagar < 1 || formapagar > 2)
                            {
                                printf("Digite uma opcao valida: \t");
                                scanf("%d", &formapagar);
                            }
                        }
                        else if(lixo[0] != 1 || lixo[0] != 2) //2 Livros no carrinho nÃ£o excluindo do carrinho
                        {
                            printf("------------------------------------------------------");
                            printf("\n|                    PAGAMENTO                       |\n");
                            printf("------------------------------------------------------\n");
                            printf("\nLivro: %s \nLivro 2: %s\n", livros[0], livros[1]);
                            SomaDosValores = valor2 + valor3;
                            printf("Total de R$%.2f \n\nComo deseja realizar o pagamento? \n\nOpcao 1 -> Dinheiro\nOpcao 2 -> Cartao\n", SomaDosValores);
                            printf("\nDigite a forma de pagamento: \t");
                            scanf("%d", &formapagar);
                            while(formapagar < 1 || formapagar > 2)
                            {
                                printf("Digite uma opcao valida: \t");
                                scanf("%d", &formapagar);
                            }
                        }
                        
                        if(formapagar == 1) //Pagamento em Dinheiro com sistema de troco 
                        {
                            printf("\nDigite o valor? \t");
                            scanf("%f", &ValorRecebido);
                            troco = SomaDosValores - ValorRecebido; 
                            while(ValorRecebido < SomaDosValores)
                            {
                                printf("Valor insuficiente, faltam R$ %.2f \nDigite o valor restante \n", troco);
                                scanf("%f", &ValorRecebido2);
                                ValorRecebido = ValorRecebido + ValorRecebido2;
                                troco = SomaDosValores - ValorRecebido; //Troco atualizado
                            }
                            if(ValorRecebido > SomaDosValores)
                            {		
                                printf("\nObrigado por comprar nossa loja o seu troco e de R$%.2f, volte sempre! \n", -troco);	
                                printf("\n\nProximo cliente? \n\nOpcao 1 -> SIM \nOpcao 2 -> NAO \n\n");
                                printf("Opcao desejada: \t");
                                scanf("%d", &final);
                                while(final < 1 || final > 2)
                                {
                                    printf("Digite uma opcao valida: \t");
                                    scanf("%d", &final);
                                }
                                resetar = false;	
                            }
                            else if(ValorRecebido = SomaDosValores)
                            {
                                printf("\nObrigado por comprar nossa loja, volte sempre!\n");
                                printf("\n\nProximo cliente? \n\nOpcao 1 -> SIM \nOpcao 2 -> NAO \n\n");
                                printf("Opcao desejada: \t");
                                scanf("%d", &final);
                                while(final < 1 || final > 2)
                                {
                                    printf("Digite uma opcao valida: \t");
                                    scanf("%d", &final);
                                }
                                resetar = false;
                            }
                        }
                        else if(formapagar == 2)
                        {
                            printf("\nOpcao 1 -> Debito\nOpcao 2 -> Credito\n\nOpcao desejada: \t");
                            scanf("%d", &debitocredito);
                            while(debitocredito < 1 || debitocredito > 2)
                            {
                                printf("\n\nDigite uma opcao valida: \t");
                                scanf("%d", &debitocredito);
                            }
                            if(debitocredito == 1)
                            {
                                printf("\nA forma de pagamento selecionada foi debito, ");
                                printf("\nPorfavor insira o cartao e digite a senha\n");
                                printf("Obrigado por comprar na nossa loja!! ");
                                printf("\n\nProximo cliente? \n\nOpcao 1 -> SIM \nOpcao 2 -> NAO \n\n");
                                printf("Opcao desejada: \t");
                                scanf("%d", &final);
                                while(final < 1 || final > 2)
                                {
                                    printf("Digite uma opcao valida: \t");
                                    scanf("%d", &final);
                                }
                                resetar = false;
                            }
                            else if(debitocredito == 2)
                            {
                                printf("\nQuantas parcelas deseja?\n\nOpcao 1 -> A vista \nOpcao 2 -> 2x \nOpcao 3 -> 3x \n\n");
                                printf("Opcao: \t");
                                scanf("%d", &parcela);
                                if(parcela == 1) //Cartao de Credito a vista
                                {
                                    printf("\nPorfavor insira o cartao e digite a senha\n");
                                    printf("Obrigado por comprar na nossa loja!!\n ");
                                    printf("\n\nProximo cliente? \n\nOpcao 1 -> SIM \nOpcao 2 -> NAO \n\n");
                                    printf("Opcao desejada: \t");
                                    scanf("%d", &final);
                                    while(final < 1 || final > 2)
                                    {
                                        printf("Digite uma opcao valida: \t");
                                        scanf("%d", &final);
                                    }
                                    resetar = false;
                                }
                                else if(parcela == 2) //Cartao de Credito em 2X
                                {
                                    valorparcelado = SomaDosValores/2;
                                    printf("O valor total foi: R$%.2f \nFicou 2x de R$%.2f", SomaDosValores, valorparcelado);
                                    printf("\nPorfavor insira o cart?o e digite a senha\n");
                                    printf("Obrigado por comprar na nossa loja!! ");
                                    printf("\n\nProximo cliente? \n\nOpcao 1 -> SIM \nOpcao 2 -> NAO \n\n");
                                    printf("Opcao desejada: \t");
                                    scanf("%d", &final);
                                    while(final < 1 || final > 2)
                                    {
                                        printf("Digite uma opcao valida: \t");
                                        scanf("%d", &final);
                                    }
                                    resetar = false;
                                }
                                else if(parcela == 3) //Cartao de Credito em 3X
                                {
                                    valorparcelado = SomaDosValores/3;
                                    printf("\nO valor total foi: R$%.2f \nFicou 3x de R$%.2f", SomaDosValores, valorparcelado);
                                    printf("\nPorfavor insira o cartao e digite a senha\n");
                                    printf("Obrigado por comprar na nossa loja!! ");
                                    printf("\n\nProximo cliente? \n\nOpcao 1 -> SIM \nOpcao 2 -> NAO \n\n");
                                    printf("Opcao desejada: \t");
                                    scanf("%d", &final);
                                    while(final < 1 || final > 2)
                                    {
                                        printf("Digite uma opcao valida: \t");
                                        scanf("%d", &final);
                                    }
                                    resetar = false;
                                }
                            }
                        }
                    }
                }
                else if(quantidadelivro == 3) //Tres livros no carrinho
                {
                    printf("\nItem 1 -> %s | Preco R$%.2f \nItem 2 -> %s | Preco R$%.2f \nItem 3 -> %s | Preco R$%.2f \n", livros[0], valor2, livros[1], valor3, livros[2], valor4);
                    printf("\nDeseja excluir algum item do carrinho? \n\nOpcao 1 -> SIM \nOpcao 2 -> NAO\n\n");
                    printf("Opcao desejada: \t");
                    scanf("%d", &exclui);
                    while(exclui < 1 || exclui > 2)
                    {
                        printf("Digite uma opcao valida: \t");
                        scanf("%d", &exclui);
                    }
                    if(exclui == 1) //Excluindo item do carrinho
                    {
                        printf("\nQual item? \n\nItem 1 -> %s \nItem 2 -> %s \nItem 3 -> %s", livros[0], livros[1], livros[2]);
                        printf("\n\nItem : \t");
                        scanf("%d", &lixo[0]);
                        while(lixo[0] < 1 || lixo[0] > 3)
                        {
                            printf("Digite um item valido: \t");
                            scanf("%d", &lixo[0]);
                        }
                        if(lixo[0] == 1) //Excluindo o item 1 do carrinho
                        {
                            quantidadelivro--;
                            strcpy (livros[0], livros[1]);
                            strcpy (livros[1], livros[2]);
                            valor2 = 0;
                            printf("Itens restantes: \n\nItem 1 -> %s \nItem 2 -> %s", livros[0], livros[1]);
                            printf("\nDeseja excluir mais algum item do carrinho?\n\nOpcao 1 -> SIM\n\n");
                            printf("Opcao 2 -> NAO \n\nOpcao desejada: \t");
                            scanf("%d", &lixo[1]);
                            while(lixo[1] < 1 || lixo[1] > 2)
                            {
                                printf("Digite um item valido: \t");
                                scanf("%d", &lixo[1]);
                            }
                        }
                        else if(lixo[0] == 2) //Excluindo o item 2 do carrinho
                        {
                            quantidadelivro--;
                            strcpy (livros[1], livros[2]);
                            valor3 = 0;
                            printf("Itens restantes: \n\nItem 1 -> %s \nItem 2 -> %s\n", livros[0], livros[1]);
                            printf("\nDeseja excluir mais algum item do carrinho?\n\nOpcao 1 -> SIM\n");
                            printf("Opcao 2 -> NAO \n\nOpcao desejada: \t");
                            scanf("%d", &lixo[1]);
                            while(lixo[1] < 1 || lixo[1] > 2)
                            {
                                printf("Digite um item valido: \t");
                                scanf("%d", &lixo[1]);
                            }
                        }
                        else if(lixo[0] == 3) //Excluindo o item 3 do carrinho
                        {
                            quantidadelivro--;
                            strcpy (livros[2], lixeira);
                            valor4 = 0;
                            printf("Itens restantes: \n\nItem 1 -> %s \nItem 2 -> %s", livros[0], livros[1]);
                            printf("\nDeseja excluir mais algum item do carrinho?\n\nOpcao 1 -> SIM\n\n");
                            printf("Opcao 2 -> NAO \n\nOpcao desejada: \t");
                            scanf("%d", &lixo[1]);
                            while(lixo[1] < 1 || lixo[1] > 2)
                            {
                                printf("Digite um item valido: \t");
                                scanf("%d", &lixo[1]);
                            }
                        }

                        if(lixo[1] == 1 && lixo[0] == 1)
                        {
                            printf("\nQual item? \n\nItem: \t");
                            scanf("%d", &lixo[2]);
                            while(lixo[2] < 1 || lixo[2] > 2)
                            {
                                printf("\nEscolha um item valido: \t");
                                scanf("%d", &lixo[2]);
                            }
                        }
                        else if(lixo[1] == 1 && lixo[0] == 2)
                        {
                            printf("\nQual item? \n\nItem: \t");
                            scanf("%d", &lixo[2]);
                            while(lixo[2] < 1 || lixo[2] > 2)
                            {
                                printf("\nEscolha um item valido: \t");
                                scanf("%d", &lixo[2]);
                            }
                        }
                        else if(lixo[1] == 1 && lixo[0] == 3)
                        {
                            printf("\nQual item? \n\n");
                            scanf("%d", &lixo[2]);
                            while(lixo[2] < 1 || lixo[2] > 2)
                            {
                                printf("\nEscolha um item valido: \t");
                                scanf("%d", &lixo[2]);
                            }
                        }
                        else if(lixo[1] == 2) //Excluindo mais nenhum livro
                        {
                            exclui = 2;
                        }
                        if(lixo[2] == 1 && lixo[0] == 1) //Excluir
                        {
                            quantidadelivro--;
                            strcpy (livros[0], livros[1]);
                            valor3 = 0;
                            printf("\nItem restante: %s\n", livros[0]);
                            printf("\nDeseja excluir mais algum item do carrinho?\n\nOpcao 1 -> SIM\n");
                            printf("Opcao 2 -> NAO \n\nOpcao desejada: \t");
                            scanf("%d", &lixo[3]);
                            while(lixo[3] < 1 || lixo[3] > 2)
                            {
                                printf("Digite uma opcao valida: \t");
                                scanf("%d", &lixo[3]);
                            }
                        }
                        else if(lixo[2] == 2 && lixo[0] == 1)
                        {
                            quantidadelivro--;
                            strcpy (livros[1], lixeira);
                            valor4 = 0;
                            printf("\nItem restante: %s\n", livros[0]);
                            printf("\nDeseja excluir mais algum item do carrinho?\n\nOpcao 1 -> SIM\n");
                            printf("Opcao 2 -> NAO \n\nOpcao desejada: \t");
                            scanf("%d", &lixo[3]);
                            while(lixo[3] < 1 || lixo[3] > 2)
                            {
                                printf("Digite uma opcao valida: \t");
                                scanf("%d", &lixo[3]);
                            }
                        }
                        else if(lixo[2] == 1 && lixo[0] == 2)
                        {
                            quantidadelivro--;
                            strcpy (livros[0], livros[1]);
                            valor2 = 0;
                            printf("\nItem restante: %s\n", livros[0]);
                            printf("\nDeseja excluir mais algum item do carrinho?\n\nOpcao 1 -> SIM\n");
                            printf("Opcao 2 -> NAO \n\nOpcao desejada: \t");
                            scanf("%d", &lixo[3]);
                            while(lixo[3] < 1 || lixo[3] > 2)
                            {
                                printf("Digite uma opcao valida: \t");
                                scanf("%d", &lixo[3]);
                            }
                        }
                        else if(lixo[2] == 2 && lixo[0] == 2)
                        {
                            quantidadelivro--;
                            strcpy (livros[1], lixeira);
                            valor4 = 0;
                            printf("\nItem restante: %s\n", livros[0]);
                            printf("\nDeseja excluir mais algum item do carrinho?\n\nOpcao 1 -> SIM\n");
                            printf("Opcao 2 -> NAO \n\nOpcao desejada: \t");
                            scanf("%d", &lixo[3]);
                            while(lixo[3] < 1 || lixo[3] > 2)
                            {
                                printf("Digite uma opcao valida: \t");
                                scanf("%d", &lixo[3]);
                            }
                        }
                        else if(lixo[2] == 1 && lixo[0] == 3)
                        {
                            quantidadelivro--;
                            strcpy (livros[0], livros[1]);
                            valor2 = 0;
                            printf("\nItem restante: %s\n", livros[0]);
                            printf("\nDeseja excluir mais algum item do carrinho?\n\nOpcao 1 -> SIM\n");
                            printf("Opcao 2 -> NAO \n\nOpcao desejada: \t");
                            scanf("%d", &lixo[3]);
                            while(lixo[3] < 1 || lixo[3] > 2)
                            {
                                printf("Digite uma opcao valida: \t");
                                scanf("%d", &lixo[3]);
                            }
                        }
                        else if(lixo[2] == 2 && lixo[0] == 3)
                        {
                            quantidadelivro--;
                            strcpy (livros[1], lixeira);
                            valor3 = 0;
                            printf("\nItem restante: %s\n", livros[0]);
                            printf("\nDeseja excluir mais algum item do carrinho?\n\nOpcao 1 -> SIM\n");
                            printf("Opcao 2 -> NAO \n\nOpcao desejada: \t");
                            scanf("%d", &lixo[3]);
                            while(lixo[3] < 1 || lixo[3] > 2)
                            {
                                printf("Digite uma opcao valida: \t");
                                scanf("%d", &lixo[3]);
                            }
                        }

                        if(lixo[3] == 1)
                        {
                            printf("\nNao ha mais livro no carrinho, deseja fechar o programa ou escolher outro livro? \n\n");
                            printf("Opcao 1 -> Fechar \nOpcao 2 -> Mais Livros\n\n");
                            printf("Opcao desejada: \t");
                            scanf("%d", &fecharprog);
                            while(fecharprog < 1 || fecharprog > 2)
                            {
                                printf("Digite uma opcao valida: \t");
                                scanf("%d", &fecharprog);
                            }
                            if(fecharprog == 1)
                            {
                                exit(0);
                            }
                            else if(fecharprog == 2)
                            {
                                valor2 = 0;
                                valor3 = 0;
                                valor4 = 0;
                                lixo[0] = 0;
                                lixo[1] = 0;
                                lixo[2] = 0;
                                exclui = 0;
                                livrobloq2 = false;
                                livrobloq3 = false;
                                livrobloq4 = false;
                                resetar = true;
                            }
                        }
                        else if(lixo[3] == 2)
                        {
                            exclui = 2;
                        }
                    }
                    if(exclui == 2) //NÃ£o excluindo item do carrinho
                    {
                        SomaDosValores = valor2 + valor3 + valor4;
                        printf("\nO valor total foi: R$%.2f \nComo deseja realizar o pagamento? \n\nOpcao 1 -> Dinheiro\nOpcao 2 -> Cartao\n\n", SomaDosValores);
                        printf("Opcao desejada: \t");
                        scanf("%d", &formapagar);
                        if(formapagar == 1)
                        {
                            printf("Digite o valor? \t");
                            scanf("%f", &ValorRecebido);
                            troco = SomaDosValores - ValorRecebido; 
                            while(ValorRecebido < SomaDosValores)
                            {
                                printf("Valor insuficiente, faltam R$ %.2f \nDigite o valor restante \n", troco);
                                scanf("%f", &ValorRecebido2);
                                ValorRecebido = ValorRecebido + ValorRecebido2;
                                troco = SomaDosValores - ValorRecebido; //Troco atualizado
                            }
                            if(ValorRecebido > SomaDosValores)
                            {		
                                printf("\nObrigado por comprar nossa loja o seu troco e de R$ %.2f", -troco);	
                                printf("\n\nProximo cliente? \n\nOpcao 1 -> SIM \nOpcao 2 -> NAO \n\n");
                                printf("Opcao desejada: \t");
                                scanf("%d", &final);
                                while(final < 1 || final > 2)
                                {
                                    printf("Digite uma opcao valida: \t");
                                    scanf("%d", &final);
                                }	
                                resetar = false;
                            }
                            else if(ValorRecebido = SomaDosValores)
                            {
                                printf("\nObrigado por comprar nossa loja, volte sempre!");
                                printf("\n\nProximo cliente? \n\nOpcao 1 -> SIM \nOpcao 2 -> NAO \n\n");
                                printf("Opcao desejada: \t");
                                scanf("%d", &final);
                                while(final < 1 || final > 2)
                                {
                                    printf("Digite uma opcao valida: \t");
                                    scanf("%d", &final);
                                }
                                resetar = false;
                            }
                        }
                        else if(formapagar == 2)
                        {
                            printf("\nOpcao 1 -> Debito\nOpcao 2 -> Credito\n\nOpcao desejada: \t");
                            scanf("%d", &debitocredito);
                            while(debitocredito < 1 || debitocredito > 2)
                            {
                                printf("Digite a opcao correta: \t");
                                scanf("%d", &debitocredito);
                            }
                            if(debitocredito == 1)
                            {
                                printf("\nA forma de pagamento selecionada foi debito, ");
                                printf("porfavor insira o cartao e digite a senha\n");
                                printf("Obrigado por comprar na nossa loja!! ");
                                printf("\n\nProximo cliente? \n\nOpcao 1 -> SIM \nOpcao 2 -> NAO \n\n");
                                printf("Opcao desejada: \t");
                                scanf("%d", &final);
                                while(final < 1 || final > 2)
                                {
                                    printf("Digite uma opcao valida: \t");
                                    scanf("%d", &final);
                                }
                                resetar = false;
                            }
                            else if(debitocredito == 2)
                            {
                                printf("\nQuantas parcelas deseja?\n\nOpcao 1 -> A vista \nOpcao 2 -> 2x \nOpcao 3 -> 3x \n\n");
                                printf("Opcao: \t");
                                scanf("%d", &parcela);
                                if(parcela == 1)
                                {
                                    printf("\nPorfavor insira o cartao e digite a senha\n");
                                    printf("Obrigado por comprar na nossa loja!!\n ");
                                    printf("\n\nProximo cliente? \n\nOpcao 1 -> SIM \nOpcao 2 -> NAO \n\n");
                                    printf("Opcao desejada: \t");
                                    scanf("%d", &final);
                                    while(final < 1 || final > 2)
                                    {
                                        printf("Digite uma opcao valida: \t");
                                        scanf("%d", &final);
                                    }
                                    resetar = false;
                                }
                                else if(parcela == 2)
                                {
                                    valorparcelado = SomaDosValores/2;
                                    printf("O valor total foi: R$%.2f \n\nParcelado em 2x ficou %.2f", SomaDosValores, valorparcelado);
                                    printf("\nPorfavor insira o cart?o e digite a senha\n");
                                    printf("Obrigado por comprar na nossa loja!! ");
                                    printf("\n\nProximo cliente? \n\nOpcao 1 -> SIM \nOpcao 2 -> NAO \n\n");
                                    printf("Opcao desejada: \t");
                                    scanf("%d", &final);
                                    while(final < 1 || final > 2)
                                    {
                                        printf("Digite uma opcao valida: \t");
                                        scanf("%d", &final);
                                    }
                                    resetar = false;
                                }
                                else if(parcela == 3)
                                {
                                    valorparcelado = SomaDosValores/3;
                                    printf("\nO valor total foi: R$%.2f \n\nParcelado em 3x ficou %.2f", SomaDosValores, valorparcelado);
                                    printf("\nPorfavor insira o cartao e digite a senha\n");
                                    printf("Obrigado por comprar na nossa loja!! ");
                                    printf("\n\nProximo cliente? \n\nOpcao 1 -> SIM \nOpcao 2 -> NAO \n\n");
                                    printf("Opcao desejada: \t");
                                    scanf("%d", &final);
                                    while(final < 1 || final > 2)
                                    {
                                        printf("Digite uma opcao valida: \t");
                                        scanf("%d", &final);
                                    }
                                    resetar = false;
                                }
                            }
                        }
                    }
                }
                
                if(quantidadelivro == 1) 
                {
                
                    FILE *file;
                    file = fopen("NotaFiscalCompra.txt", "w");
                    fprintf(file,"-----------------------------------------\n");
                    fprintf(file,"|               NOTA FISCAL              |\n");
                    fprintf(file,"-----------------------------------------\n\n");;

                    fprintf(file, "\n------------ Dados do usuario ------------\n\n");
                    fprintf(file, "Nome: %s %s\n", cliente.nome, cliente.sobrenome);
                    fprintf(file, "CPF: %s ", cliente.cpf);
                    fprintf(file, "\n\n------------  Dados da compra  ------------\n");
                    fprintf(file, "\nLivro: %s \n", livros[0]);
                    fprintf(file, "\n------------ Forma de Pagamento ------------\n\n");
                    if(formapagar == 1)
                    {
                        fprintf(file, "Quantidade de itens \t001\n");
                        fprintf(file, "Valor Total (R$) \t    %.2f\n", SomaDosValores);
                        fprintf(file,"Dinheiro");
                    }
                    else if(formapagar == 2 && debitocredito == 1)
                    {
                        fprintf(file, "Quantidade de itens \t001\n");
                        fprintf(file, "Valor Total (R$) \t    %.2f\n", SomaDosValores);
                        fprintf(file,"Cartao de debito");
                    }
                    else if(formapagar == 2 && debitocredito == 2)
                    {
                        if(parcela == 1)
                        {
                            fprintf(file, "Quantidade de itens \t001\n");
                            fprintf(file, "Valor Total (R$) \t    %.2f\n", SomaDosValores);
                            fprintf(file, "Cartao de credito a vista");
                        }
                        else if(parcela == 2)
                        {
                            fprintf(file, "Quantidade de itens \t001\n");
                            fprintf(file, "Valor Total (R$) \t    %.2f\n", SomaDosValores);
                            fprintf(file, "Cartao de credito em 2x de \t%.2f", valorparcelado);
                        }
                        else if(parcela == 3)
                        {
                            fprintf(file, "Quantidade de itens \t001\n");
                            fprintf(file, "Valor Total (R$) \t    %.2f\n", SomaDosValores);
                            fprintf(file, "Cartao de credito em 3x de \t%.2f", valorparcelado);
                        }
                        
                    }

                    fclose(file);


                }
                else if(quantidadelivro == 2) //Dois Livros no carrinho 
                {
                    
                    FILE *file;
                    file = fopen("NotaFiscalCompra.txt", "w");
                    fprintf(file,"-----------------------------------------\n");
                    fprintf(file,"|               NOTA FISCAL              |\n");
                    fprintf(file,"-----------------------------------------\n\n");;

                    fprintf(file, "\n------------ Dados do usuario ------------\n\n");
                    fprintf(file, "Nome: %s %s\n", cliente.nome, cliente.sobrenome);
                    fprintf(file, "CPF: %s ", cliente.cpf);
                    fprintf(file, "\n\n------------  Dados da compra  ------------\n");
                    fprintf(file, "\nLivro: %s \n", livros[0]);
                    fprintf(file, "Livro: %s \n", livros[1]);

                    fprintf(file, "\n------------ Forma de Pagamento ------------\n\n");
                    if(formapagar == 1)
                    {
                        fprintf(file, "Quantidade de itens \t002\n");
                        fprintf(file, "Valor Total (R$) \t%.2f\n", SomaDosValores);
                        fprintf(file,"Dinheiro");
                    }
                    else if(formapagar == 2 && debitocredito == 1)
                    {
                        fprintf(file, "Quantidade de itens \t002\n");
                        fprintf(file, "Valor Total (R$) \t%.2f\n", SomaDosValores);
                        fprintf(file,"Cartao de debito");
                    }
                    else if(formapagar == 2 && debitocredito == 2)
                    {
                        if(parcela == 1)
                        {
                            fprintf(file, "Quantidade de itens \t002\n");
                            fprintf(file, "Valor Total (R$) \t%.2f\n", SomaDosValores);
                            fprintf(file, "Cartao de credito a vista");
                        }
                        else if(parcela == 2)
                        {
                            fprintf(file, "Quantidade de itens \t002\n");
                            fprintf(file, "Valor Total (R$) \t%.2f\n", SomaDosValores);
                            fprintf(file, "Cartao de credito em 2x de \t%.2f", valorparcelado);
                        }
                        else if(parcela == 3)
                        {
                            fprintf(file, "Quantidade de itens \t002\n");
                            fprintf(file, "Valor Total (R$) \t%.2f\n", SomaDosValores);
                            fprintf(file, "Cartao de credito em 3x de \t%.2f", valorparcelado);
                        }
                        
                    }


                    fclose(file);
                }
                else if(quantidadelivro == 3)
                {
                    
                    FILE *file;
                    file = fopen("NotaFiscalCompra.txt", "w");
                
                    fprintf(file,"-----------------------------------------\n");
                    fprintf(file,"|               NOTA FISCAL              |\n");
                    fprintf(file,"-----------------------------------------\n\n");

                    fprintf(file, "\n------------ Dados do usuario ------------\n\n");

                    fprintf(file, "Nome: %s %s\n", cliente.nome, cliente.sobrenome);
                    fprintf(file, "CPF: %s ", cliente.cpf);

                    fprintf(file, "\n\n------------  Dados da compra  ------------\n");

                    fprintf(file, "\nLivro: %s \n", livros[0]);
                    fprintf(file, "Livro: %s \n", livros[1]);
                    fprintf(file, "Livro: %s \n", livros[2]);

                    fprintf(file, "\n------------ Forma de Pagamento ------------\n\n");
                    if(formapagar == 1)
                    {
                        fprintf(file, "Quantidade de itens \t003\n");
                        fprintf(file, "Valor Total (R$) \t%.2f\n", SomaDosValores);
                        fprintf(file,"Dinheiro");
                    }
                    else if(formapagar == 2 && debitocredito == 1)
                    {
                        fprintf(file, "Quantidade de itens \t003\n");
                        fprintf(file, "Valor Total (R$) \t%.2f\n", SomaDosValores);
                        fprintf(file,"Cartao de debito");
                    }
                    else if(formapagar == 2 && debitocredito == 2)
                    {
                        if(parcela == 1)
                        {
                            fprintf(file, "Quantidade de itens \t003\n");
                            fprintf(file, "Valor Total (R$) \t%.2f\n", SomaDosValores);
                            fprintf(file, "Cartao de credito a vista");
                        }
                        else if(parcela == 2)
                        {
                            fprintf(file, "Quantidade de itens \t003\n");
                            fprintf(file, "Valor Total (R$) \t%.2f\n", SomaDosValores);
                            fprintf(file, "Cartao de credito em 2x de \t%.2f", valorparcelado);
                        }
                        else if(parcela == 3)
                        {
                            fprintf(file, "Quantidade de itens \t003\n");
                            fprintf(file, "Valor Total (R$) \t%.2f\n", SomaDosValores);
                            fprintf(file, "Cartao de credito em 3x de \t%.2f", valorparcelado);
                        }
                        
                    }
                    
                    fclose(file);
                }
                
            }


        }while(resetar == true);

        if(final == 1)
        {
            resetargeral = true;
        }
        else if(final == 2)
        {
            
            exit(0);
        }
        

    }while(resetargeral == true);
    return(0);
    system("Pause");

}
