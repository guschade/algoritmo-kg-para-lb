#include <stdio.h>

int main(void) {
  float libra, quilograma;
  printf("insira seu peso (em kg): ");
  scanf("%f", &quilograma);

  libra = quilograma * 2.20462;
  printf("%.2f quilos são iguais a %.2f libras.", quilograma, libra);
  return 0;
}
