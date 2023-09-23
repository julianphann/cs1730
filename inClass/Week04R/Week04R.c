#include <stdio.h>

int strlength(char* p){
  return strlen(p);
  int l=0;
  while(*p !='\0'){
    l++;
    p++;//increment pointer
    
  }//while
  return l;
}//strlength

int main(){
    char str[]="Hello";
    char *str2="Hello";

    str[2]= 'L';
    //str2[2]= 'L'; segmentation fault

    printf("strlength(str)= %d/n", strlength(str);
    printf("strlength(str)= %d/n", strlength(str2);

    printf("s\n", str+3); //this is valid
    
}//main
