#include <stdio.h>

  int main(){
    int a,b;
    printf("podaj pierwszą liczbę\n");
    scanf("%d", &a);
    printf("podaj drugą liczbę\n");
    scanf("%d", &b);

    int i;
    i=2;
    int NWD;
    NWD =1;

    while(i<a || i<b )
    {
      if((a%i==0)&&(b%i==0)){

        NWD = NWD *i;
      }
        if(b%1==0){
          b=b/i;
          }
        if(a%1==0){
          a=a/i;
        }
      if((a%i!=0)&&(b%i!=0)){
        i=i+1;
      }
    }
    printf("najwiekszy wspólny dzielnik wynosi: %d\n", NWD);
     
 return 0;
    }
