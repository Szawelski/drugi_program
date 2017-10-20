

#include <stdio.h>


/* int wartosc calkowita*/

int main() 
{ 
    putchar('v');  /* wypisz pojedynczy znak */
    putchar('\n'); /* znak konca linii */
    putchar('\t'); /* tabulator */
    putchar('\r'); /* powrot karetki do nowej linii */
    putchar('\\'); /* wypisuje \ */
    puts("wypisz string / ciag znakow"); /* automatycznie przechodzi do nowej linii, putchar('v'); wypisuje jeden znak */  

    puts("\nAla ma kota,\na kot ma Ale");

    return 0; 
}

