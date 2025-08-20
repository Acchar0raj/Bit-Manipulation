<h2>Single Number Problem</h2>

<p>The <strong>Single Number</strong> problem is defined as:</p>
<p>
Given a non-empty integer array where every element appears twice except for one unique element, find that single unique element.
</p>

<h3>Using XOR to Solve</h3>

<p>The XOR (exclusive OR) operator has useful properties that allow us to solve this efficiently:</p>
<ul>
  <li><code>a ^ a = 0</code> (XOR of a number with itself is zero)</li>
  <li><code>a ^ 0 = a</code> (XOR of a number with zero is the number itself)</li>
  <li>XOR operation is commutative and associative, so the order does not matter.</li>
</ul>

<p>By XORing all elements in the array, pairs of duplicate numbers cancel out to zero, leaving only the unique number as the result.</p>

<h3>XOR Truth Table</h3>
<table border="1" cellpadding="4" cellspacing="0">
  <thead>
    <tr>
      <th>A</th>
      <th>B</th>
      <th>A XOR B</th>
    </tr>
  </thead>
  <tbody>
    <tr><td>0</td><td>0</td><td>0</td></tr>
    <tr><td>0</td><td>1</td><td>1</td></tr>
    <tr><td>1</td><td>0</td><td>1</td></tr>
    <tr><td>1</td><td>1</td><td>0</td></tr>
  </tbody>
</table>

<h3>Example</h3>
<pre><code>Input: [4, 1, 2, 1, 2]
Output: 4
</code></pre>

<h3>Time Complexity</h3>
<p>This solution runs in <strong>O(n)</strong> time, iterating through the array once, and uses <strong>O(1)</strong> extra space.</p>
