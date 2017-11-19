#include<stdio.h>
  int main()
  {

  int a;
  int b=1;

  printf("podaj liczbę\n");
  scanf("%d",&a);

  printf("silnia liczby\n");

  //for
  for(int i=1;i<=a; i++)
 {
   b*=i;
 }
   printf("%d\n", b);

   //while
   int j=1;
   while (j<=a)
   {
     j++;
   }
     printf("%d\n", b);

  //do while
  j=1;
  do
  {
    j++;
  }
    while (j<=a);
    printf("%d\n", b);


 return 0;
}
