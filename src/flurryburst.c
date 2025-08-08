#include "flurryburst.h"

uint32_t flurryburst64low32(struct flurryburst64_s *s) {
  uint64_t mix = s->a + s->c;

  s->a = ((s->a << 35) | (s->a >> 29)) ^ s->b;
  s->b += 111111111111111111ULL;
  s->c = (mix << 23) | (mix >> 41);
  return mix;
}

uint32_t flurryburst32(struct flurryburst32_s *s) {
  uint32_t mix = s->a;

  s->a += ((s->a << 17) | (s->a >> 15)) ^ s->b;
  s->b += 111111111;
  s->c += (mix << 13) | (mix >> 19);
  return s->a ^ s->c;
}

uint8_t flurryburst16low8(struct flurryburst16_s *s) {
  uint16_t mix = s->a + s->c;

  s->a = ((s->a << 9) | (s->a >> 7)) ^ s->b;
  s->b += 11111;
  s->c = (mix << 6) | (mix >> 10);
  return mix;
}

uint8_t flurryburst8(struct flurryburst8_s *s) {
  s->a = ((s->a << 5) | (s->a >> 3)) + 111;
  s->b += 11;
  return s->a ^ s->b;
}
