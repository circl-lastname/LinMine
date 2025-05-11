#include <stdio.h>

int main(int argc, char** argv) {
  printf("#include <stdint.h>\nuint8_t res_%s[]={", argv[1]);
  
  unsigned size = 0;
  
  int ch;
  while ((ch = getchar()) != EOF) {
    printf("%i,", ch);
    size ++;
  }
  
  printf("};unsigned res_%s_size=%u;", argv[1], size);
  
  return 0;
}
