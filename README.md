### FlurryBurst

---

[![FlurryBurst](https://repository-images.githubusercontent.com/1040453539/72608ecc-0f3a-4b0b-9253-490c269b8e53 "FlurryBurst")](https://github.com/wstaffordp/flurryburst#flurryburst64low32)

---

FlurryBurst is a medium-period, statistically-strong PRNG that outperforms PCG8, PCG16, PCG32 and Xorshift. Anyone is free to use it without warranty.

---

#### FlurryBurst64Low32

`Next` generates and returns a pseudorandom `uint` integer.

FlurryBurst64Low32 has a period of at least 2⁶⁴ by seeding `a` with a `ulong` integer and seeding the remaining state with `0`.

Up to 2⁶⁴ parallel instances each have a non-overlapping period of at least 2⁶⁴ by seeding `a` with non-overlapping `ulong` integers, seeding `b` with `0` and seeding `c` with `a + 1`. The first several results from each parallel instance should be skipped.

In conclusion, FlurryBurst64Low32 provides enhanced parallelism, period, speed and statistical test results as an ideal alternative to RXS M, XSH RR, XSH RS and XSL RR variants of PCG32.

---

#### FlurryBurst32

`Next` generates and returns a pseudorandom `uint` integer.

FlurryBurst32 has a period of at least 2³⁶ by seeding `a` with a `uint` integer and seeding the remaining state with `0`.

Up to 2³² parallel instances each have a non-overlapping period of at least 2³² by seeding `a` with non-overlapping `uint` integers, seeding `b` with `0` and seeding `c` with `a + 1`. The first several results from each parallel instance should be skipped.

In conclusion, FlurryBurst32 provides enhanced parallelism, period, speed and statistical test results as an ideal alternative to RXS M XS variants of PCG32 and Xorshift32.

---

#### FlurryBurst32Low16

`Next` generates and returns a pseudorandom `ushort` integer.

FlurryBurst32Low16 has a period of at least 2³² by seeding `a` with a `uint` integer and seeding the remaining state with `0`.

Up to 2³² parallel instances each have a non-overlapping period of at least 2³² by seeding `a` with non-overlapping integers, seeding `b` with `0` and seeding `c` with `a + 1`. The first several results from each parallel instance should be skipped.

In conclusion, FlurryBurst32Low16 provides enhanced parallelism, period, speed and statistical test results as an ideal alternative to RXS M, XSH RR and XSH RS variants of PCG16.

---

#### FlurryBurst16

`Next` generates and returns a pseudorandom `ushort` integer.

FlurryBurst16 has a period of at least 2²⁰ by seeding `a` with a `ushort` integer and seeding the remaining state with `0`.

Up to 2¹⁶ parallel instances each have a non-overlapping period of at least 2¹⁶ by seeding `a` with non-overlapping integers, seeding `b` with `0` and seeding `c` with `a + 1`. The first several results from each parallel instance should be skipped.

In conclusion, FlurryBurst16 provides enhanced parallelism, period, speed and statistical test results as an ideal alternative to RXS M XS variants of PCG16 and Xorshift16 "798".

---

#### FlurryBurst16Low8

`Next` generates and returns a pseudorandom `byte` integer.

FlurryBurst16Low8 has a period of at least 2¹⁶ by seeding `a` with a `ushort` integer and seeding the remaining state with `0`.

Up to 2¹⁶ parallel instances each have a non-overlapping period of at least 2¹⁶ by seeding `a` with non-overlapping integers, seeding `b` with `0` and seeding `c` with `a + 1`. The first several results from each parallel instance should be skipped.

In conclusion, FlurryBurst16Low8 provides enhanced parallelism, period, speed and statistical test results as an ideal alternative to RXS M, XSH RR and XSH RS variants of PCG8 and Xorshift16 "798" truncated to 8 low bits.

---

#### FlurryBurst8

`Next` generates and returns a pseudorandom `byte` integer.

FlurryBurst8 has a period of between 2¹⁴ and 2¹⁵, precisely 18688, by seeding `a` with `0` and seeding `b` with a `byte` integer.

Incrementing `b` by `2` whenever `a` is `0` behaves as a jump function. Generating 73 subsequent integers after either jumping or seeding the state resets `a` to `0`. 256 repetitions of both generating 73 subsequent integers and jumping generates the same frequency of integers as a full cycle that generates 18688 integers without jumping.

In conclusion, FlurryBurst8 provides enhanced parallelism, period, speed and statistical test results as an ideal alternative to RXS M XS variants of PCG8 and Xorshift8 "315".
