#include <stdio.h>
 int main()

{

   int a;
   int b;
   int c;
   int suma;
   int roznica;
   int iloczyn; 
   double iloraz;

   printf("podaj pierwszą liczbę a\n" );
   scanf("%d", &a );
   printf("podaj drugą liczbę b\n" );
   scanf("%d", &b );
   printf("wybierz metode:\n 1.dodawanie\n 2.odejmowanie\n 3.mnozenie\n 4.dzielenie\n" );
   scanf("%d",&c );
   suma= a + b;
   roznica = a - b;
   iloczyn = a * b ;
   iloraz =(double)a / (double)b ;

	if(c==1)
{

   printf("suma: %d\n", suma); 

}
	if(c==2)
{
 
   printf("roznica: %d\n", roznica);

}
	if(c==3) 
{

   printf("iloczyn: %d\n", iloczyn);

}
	if(c==4){

   printf("iloraz: %f\n", iloraz);
}

  return 0;
}
