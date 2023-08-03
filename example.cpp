
#include "remove_duplicates.hpp"
#include <iostream>
#include <vector>
#include <algorithm>
#include <string_view>

template<typename Container>
auto printContainer(const Container& container, const std::string_view& string_view = {}) -> void
{
    std::cout << string_view;
    for (auto& el : container)
    {
        std::cout << el << " ";
    }
    std::cout << std::endl;
}

auto vectorTestCase() -> void
{
    std::cout << "-----------VECTOR TESTCASE-----------" << std::endl;
    std::vector<int> numbers = { 1, 1, 2, 2, 3, 3, 4, 5, 6, 7,8,8,8,9 };
    printContainer(numbers, "Before: ");

    auto newLast = std::my_stl::remove_duplicates(numbers.begin(), numbers.end());

    numbers.erase(newLast, numbers.end());
    printContainer(numbers, "After: ");

    std::cout << std::endl;
}

auto stringTestCase() -> void
{
    std::cout << "-----------STRING TESTCASE-----------" << std::endl;

    std::string text = "aaabbbcccdddeee";
    std::cout << "Before :" << text << std::endl;
    auto newLast = std::my_stl::remove_duplicates(text.begin(), text.end());

    text.erase(newLast, text.end());

    std::cout << "After: " << text << std::endl;
}

auto main() -> int
{
    vectorTestCase();
    stringTestCase();
}
