# Complexity Analysis

## Max Heap

**Insertion**
- Best case: O(1)
- Worst case: O(log n) (because the inserted element may move from a leaf to the root)

**Find maximum**
- O(1) (because maximum is at the root)

**Space**
- O(n) (because the heap stores n elements)

## Linear Search

**Find maximum**
- Best case: O(n)
- Worst case: O(n) (Even if the maximum happens to be the first element, the algorithm still has to inspect the remaining elements to know that no larger element exists)

**Space**
- O(1) additional space if the existing array is used

## Conclusion

For the given application, a Max Heap is suitable for continuously maintaining the highest student score. The maximum element is always available at the root and can be obtained in O(1) time. A new score can be inserted in O(log n) time while maintaining the heap property. 

Linear Search can find the maximum in O(n) time, so the amount of work increases linearly as the number of students increases. 

Therefore, for a system where scores are continuously inserted and the highest score must be accessed frequently, maintaining the scores as a Max Heap provides the required efficient maximum retrieval.
