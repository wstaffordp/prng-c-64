### FlurryBurst

---

![FlurryBurst](https://repository-images.githubusercontent.com/1027433458/ac578053-7f9c-47ce-ac02-531e9b1c339c "FlurryBurst")

---

FlurryBurst is an extremely-fast, medium-period, statistically-strong PRNG that replaces many variants of PCG and Xorshift with enhanced statistical properties, faster generation speeds and larger periods.

The license is public domain. Anyone is free to use it for any purpose without restriction. It has no warranty.

---

`flurryburst8` is a deterministic PRNG function that generates an 8-bit, pseudorandom, unsigned integer from 8-bit state integers.

It accepts the following argument.

1. `s` is the `struct flurryburst8_s` pointer that contains the state. `a` must be seeded with `0` and `b` must be seeded with any `uint8_t` value.

The return value data type is `uint8_t`.

It has a period of between 2¹⁴ and 2¹⁵, precisely 18688, without broken cycles. Furthermore, a full cycle generates at least 1 of each number from a range of 2⁸ numbers and zeroland escapes immediately after 1 subsequent number generation.

Incrementing `b` by `2` outside of `flurryburst8` whenever `a` is `0` behaves as a jump function. Generating 73 subsequent numbers after either jumping or seeding the state resets `a` to `0`. 256 repetitions of both generating 73 subsequent numbers and jumping generates the same frequency of numbers as a full cycle that generates 18688 numbers without jumping.

It passes `stdin8` PractRand tests up to 4KB.

RXS M XS variants of PCG8 pass `stdin8` PractRand tests up to a range of 1KB to 2KB.

Xorshift8 passes `stdin8` PractRand tests up to 1KB.

In conclusion, FlurryBurst8 provides enhanced distribution, period, security, speed and statistical test results as an ideal alternative to RXS M XS variants of PCG8 and Xorshift8.

---

16-bit, 32-bit and 64-bit variants are coming soon.
