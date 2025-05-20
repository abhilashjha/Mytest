#include<stdio.h>

int fibonacci(int n) {
  if (n == 0) {
    return 0;
  } else if (n == 1) {
    return 1;
  } else {
    return fibonacci(n-1) + fibonacci(n-2);
  }
}

int main()
{
  int test_cases[] = {0, 1, 2, 5, 10};
  int expected_results[] = {0, 1, 1, 5, 55};
  int num_test_cases = sizeof(test_cases) / sizeof(test_cases[0]);

  printf("Running Fibonacci tests...\n");

  for (int i = 0; i < num_test_cases; i++) {
    int n = test_cases[i];
    int result = fibonacci(n);
    printf("Test case %d: fibonacci(%d)\n", i + 1, n);
    printf("Expected: %d, Got: %d\n", expected_results[i], result);
    if (result == expected_results[i]) {
      printf("Result: PASSED\n");
    } else {
      printf("Result: FAILED\n");
    }
    printf("\n");
  }

  return 0;
}
