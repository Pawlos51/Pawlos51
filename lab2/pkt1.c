#include<stdio.h>
  int main()
  {

  int a;
  int b;

  printf("podaj pierwszą liczbę\n");
  scanf("%d",&a);
  printf("podaj drugą liczbę\n");
  scanf("%d",&b);
  printf("liczby z przedziału\n");

//for
   for(int i=a;i<=b; i++)
  {
    printf("%d\n", i);
  }

  //while
  int j=a;
  while (j<=b) {
    printf("%d\n", j);
    j++;
  }

  //do while
  j=a;
  do {
    printf("%d\n", j);
    j++;
  }
  while (j<=b);

  return 0;
  }
