#include "prng_c_16.h"

uint16_t prng_c_16(struct prng_c_16_s *s) {
  uint16_t block = s->a + s->c;

  s->a = ((s->a << 7) | (s->a >> 9)) ^ s->b;
  s->b += 11111;
  s->c = (block << 11) | (block >> 5);
  return block;
}
