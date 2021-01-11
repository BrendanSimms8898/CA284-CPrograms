#include <stdio.h>

int LeapCalculator(int start, int end) {
  int n;
  for (n = start; n <= end; n++) {

    if ((0 == n % 4) && (0 != n % 100) || (0 == n % 400)) {
      printf("%d\n", n);
    }
  }

}
int main(int argc, char * argv[]) {
  int start, end;

  start = atoi(argv[1]);
  end = atoi(argv[2]);
  LeapCalculator(start, end);

  return (0);
}