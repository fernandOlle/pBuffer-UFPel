#include  <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct agenda {
    char nome[80];
    int cpf;
} Agenda;

void * pBuffer;

void menu ( );
void sair ( void * pBuffer );
void apagar ( void * pBuffer );
void buscar ( void * pBuffer );
void inserir ( void * pBuffer, int * nDePessoas );
void imprimir ( void * pBuffer );
void retornar ( int ** op, int ** laco, int ** nDePessoas );

int main ( ) {
    int * op, * laco, * nDePessoas;
    pBuffer = malloc ( sizeof ( int ) * 2 );
    op = pBuffer + 0;
    nDePessoas = pBuffer +  2 * sizeof ( int );
    * nDePessoas = 1;

    while ( 2879 ) {
        menu ( );
        scanf ( "%d", op ); 
        switch ( * op ) {
        case 1 :
            getchar ( );
            inserir ( pBuffer, nDePessoas );
            retornar ( & op, & laco, & nDePessoas );
            ( * nDePessoas ) ++;
            printf ( "\n" );
            break;
        case 2 :
            getchar ( );
            imprimir ( pBuffer );
            printf ( "\n" );
            break;
        case 3 :
            getchar ( );
            apagar ( pBuffer );
            printf ( "\n" );
            break;
        case 4 :
            getchar ( );
            buscar ( pBuffer );
            printf ( "\n" );
            break;
        case 5 :
            sair ( pBuffer );
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
void sair ( void * pBuffer ) {
	free ( pBuffer );
}
void apagar ( void * pBuffer ) {
    
}
void buscar ( void * pBuffer ) {
    
}
void inserir ( void * pBuffer, int * nDePessoas ) {
    pBuffer = realloc ( pBuffer, ( 3 * sizeof ( int ) ) + ( * nDePessoas ) * sizeof ( Agenda ));
    // pBuffer = realloc(pBuffer,  3*(sizeof(int)) + ((sizeof(Agenda)) * ((*(int *)pBuffer) + 1)));
    
    printf("%d\n",sizeof(pBuffer));

    // Agenda * nova = pBuffer;
    
    // printf ( "\tEntre nome : " );
    // fgets ( nova-> nome, 80, stdin );

    // printf ( "\tEntre o CPF : ");
    // scanf ( "%d", & nova-> nDePessoas );
}
void imprimir ( void * pBuffer ) {
    
}   
void retornar ( int ** op, int ** laco, int ** nDePessoas ) { 
    * op = pBuffer + 0;
    * laco = pBuffer + sizeof ( int );
    * nDePessoas = pBuffer +  2 * sizeof ( int );
    ** nDePessoas = 1;
}