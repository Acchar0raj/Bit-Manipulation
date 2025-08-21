<h2>Counting Set Bits</h2>

<p>
The <strong>set bits</strong> (also called <em>1-bits</em> or <em>population count</em>) of a number are the number of binary digits that are set to 1 in its binary representation.<br>
For example: the number <code>13</code> in binary is <code>1101</code>, which has <strong>3</strong> set bits.
</p>

<h3>Methods to Count Set Bits</h3>

<ol>
  <li>
    <strong>Naive Method (Bit Checking):</strong><br>
    Repeatedly shift the number right and check the last bit using <code>n &amp; 1</code>.
    <pre><code>
int count = 0;
while (n) {
    count += n & 1;
    n >>= 1;
}
    </code></pre>
    <span>Time Complexity: <strong>O(k)</strong>, where k is the number of bits in the integer (usually 32 or 64).</span>
  </li>

  <li>
    <strong>Kernighan’s Algorithm:</strong><br>
    Repeatedly removes the lowest set bit using <code>n &amp;= (n - 1)</code>, adding one each time.
    <pre><code>
int count = 0;
while (n) {
    n &= (n - 1);
    count++;
}
    </code></pre>
    <span>Time Complexity: <strong>O(s)</strong>, where s is the number of set bits (can be much faster for sparse numbers).</span>
  </li>

  <li>
    <strong>Built-in Functions:</strong> <br>
    Use compiler/library functions like <code>__builtin_popcount(n)</code> in GCC/Clang.
    <pre><code>
int count = __builtin_popcount(n);
    </code></pre>
    <span>Time Complexity: <strong>O(1)</strong> in practice (implemented using hardware instructions or optimized lookup).</span>
  </li>
</ol>

<h3>Summary Table</h3>
<table border="1" cellpadding="4" cellspacing="0">
  <thead>
    <tr>
      <th>Method</th>
      <th>How It Works</th>
      <th>Time Complexity</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td>Naive</td>
      <td>Check each bit by shifting and masking</td>
      <td>O(k)</td>
    </tr>
    <tr>
      <td>Kernighan’s</td>
      <td>Remove least significant set bit iteratively</td>
      <td>O(s)</td>
    </tr>
    <tr>
      <td>Built-in</td>
      <td>Compiler/hardware-optimized</td>
      <td>O(1) in practice</td>
    </tr>
  </tbody>
</table>

<h3>Example</h3>
<pre><code>Input: 13
Output: 3
// 13 in binary is 1101 and has 3 set bits.
</code></pre>
