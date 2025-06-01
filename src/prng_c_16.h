#ifndef PRNG_C_16_H
#define PRNG_C_16_H

#include <stdint.h>

struct prng_c_16_s {
  uint16_t a;
  uint16_t b;
  uint16_t c;
};

uint16_t prng_c_16(struct prng_c_16_s *s);

#endif
