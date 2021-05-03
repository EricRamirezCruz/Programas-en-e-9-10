#include  <stdio.h>
int  main ()
{
    /* Eric Ramirez Cruz  
    Equipo AMUKE
    3 may 21
    Programa 9. perimetro de un cuadrado
    */

    float valorL1, valorL2, valorL3, valorL4, perimetro;
    printf ("\n\n Programa 9");
    printf ("\n\n Saca el perimetro de el cuadroado");
    printf ("\n\n dame el primer valor ");
    scanf ("%f",&valorL1); 
    printf ("\n\n Dame el segundo valor ");
    scanf ("%f",&valorL2); 
    printf ("\n\n Dame el tercer valor ");
    scanf ("%f",&valorL3);
    printf ("\n\n Dame el cuarto valor ");
    scanf ("%f",&valorL4);
    perimetro = (valorL1+valorL2+valorL3+valorL4); 
    printf ("\n la suma de los dos valores es %f", perimetro );

    return  0;
}    