#include <unistd.h>

void *ft_memset(void *b, int c, size_t len) {
  unsigned char value = (unsigned char)c;
  unsigned char *ptr = (unsigned char *)b;

  while (len--) {
    *ptr++ = value;
  }
  return b;
}
