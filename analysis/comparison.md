# Max Heap vs Linear Search

| Operation | Max Heap | Linear Search |
|---|---|---|
| Find maximum | O(1) | O(n) |
| Insert new score | O(log n) | O(1) append |
| Insert + maintain maximum | O(log n) | O(n) if maximum is recomputed by search |
| Effect of increasing students | Maximum access remains O(1) | Search work increases linearly |
| Structure | Complete binary tree | Array/list scan |

For the given input:
- Max Heap maximum = 95
- Max Heap access operations = 1
- Linear Search maximum = 95
- Linear Search comparisons = 7
- Heap insertion comparisons = 12
