#include <stdio.h>
#include <stdlib.h>

void greet(char* name) {
  printf("Howdy %s!\n", name);
  printf("The pointer (memory address) of the first character is: %p\n", (void*)name);
}

int main() {
  char myName[] = "Alice";
  greet(myName);
  return 0;
}
