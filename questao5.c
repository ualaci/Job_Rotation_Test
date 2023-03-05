#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *str = NULL;
    printf("Digite uma string: ");
    int tamanho = 0;
    char ch;
    while ((ch = getchar()) != '\n') {
        tamanho++;
        str = (char *)realloc(str, tamanho * sizeof(char));
        if (str == NULL) {
            printf("Erro: memoria insuficiente.\n");
            return 1;
        }
        str[tamanho - 1] = ch;
    }
    int i, j;
    j = tamanho - 1;
    for (i = 0; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    printf("A string invertida eh: %s\n", str);
    free(str);
    return 0;
}