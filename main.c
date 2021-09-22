#include <stdio.h>

int mylen(char *s) {
  int count = 0;
  while (*s) {
    count++;
    s++;
  }
  return count;
}

int strend(char *s, char *t) {
  // Return 1 if s endswith t otherwise return 0
  int lens, lent;
  int count = 0;
  int n_char = mylen(t);
  int loops = n_char;
  lens = mylen(s);
  float result;

  while (*s) s++;
  while (*t) t++;

  if (n_char > lens || n_char <= 0) {
    printf("here");
    return 0;
  }
  
  while (loops > 0) {
    --s;
    --t;
    if (*s == *t) {
      count++;
    }
    
    loops--;
  }
  result = (float) count / (float) n_char;
  if (result == 1.0) {
    return 1;
  }
  else {
    return 0;
  }

}

int main() {
  int result;
  result = strend("Rafael", "a");
  printf("Result %i\n", result);

  return 0;
}

