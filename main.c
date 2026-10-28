#include <errno.h>
#include <stdio.h>

int main(int argc, char* argv[]) {
  if (argc == 2) {
    printf("Hello, %s!\n", argv[1]);
  }
  else if (argc == 3) {
    printf("Hello, %c. %s!\n", argv[1][0], argv[2]);
  }
  else {
    fprintf(stderr, "Invalid number of args, usage: %s <name> [<surname>]\n", argv[0]);
    return EINVAL;
  }
  return 0;
}
