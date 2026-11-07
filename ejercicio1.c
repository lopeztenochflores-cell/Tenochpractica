//hola 
#include<stdio.h>
int main (){
int teno = 0; 
printf (" ingrese el numero limite para encontrar pares\n");
scanf ("%d", &teno);
printf ("los números son: ");
for (int i=1; i<=teno; i++) {
    if( i % 2 == 0) {

        printf ("%d, ", i); 
    }
}
printf ("\n");

return 0; 


}