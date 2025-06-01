# PRNG C 16

It's a fast, statistically-strong PRNG with 16-bit integers and a minimum period of 2¹⁶.

`prng_c_16()` is the randomization function that generates a 16-bit, pseudorandom, unsigned integer.

It accepts the following argument.

1. `s` is the pointer that contains the state. Each state integer must be initialized with any combination of values.

It's in the same class as JSF16, PCG8 and `pcg8_fast` as they all use 16-bit state integers.

It has a minimum period of 2¹⁶ without broken cycles.

It has an approximated maximum period of 2³², although no cycle is guaranteed to reach a full 2³² period.

Incrementing `b` outside of `prng_c_16()` behaves as an interdimensional jump function that starts a different cycle with a period of at least 2¹⁶.

Zeroland escapes quickly after generating 3 subsequent numbers.

It's the fastest 16-bit PRNG that generates numbers individually, has a period of at least 2¹⁶ and passes statistical tests in `stdin16` PractRand with 32MB of numbers.

I welcome submissions of algorithms in the same class that challenge the aforementioned claim.

As an obligatory disclaimer, it's not a CSPRNG for use in cryptography.
