🔧 Bit Manipulation in C++ and Verilog

This repository contains bit manipulation implementations in both C++ and Verilog.
It is designed as a reference for competitive programming, embedded systems, and RTL design.

📂 Structure

cpp/ → C++ bit manipulation programs

verilog/ → Verilog HDL bit manipulation modules

Each folder has its own README.md with detailed explanations and usage instructions.

⚡ Bitwise Operators Overview

Bit manipulation works directly at the binary level. Below are the most common operators:

Operator	Symbol	Description	Example (a = 5 = 0101, b = 3 = 0011)	Result
AND	&	1 if both bits are 1, else 0	a & b = 0101 & 0011	0001 (1)
OR	|	1 if any bit is 1	a | b = 0101 | 0011	0111 (7)
XOR	^	1 if bits are different	a ^ b = 0101 ^ 0011	0110 (6)
NOT	~	Inverts bits (1 → 0, 0 → 1)	~a = ~(0101)	(depends on width)
Left Shift	<<	Shifts bits left (fills with 0)	a << 1 = 0101 << 1	1010 (10)
Right Shift	>>	Shifts bits right (drops LSB)	a >> 1 = 0101 >> 1	0010 (2)
🛠 Common Bit Tricks

Check if i-th bit is set

if (num & (1 << i)) { /* bit is set */ }


Set i-th bit

num |= (1 << i);


Clear i-th bit

num &= ~(1 << i);


Toggle i-th bit

num ^= (1 << i);


Count set bits (Population count)

__builtin_popcount(num); // GCC/Clang


Check if number is power of 2

if (num > 0 && (num & (num - 1)) == 0) { /* true */ }