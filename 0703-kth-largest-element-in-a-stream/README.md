<h2><a href="https://leetcode.com/problems/kth-largest-element-in-a-stream/">703. Kth Largest Element in a Stream</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are part of a university admissions office and need to keep track of the <code style="user-select: auto;">kth</code> highest test score from applicants in real-time. This helps to determine cut-off marks for interviews and admissions dynamically as new applicants submit their scores.</p>

<p style="user-select: auto;">You are tasked to implement a class which, for a given integer&nbsp;<code style="user-select: auto;">k</code>, maintains a stream of test scores and continuously returns the&nbsp;<code style="user-select: auto;">k</code>th highest test score&nbsp;<strong style="user-select: auto;">after</strong>&nbsp;a new score has been submitted. More specifically, we are looking for the <code style="user-select: auto;">k</code>th highest score in the sorted list of all scores.</p>

<p style="user-select: auto;">Implement the&nbsp;<code style="user-select: auto;">KthLargest</code> class:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">KthLargest(int k, int[] nums)</code> Initializes the object with the integer <code style="user-select: auto;">k</code> and the stream of test scores&nbsp;<code style="user-select: auto;">nums</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">int add(int val)</code> Adds a new test score&nbsp;<code style="user-select: auto;">val</code> to the stream and returns the element representing the <code style="user-select: auto;">k<sup style="user-select: auto;">th</sup></code> largest element in the pool of test scores so far.</li>
</ul>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<div class="example-block" style="user-select: auto;">
<p style="user-select: auto;"><strong style="user-select: auto;">Input:</strong><br style="user-select: auto;">
<span class="example-io" style="user-select: auto;">["KthLargest", "add", "add", "add", "add", "add"]<br style="user-select: auto;">
[[3, [4, 5, 8, 2]], [3], [5], [10], [9], [4]]</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;">Output:</strong> <span class="example-io" style="user-select: auto;">[null, 4, 5, 5, 8, 8]</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;">Explanation:</strong></p>

<p style="user-select: auto;">KthLargest kthLargest = new KthLargest(3, [4, 5, 8, 2]);<br style="user-select: auto;">
kthLargest.add(3); // return 4<br style="user-select: auto;">
kthLargest.add(5); // return 5<br style="user-select: auto;">
kthLargest.add(10); // return 5<br style="user-select: auto;">
kthLargest.add(9); // return 8<br style="user-select: auto;">
kthLargest.add(4); // return 8</p>
</div>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<div class="example-block" style="user-select: auto;">
<p style="user-select: auto;"><strong style="user-select: auto;">Input:</strong><br style="user-select: auto;">
<span class="example-io" style="user-select: auto;">["KthLargest", "add", "add", "add", "add"]<br style="user-select: auto;">
[[4, [7, 7, 7, 7, 8, 3]], [2], [10], [9], [9]]</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;">Output:</strong> <span class="example-io" style="user-select: auto;">[null, 7, 7, 7, 8]</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;">Explanation:</strong></p>
KthLargest kthLargest = new KthLargest(4, [7, 7, 7, 7, 8, 3]);<br style="user-select: auto;">
kthLargest.add(2); // return 7<br style="user-select: auto;">
kthLargest.add(10); // return 7<br style="user-select: auto;">
kthLargest.add(9); // return 7<br style="user-select: auto;">
kthLargest.add(9); // return 8</div>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= nums.length &lt;= 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= k &lt;= nums.length + 1</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">-10<sup style="user-select: auto;">4</sup> &lt;= nums[i] &lt;= 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">-10<sup style="user-select: auto;">4</sup> &lt;= val &lt;= 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;">At most <code style="user-select: auto;">10<sup style="user-select: auto;">4</sup></code> calls will be made to <code style="user-select: auto;">add</code>.</li>
</ul>
</div>