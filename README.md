# PRNG-C-16: A Fast and Statistically-Strong Pseudorandom Number Generator 🎲

Welcome to the PRNG-C-16 repository! This project features a fast and statistically-strong pseudorandom number generator (PRNG) that works with 16-bit integers. It boasts a minimum period of \(2^{16}\), ensuring a robust output for various applications.

[![Download Releases](https://img.shields.io/badge/Download%20Releases-Click%20Here-blue)](https://github.com/jaopaulomilitao/prng-c-16/releases)

## Table of Contents

- [Introduction](#introduction)
- [Features](#features)
- [Installation](#installation)
- [Usage](#usage)
- [Example](#example)
- [Contributing](#contributing)
- [License](#license)
- [Contact](#contact)

## Introduction

Random numbers play a crucial role in computer science, especially in fields like cryptography, simulations, and gaming. The PRNG-C-16 project aims to provide a reliable and efficient solution for generating random numbers in a 16-bit format. The algorithm is designed to deliver high-quality randomness while maintaining speed.

## Features

- **Fast Performance**: The PRNG operates quickly, making it suitable for real-time applications.
- **Statistically Strong**: It passes various statistical tests, ensuring the quality of the random numbers.
- **16-Bit Output**: Specifically designed for 16-bit integers, making it ideal for embedded systems and applications requiring compact data.
- **Long Period**: With a minimum period of \(2^{16}\), it avoids repetition for a significant number of calls.

## Installation

To get started with PRNG-C-16, follow these steps:

1. **Clone the Repository**:
   ```bash
   git clone https://github.com/jaopaulomilitao/prng-c-16.git
   cd prng-c-16
   ```

2. **Download Releases**: You can download the latest release from the [Releases section](https://github.com/jaopaulomilitao/prng-c-16/releases). If you find a suitable version, download it and execute the file.

3. **Compile the Code** (if necessary):
   If you are working with C files, you may need to compile them. Use a C compiler like `gcc`:
   ```bash
   gcc -o prng prng.c
   ```

## Usage

Once you have the PRNG-C-16 installed, you can start using it in your projects. Here’s how:

1. **Include the Header**:
   Include the PRNG header file in your C code:
   ```c
   #include "prng.h"
   ```

2. **Initialize the PRNG**:
   Before generating random numbers, initialize the PRNG:
   ```c
   prng_init(seed);
   ```

3. **Generate Random Numbers**:
   Use the following function to generate a random 16-bit integer:
   ```c
   uint16_t random_number = prng_generate();
   ```

## Example

Here’s a simple example demonstrating how to use the PRNG-C-16 in a C program:

```c
#include <stdio.h>
#include "prng.h"

int main() {
    uint16_t seed = 12345; // Seed for initialization
    prng_init(seed); // Initialize PRNG

    // Generate and print 10 random numbers
    for (int i = 0; i < 10; i++) {
        uint16_t random_number = prng_generate();
        printf("Random Number %d: %u\n", i + 1, random_number);
    }

    return 0;
}
```

## Contributing

We welcome contributions to PRNG-C-16! If you would like to contribute, please follow these steps:

1. **Fork the Repository**: Click on the "Fork" button at the top right corner of the page.
2. **Create a New Branch**: 
   ```bash
   git checkout -b feature-branch
   ```
3. **Make Your Changes**: Implement your feature or fix.
4. **Commit Your Changes**:
   ```bash
   git commit -m "Description of changes"
   ```
5. **Push to Your Branch**:
   ```bash
   git push origin feature-branch
   ```
6. **Create a Pull Request**: Go to the original repository and click on "New Pull Request".

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

## Contact

For any inquiries or suggestions, feel free to reach out:

- **Author**: João Paulo Militao
- **Email**: [your-email@example.com](mailto:your-email@example.com)

You can also check the [Releases section](https://github.com/jaopaulomilitao/prng-c-16/releases) for updates and new versions.

---

Thank you for visiting the PRNG-C-16 repository! We hope you find this PRNG useful for your projects.