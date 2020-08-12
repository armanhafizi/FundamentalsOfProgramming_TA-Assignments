#include<stdio.h>
int main()
{
    FILE * fp_read;
    FILE * fp_write;
    char str[1000], dec[1000];
    char * filename_read = "encrypted.txt";
    char * filename_write = "decrypted.txt";
    fp_read = fopen( filename_read, "r");
    fp_write = fopen( filename_write, "w");
    if( fp_read == NULL)
    {
        printf("Could not open file %s", filename_read);
        return 1;
    }
    int i = 1;
    while( fgets( str, 1000, fp_read) != NULL)
    {
        int j = 0;
        char temp[1000];
        while(1)
        {
            if(str[j] != '\0')
            {
                temp[j] = str[j] + 13;
                j++;
            }
            else
            {
                temp[j] = '\0';
                break;
            }
        }
        fprintf( fp_write, temp, i);
        i++;
    }
    fclose(fp_write);
    fclose(fp_read);
    FILE * fp_reRead;
    char * filename_reRead = "decrypted.txt";
    fp_reRead = fopen( filename_reRead, "r");
    if( fp_reRead == NULL)
    {
        printf("Could not open file %s", filename_reRead);
        return 1;
    }
    while( fgets( str, 1000, fp_reRead) != NULL)
    {
        printf("%s", str);
//        int j = 0;
//        while(str[j] != '\0')
//        {
//            printf("%c", str[j] - 13);
//            j++;
//        }
    }
    fclose(fp_reRead);
    return 0;
}
