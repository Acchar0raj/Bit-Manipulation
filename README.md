<h1>Bit Manipulation in C++ and Verilog</h1>

<p>This repository contains bit manipulation implementations in both C++ and Verilog. It serves as a reference for competitive programming, embedded systems, and RTL design.</p>

<h2>📂 Repository Structure</h2>
<ul>
  <li><strong>cpp/</strong> — C++ bit manipulation programs</li>
  <li><strong>verilog/</strong> — Verilog HDL bit manipulation modules</li>
</ul>
<p>Each folder includes its own <code>README.md</code> with detailed explanations and usage instructions.</p>

<hr>

<h2>⚡ Bitwise Operators Overview</h2>
<p>Bit manipulation operates directly on binary digits (bits). Below are the most common bitwise operators:</p>

<table border="1" cellpadding="5" cellspacing="0">
  <thead>
    <tr>
      <th>Operator</th>
      <th>Symbol</th>
      <th>Description</th>
      <th>Example (a = 5 (0101), b = 3 (0011))</th>
      <th>Result</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td>AND</td>
      <td>&amp;</td>
      <td>1 if both bits are 1, else 0</td>
      <td>a &amp; b = 0101 &amp; 0011</td>
      <td>0001 (1)</td>
    </tr>
    <tr>
      <td>OR</td>
      <td>|</td>
      <td>1 if any bit is 1</td>
      <td>a | b = 0101 | 0011</td>
      <td>0111 (7)</td>
    </tr>
    <tr>
      <td>XOR</td>
      <td>^</td>
      <td>1 if bits differ</td>
      <td>a ^ b = 0101 ^ 0011</td>
      <td>0110 (6)</td>
    </tr>
    <tr>
      <td>NOT</td>
      <td>~</td>
      <td>Bitwise inversion (1 → 0, 0 → 1)</td>
      <td>~a = ~(0101)</td>
      <td>Depends on width</td>
    </tr>
    <tr>
      <td>Left Shift</td>
      <td>&lt;&lt;</td>
      <td>Shifts bits left, fills with 0</td>
      <td>a &lt;&lt; 1 = 0101 &lt;&lt; 1</td>
      <td>1010 (10)</td>
    </tr>
    <tr>
      <td>Right Shift</td>
      <td>&gt;&gt;</td>
      <td>Shifts bits right, drops least significant bit (LSB)</td>
      <td>a &gt;&gt; 1 = 0101 &gt;&gt; 1</td>
      <td>0010 (2)</td>
    </tr>
  </tbody>
</table>

<hr>

<h2>🛠 Common Bit Tricks in C++</h2>

<pre><code>// Check if i-th bit is set
if (num &amp; (1 &lt;&lt; i)) {
    // bit is set
}

// Set i-th bit
num |= (1 &lt;&lt; i);

// Clear i-th bit
num &amp;= ~(1 &lt;&lt; i);

// Toggle i-th bit
num ^= (1 &lt;&lt; i);

// Count set bits (population count) - GCC/Clang built-in
int count = __builtin_popcount(num);

// Check if number is power of 2
if (num &gt; 0 &amp;&amp; (num &amp; (num - 1)) == 0) {
    // true: num is a power of 2
}
</code></pre>
