#include <stdio.h>

main() 
 {
    FILE *fir, *sec;
    char c;

    fir = fopen("shyam.txt", "r");
    if (fir == NULL) 
    {
        printf("File does't creadted successfully...\n");
    }

    sec = fopen("filecpy.c", "w");
    if (sec == NULL) 
    {
        printf("File does't creadted successfully...\n");
        fclose(fir);
    }

    while ((c = fgetc(fir)) != EOF)
    {
        fputc(c, sec);
    }

    fclose(fir);
    fclose(sec);

    printf("File open and copied successfully...\n");

}

