### Binary Search
Works on sorted arrays, either ascending or descending. O(n^2) complexity. Check the middle element. If target is smaller check in left half array (for asc sorted) else in right. Repeat in subsequent halves as well.

### Merge Sort
Split array into two parts. Keep going at it until you have individual array elements. Then insert them into the original array bottom up in desired order. O(nlogn) copmplexity for all cases.

### Quick Sort
Choose a pivot element, which can either be
<ul>
  <li>first element</li>
  <li>last element</li>
  <li>random element</li>
</ul>

Here it is done by taking the last element as the pivot element. Set a pointer to just before the very first element of array, and second pointer to the first element. Move the second pointer to all but the last (pivot) elements and wherever an element <strong>smaller</strong> than the pivot element is found, swap the element with the element just after the first pointer. Finally when second pointer reaches the end of array (excluding the last element), swap the element just next to first pointer and the pivot element, thus placing the pivot at its exact location. Then the two subarrays are sorted. <em>Pivot element which is already in the right spot is NOT included when partitioning the two sub-arrays.</em>

Best and average time complexity is O(nlogn), and worst is O(n^2), when the array is already sorted.
