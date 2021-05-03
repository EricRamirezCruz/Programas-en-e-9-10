#include  <stdio.h>
int  main ()
{
    int base, exponente, i, acum=1;

    printf ("\n\n Programa 10");
    printf ("\n\n Saca la potencia de un numero");
    printf ("\n\n dame la base de la potencia ");
    scanf ("%d",&base); 
    printf ("\n\n Dame el exponente de la potencia ");
    scanf ("%d",&exponente); 
    

    for(i=1;i<=exponente;i++){

    acum=acum*base;
    
    }

    printf("resultado: %d",acum);

    return  0;
}   