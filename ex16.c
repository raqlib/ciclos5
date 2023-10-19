#include <stdio.h>

char c;

int main() {

    while (1) { //enquanto for verdade
    printf ("Escreva um caractere: ");
    scanf (" %c", &c);
    
        if (c=='.' ) {//condicao de paragem
        printf("Programa terminado!");
        return 0;

        } else {
            printf("O caractere introduzido e %c com o codigo %d\n", c, (int)c);
            //testar se é digito ou letra ou outro
            if ((c>='a' && c<='z') || (c>='A' && c<='Z')) printf("E uma letra!\n");
            else if (c>= '0' && c<= '9') printf("E um numero!\n");
            else printf("Outros\n");

            
            }
        
        }
return 0;

}