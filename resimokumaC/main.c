#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    FILE* fp;

    fp = fopen("G:/biance.txt", "r+");
    if(fp==NULL){
        printf("Dosya bulunamadı veya okunamıyor.");
    }
    else{
    ch=fgetc(fp);
    while (ch=fgetc(fp)!=EOF)
    {
        printf("%c", ch);
        ch=fgetc(fp);
    }
    fclose(fp);
    }
    return 0;

}
