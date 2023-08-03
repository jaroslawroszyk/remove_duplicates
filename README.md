## Algorithm Description: Removing Adjacent Duplicates

This C++ algorithm is designed to remove adjacent duplicates from a sorted sequence, preserving the original order of elements. For instance, given a sorted sequence {1, 1, 2, 2, 3, 3, 4, 5, 6, 7}, applying this algorithm would result in {1, 2, 3, 4, 5, 6, 7}.

### How It Works

The algorithm operates on two iterators: `first` (the beginning of the sequence) and `result` (the current position for inserting unique elements). It iterates through the sequence, comparing the current element with the previous one. If the elements are different, the algorithm inserts the current element at the `result` position and advances `result` by one step. This way, the algorithm removes adjacent duplicates, retaining only the first occurrence of each element.

### Usage Example

```cpp
std::vector<int> numbers = {1, 1, 2, 2, 3, 3, 4, 5, 6, 7};

auto newLast = std::my_stl::remove_duplicates(numbers.begin(), numbers.end());

numbers.erase(newLast, numbers.end());

for (const auto& num : numbers) {
    std::cout << num << " ";
}
```

### Note of Caution

This algorithm's implementation has a time complexity of O(n), which may not be efficient for large sequences. If performance is critical, consider employing a more optimized solution.

### License

This code is provided under the [MIT License](LICENSE).

---