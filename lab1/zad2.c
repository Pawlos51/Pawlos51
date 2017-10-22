#include <stdio.h>
 int main() {
   int a, b, c;
   int suma, roznica, iloczyn, iloraz;
   double dzielenie;

   printf ("podaj a\n" );
   scanf ("%d", &a );
   printf ("podaj b\n" );
   scanf ("%d", &b );
   printf("wybierz metode:\n  1.dodawanie\n 2.odejmowanie\n 3.mnozenie\n 4.dzielenie\n );
   scanf ("%d",&c );
   suma= a + b;
   roznica = a - b;
   iloczyn = a * b ;
   iloraz = a / b ;
   if(c==1){

     printf("suma: %d\n,suma");
   }



  return 0;
}
