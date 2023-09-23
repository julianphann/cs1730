#include <stdio.h>

int main()
{
  int n=100;
  int count=1;

  if(n>=3){
    for(int i=3; i<n; i+=2){
      int isPrime =1;
      for(int j=2;j<i/2;j++){
	if(i%j==0){
	  isPrime=0;//0 is false
	  break;
	  
	}//if
      }//for
      if (isPrime){
	count++;
	printf("prime=%d\n", count);
      }//if
    }//for    
  }//if

  printf("Prime count = %d\n" ,count);
    
}
