#include <stdlib.h>
#include <stdio.h>

  //C program that determines if an unsigned int is even or odd usinf bitwiae o\
perator                                                                         
  void even_or_odd(unsigned int i){
    if(i & 1) printf("%u is odd\n", i);
    else printf("%u is even\n",i);
  }
 //C program that swaps the values of two variables without using a temporary \
 variable , only using bitwise operators                                        
  void swap_two(unsigned int i){
    x=x+y;//x^y
    y=x-y;//x^y
    x=x-y;//x^y
 }

int main(){
  unsigned char x=18;
  unsigned char y=21;

  printf("decimal:= %u\n", x,y);
  printf("hexadecimal:= %x\n", x,y);

  //bitwise
  printf("~x = %u (dec) or %x (hex)\n", ~x,~x);//NOT
  printf("~y = %u (dec) or %x (hex)\n", ~y,~y);//NOT

  printf("x & y = %u (dec) or %x (hex)\n", x&y, x&y);//AND
  
  printf("x | y = %u (dec) or %x (hex)\n", x|y, x|y);//OR
  
  printf("x ^ y = %u (dec) or %x (hex)\n", x^y, x^y);//XOR
  
  printf("x<<2 = %u (dec) or %x (hex)\n", x<<2, x<<2);//shift left
  printf("y<<2 = %u (dec) or %x (hex)\n", y<<2, y<<2);//shift left

  printf("x>>2 = %u (dec) or %x (hex)\n", x>>2, x>>2);//shift left
  printf("y>>2 = %u (dec) or %x (hex)\n", y>>2, y>>2);//shift left 

  even_or_odd(x);
  even_or_odd(y);
  
  
}
