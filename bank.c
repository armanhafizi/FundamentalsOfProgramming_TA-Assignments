#include<stdio.h>
int main()
{
    char enc;
    char dec;
    FILE *encfptr;
    FILE *decfptr;
    encfptr = fopen("encrypted.txt","r");
    decfptr = fopen("decrypted.txt","w");
    while(1)
    {
        enc = fgetc(encfptr);
        if(feof(encfptr))
        {
            break;
        }
        fprintf(decfptr,"%c",enc+13);
    }
    fclose(encfptr);
    fclose(decfptr);
    decfptr = fopen("decrypted.txt","r");
    while(1)
    {
        dec = fgetc(decfptr);
        if(feof(decfptr))
        {
            break;
        }
        printf("%c",dec-13);
    }
    fclose(decfptr);
    return 0;
}
