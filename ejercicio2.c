#include <stdio.h>
int main () {
int teno=0;
printf ("ingrese un numero para verificar si es primo");
scanf ("%d", &teno );
int es_primo = 0; 
for (int i=2; i<teno; i++){
    if( teno%2 == 0 ){
        es_primo = 1; 
        break;
    }
}
if (es_primo == 0){
    printf (" %d si es primo :D \n", teno);
}else{
    printf ("%d No es primo :< \n", teno); 
}
printf ("\n"); 
}