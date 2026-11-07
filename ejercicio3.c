#include <stdio.h> 
int main (){
int teno = 0;
printf (" ingrese un numero entero cualquiera");
scanf ("%d", &teno );
while (teno >1 ){
    printf ("%d ->", teno);
    if(teno%2 == 0) {
        teno = teno/2;
    } else { 
        teno = (3*teno) + 1;

    }
}
printf ("%d\n ", teno);
return 0;
}