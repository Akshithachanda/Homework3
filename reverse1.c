#include <stdio.h> // printf


char reverse(char * str, int length);

int main(){

  char a[250];
  char *str = a;
  printf("Enter the string");
  gets(a);
  int i;
  int length;

      for(i = 0; *(str+i) != '\0'; i++)
    {
        length++;                        // getting length of char array without the '\0'
    }
    printf("length : %d \n", length);
    reverse(a,length);

return 0;

}

char reverse(char *str, int length){

    int i = 0;
    char temp;
    //int length;
    int end;
    end = length - 1;
    

    for(i = 0; i < length/2 ; i++)
    {
        temp = str[i];               
        str[i] = str[end];
        str[end] = temp;

        end--;
    }

    printf("%s", str);

    return 0;
}




