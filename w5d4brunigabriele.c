//prendiamo le librerie
#include <stdio.h>
#include <math.h>

//dichiariamo una variabile
int main () {
double D; //richiesto da math.h per maggiore precisione

//1 inserire il valore D

printf("inserisci il valore D: ");
scanf("%lf", &D);

//calcolo tutte le aree
printf("area del quadrato: %.2f\n", D*D);

// variabile raggio cerchio double anche per i decimale + utiliziamo M_PI funzione della libreria

double raggio = D / 2.0;
printf("area del cerchio: %.2f\n", M_PI * raggio * raggio);

// varaibile dell'area triangolo equi. usiamo sqrt (funzione più coerente)

printf("area del traingolo equilatero: %.2f\n ", (D * D * sqrt(3.0))/ 4.0);

return 0;
}
