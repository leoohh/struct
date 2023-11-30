#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

    struct dados_info
    {
        char nome[200];
        char autor[200];
        char categoria[200];
        float preco;
        
       
    };
int main()
{

    int i;


    struct dados_info info[3];

for ( i = 0; i < 3; i++)
{
   

        printf ("\nDigite o nome:");
       gets (info[i].nome);

       fflush (stdin);

       printf ("\nDigite o autor:");
       gets (info[i].autor);

       fflush (stdin);

       printf ("\nDigite a categoria:");
       gets (info[i].categoria);
       fflush (stdin);

       printf ("\nDigite o preco:");
       scanf ("%f", &info[i].preco);
       fflush (stdin);
}

for ( i = 0; i < 3; i++)
{
printf ("\nNome:%s", info[i].nome);
printf ("\nAutor:%s", info[i].autor);
printf ("\nCategoria:%s", info[i].categoria);
printf ("\nPreco:%f", info[i].preco);


}

return 0;
       
}