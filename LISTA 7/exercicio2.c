#include <stdio.h>

int main()
{
    int var1, var2;

    if (&var1 > &var2)
    {
        printf("Endereco de var1 e maior: %p\n", (void *)&var1);
    }
    else
    {
        printf("Endereco de var2 e maior: %p\n", (void *)&var2);
    }

    return 0;
}
