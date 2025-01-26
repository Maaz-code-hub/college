#include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("test.txt", "r");
    char ch;
    if (fptr == NULL) {
        printf("Error opening file\n");
        return 1;
    }


    //For reading
    // Method 1
    /*
    fscanf(fptr, "%d", &ch);
    printf("Char = %d\n", ch);
    fscanf(fptr, "%d", &ch);
    printf("Char = %d\n", ch);
    fscanf(fptr, "%d", &ch);
    printf("Char = %d\n", ch);
    fscanf(fptr, "%d", &ch);
    printf("Char = %d\n", ch);
    fscanf(fptr, "%d", &ch);
    printf("Char = %d\n", ch);
    fscanf(fptr, "%d", &ch);
    printf("Char = %d\n", ch);
    */
   
//    Method 2
/*
   printf("%c\n",fgetc(fptr));
   printf("%c\n",fgetc(fptr));
   printf("%c\n",fgetc(fptr));
   printf("%c\n",fgetc(fptr));
   printf("%c\n",fgetc(fptr));
*/



   //For writing
//    Method 1
   /*
   fprintf(fptr,"%c",'A');
   fprintf(fptr,"%c",'P');
   fprintf(fptr,"%c",'P');
   fprintf(fptr,"%c",'L');
   fprintf(fptr,"%c",'E');
   */
   //Method 2
   /*
   fputc('M',fptr);
   fputc('A',fptr);
   fputc('N',fptr);
   fputc('G',fptr);
   fputc('O',fptr);
   */



   //For appending
   /*
   fprintf(fptr," %c",'M');
   fprintf(fptr,"%c",'A');
   fprintf(fptr,"%c",'N');
   fprintf(fptr,"%c",'G');
   fprintf(fptr,"%c",'O');
   */

    //EOF (End of file) 
    // char ch;
    ch=fgetc(fptr);
    while(ch!=EOF){
        printf("%c",ch);
        ch=fgetc(fptr);
    }
    printf("\n");
    fclose(fptr);
    return 0;
}
