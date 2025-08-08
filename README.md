### FlurryBurst

---

![FlurryBurst](https://repository-images.githubusercontent.com/1027433458/ac578053-7f9c-47ce-ac02-531e9b1c339c "FlurryBurst")

---

FlurryBurst is an extremely-fast, medium-period, statistically-strong PRNG that outperforms many variants of PCG and Xorshift with enhanced statistical properties, faster generation speeds and larger periods.

The license is public domain. Anyone is free to use it for any purpose without restriction. It has no warranty.

---

`flurryburst64low32` is a PRNG function that generates a 32-bit, pseudorandom, unsigned integer from 64-bit state integers.

It accepts the following argument.

1. `s` is the `struct flurryburst64_s` pointer that contains the state. `a` must be seeded with any `uint64_t` value and both `b` and `c` must be seeded with `0`.

The return value data type is `uint32_t`.

It has a minimum period of 2⁶⁴ without broken cycles. Furthermore, a full cycle generates at least 1 of each number from a range of 2³² numbers and zeroland escapes quickly after 3 subsequent number generations.

Up to 2⁶⁴ parallel states each have a non-overlapping cycle of at least 2⁶⁴ numbers by seeding `a` with non-overlapping values, seeding `b` with `0` and seeding `c` with `a + 1`. The first several generated numbers from each parallel cycle should be skipped to avoid correlations.

It passes `stdin32` PractRand tests.

In conclusion, FlurryBurst64Low32 provides enhanced distribution, period, speed and statistical test results as an ideal alternative to RXS M, XSH RR, XSH RS and XSL RR variants of 64-bit PCG32.

---

`flurryburst32` is a PRNG function that generates a 32-bit, pseudorandom, unsigned integer from 32-bit state integers.

It accepts the following argument.

1. `s` is the `struct flurryburst32_s` pointer that contains the state. `a` must be seeded with any `uint32_t` value and both `b` and `c` must be seeded with `0`.

The return value data type is `uint32_t`.

It has a minimum period of 2³⁶ without broken cycles. Furthermore, a full cycle generates at least 1 of each number from a range of 2³² numbers and zeroland escapes quickly after 2 subsequent number generations.

Up to 2³² parallel states each have a non-overlapping cycle of at least 2³² numbers by seeding `a` with non-overlapping values, seeding `b` with `0` and seeding `c` with `a + 1`. The first several generated numbers from each parallel cycle should be skipped to avoid correlations.

It passes `stdin32` PractRand tests up to 4GB.

RXS M XS variants of PCG32 pass `stdin32` PractRand tests up to 512MB.

Xorshift32 passes `stdin32` PractRand tests up to 32KB.

In conclusion, FlurryBurst32 provides enhanced distribution, period, speed and statistical test results as an ideal alternative to RXS M XS variants of PCG32 and Xorshift32.

---

`flurryburst16low8` is a PRNG function that generates an 8-bit, pseudorandom, unsigned integer from 16-bit state integers.

It accepts the following argument.

1. `s` is the `struct flurryburst16_s` pointer that contains the state. `a` must be seeded with any `uint16_t` value and both `b` and `c` must be seeded with `0`.

The return value data type is `uint8_t`.

It has a period of 2¹⁶ without broken cycles. Furthermore, a full cycle generates at least 1 of each number from a range of 2⁸ numbers and zeroland escapes quickly after 3 subsequent number generations.

Up to 2¹⁶ parallel states each have a non-overlapping cycle of at least 2¹⁶ numbers by seeding `a` with non-overlapping values, seeding `b` with `0` and seeding `c` with `a + 1`. The first several generated numbers from each parallel cycle should be skipped to avoid correlations.

It passes `stdin8` PractRand tests up to 4MB.

RXS M, XSH RR and XSH RS variants of 16-bit PCG8 pass `stdin8` PractRand tests up to a range of 32KB to 64KB.

Xorshift16 "798" truncated to 8 low bits passes `stdin8` PractRand tests up to a range of 8KB to 16KB.

In conclusion, FlurryBurst16Low8 provides enhanced distribution, period, speed and statistical test results as an ideal alternative to RXS M, XSH RR and XSH RS variants of 16-bit PCG8 and Xorshift16 "798" truncated to 8 low bits.

---

`flurryburst8` is a PRNG function that generates an 8-bit, pseudorandom, unsigned integer from 8-bit state integers.

It accepts the following argument.

1. `s` is the `struct flurryburst8_s` pointer that contains the state. `a` must be seeded with `0` and `b` must be seeded with any `uint8_t` value.

The return value data type is `uint8_t`.

It has a period of between 2¹⁴ and 2¹⁵, precisely 18688, without broken cycles. Furthermore, a full cycle generates at least 1 of each number from a range of 2⁸ numbers and zeroland escapes immediately after 1 subsequent number generation.

Incrementing `b` by `2` outside of `flurryburst8` whenever `a` is `0` behaves as a jump function. Generating 73 subsequent numbers after either jumping or seeding the state resets `a` to `0`. 256 repetitions of both generating 73 subsequent numbers and jumping generates the same frequency of numbers as a full cycle that generates 18688 numbers without jumping.

It passes `stdin8` PractRand tests up to 4KB.

RXS M XS variants of PCG8 pass `stdin8` PractRand tests up to a range of 1KB to 2KB.

Xorshift8 passes `stdin8` PractRand tests up to 1KB.

In conclusion, FlurryBurst8 provides enhanced distribution, period, speed and statistical test results as an ideal alternative to RXS M XS variants of PCG8 and Xorshift8.

---

Additional FlurryBurst variants are coming soon.
