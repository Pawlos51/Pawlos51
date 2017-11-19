#include <stdio.h>

  int main() {
  int a;
  int suma=0;
  printf("podaj liczbę\n");
  scanf("%d",&a);


  for(int i=1;i<a; i++)
  {
  if(a%i==0){
  suma+=i;
    }
  }

  if(suma==a||a==1)printf("podana liczba jest doskonała\n");
  else printf("podana liczba nie jest doskonała\n");



    return 0;
  }
