#include <stdio.h>
#include <stdlib.h>

int main(){
float a,b,c;
int opt;
printf ("1-suma\n2-resta\n3-Multiplicacion\n4-Division");
printf ("Seleccione una opcion");
scanf ("%d",&opt);
printf ("Ingrese el primer operando:");
scanf ("%f",&a);
printf ("Ingrese el segundo operando:");
scanf ("%f",&b);
switch(opt){
case 1:
c=a+b;
break;
case 2:
c=a-c;
break;
case 3:
c=a*b;
break;
case 4:
while (b==0){
printf ("Error, b debe de ser distinto de 0\n");
printf("Introduce el segundo operando:");
scanf("%f",&b);
}c=a/b;
break;
default:
printf ("Error, opcion invalida");
c=0;
}
printf ("El resultado es:%f",c);
}
