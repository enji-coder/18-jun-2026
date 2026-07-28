#include <stdio.h>

int main()
{
    int c;
    FILE *fp;

    fp = fopen("myfile.txt", "r");

    while ((c = fgetc(fp)) != EOF)
    {
        printf("%c", c);
    }

    fclose(fp);

    return 0;
}
