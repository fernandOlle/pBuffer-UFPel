#include  <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct agenda {
    char nome[20];
    int cpf;
} Agenda;

void * pBuffer;
int * op, * lacos, * nDePessoas;

void menu ( );
void sair ( );
void apagar ( );
void buscar ( );
void inserir ( int ** nDePessoas );
void imprimir ( );
void retornar ( int ** op, int ** lacos, int ** nDePessoas );

int main ( ) {
    pBuffer = malloc ( sizeof ( int ) * 3 + sizeof ( Agenda ));
    op = pBuffer + 0;
    nDePessoas = pBuffer +  2 * sizeof ( int );
    * nDePessoas = 1;
    printf("%d\n", *nDePessoas);
    printf("%p\n", pBuffer);
    ( * nDePessoas ) ++;

    printf("%d\n", *nDePessoas);

    while ( 2879 ) {
        menu ( );
        scanf ( "%d", op ); 
        
        switch ( * op ) {
        case 1 :
            getchar ( );
            inserir ( &nDePessoas );
            printf ( "\n" );
            break;
        case 2 :
            getchar ( );
            imprimir ( );
            printf ( "\n" );
            break;
        case 3 :
            getchar ( );
            apagar ( );
            printf ( "\n" );
            break;
        case 4 :
            getchar ( );
            buscar ( );
            printf ( "\n" );
            break;
        case 5 :
            sair ( );
            return 0;

        default:
            break;
        }
    }
    return 1;
}
void menu ( ) {
    printf ( "\t1 -- Inserir \n" );
    printf ( "\t2 -- Imprimir \n" );
    printf ( "\t3 -- Aagar \n" );
    printf ( "\t4 -- Buscar \n" );
    printf ( "\t5 -- Sair \n" );
    printf ( "------> ");
}
void sair ( ) {
	free ( pBuffer );
}
void apagar ( ) {
    
}
void buscar ( ) {
    
}
void inserir ( int ** nDePessoas ) {
    pBuffer = realloc ( pBuffer, ( 3 * sizeof ( int ) ) + ( ** nDePessoas ) * sizeof ( Agenda ));
    retornar ( & op, & lacos, nDePessoas );

    printf("%d\n",sizeof(pBuffer));


    Agenda * nova = pBuffer + ( 3 * sizeof ( int ) ) + ( ** nDePessoas ) * sizeof ( Agenda );
    fgets ( nova-> nome, 80, stdin );
    printf ( "\tEntre o CPF : ");
    scanf ( "%d", & nova-> cpf );
    
    printf ( "%d", ** nDePessoas );
}
void imprimir ( ) {
    // printf ( "\tEntre nome : " );
    
}
void retornar ( int ** op, int ** lacos, int ** nDePessoas ) { 
    * op = pBuffer + 0;
    * lacos = pBuffer + sizeof ( int );
    * nDePessoas = pBuffer +  2 * sizeof ( int );
    ( ** nDePessoas ) ++;
}