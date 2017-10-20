#include <stdio.h>
/* zapetlanie */

int mnoz(int a, int b){
    printf("Wynik mnozenia: %i\n", a * b);
    return a * b;
}
int dodaj(int a, int b){
    printf("Wynik dodawania: %i\n", a + b);
    return a + b;
}
int odejmij(int a, int b){
    printf("Wynik odejmowania: %i\n", a - b);
    return a - b;
}
int dziel(int a, int b){
    printf("Wynik dzielenia: %i i reszta %i\n", a / b,a % b);
    return a / b;
}
int licz(int a, int b, int wybor)
{

}
int main(void)
{
    int a, b;
    char wybor;
    int czy_dalej == 1;

    while(czy_dalej == 1){
    printf("Podaj wartosc a: "); scanf("%i", &a);
    printf("Podaj wartosc b: "); scanf("%i", &b);
    printf("Podaj dzialanie: "); scanf(" %c", &wybor);
    licz(a, b, wybor);
    printf("Czy dalej chcesz liczyc? (1 - tak / 0 - nie");
    scanf("%d", &czy_dalej);
    }
    return 0;
    if(wybor == '*'){
    mnoz(a, b);
    }else if(wybor == '+'){
    dodaj(a, b);
    }else if(wybor == '-'){
    odejmij(a, b);
    }else if(wybor == '/'){
    dziel(a, b);
    }else{
    puts("Nie znam dzialania!");
    }
    return 0;
}


