#include <stdio.h>

int main() {
  int zmiennaa = 7;
  int zmiennab = 3;
  int zmiennac = 5 ;
  int zmiennad = 2;
  double zmiennae;
  double zmiennaf;
  zmiennaa = zmiennab * zmiennaa;
  zmiennae = (double) zmiennab * zmiennab / zmiennac;
  zmiennaf = ( zmiennac - (double) zmiennad / zmiennab);
  printf("wynik %d\n",zmiennaa );
  printf("wynik %.1f\n",zmiennae );
  printf("wynik %f\n",zmiennaf );

int a, b, c, d;
printf ("podaj a\n" );
scanf ("%d", &a );
printf ("podaj b\n" );
scanf ("%d", &b );
printf ("podaj c\n" );
scanf ("%d", &c );
printf ("podaj d\n" );
scanf ("%d", &d );

if (a < b) {
  if (a < c) {
    if (a < d) {
      printf("najmniejsza : %d\n", a);
    }
  }
} else if (b < c) {

}

return 0;
}
