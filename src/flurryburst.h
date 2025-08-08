#ifndef FLURRYBURST_H
#define FLURRYBURST_H

#include <stdint.h>

struct flurryburst64_s {
  uint64_t a;
  uint64_t b;
  uint64_t c;
};

struct flurryburst32_s {
  uint32_t a;
  uint32_t b;
  uint32_t c;
};

struct flurryburst16_s {
  uint16_t a;
  uint16_t b;
  uint16_t c;
};

struct flurryburst8_s {
  uint8_t a;
  uint8_t b;
};

uint32_t flurryburst64low32(struct flurryburst64_s *s);

uint32_t flurryburst32(struct flurryburst32_s *s);

uint8_t flurryburst16low8(struct flurryburst16_s *s);

uint8_t flurryburst8(struct flurryburst8_s *s);

#endif
