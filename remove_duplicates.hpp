#pragma once

namespace std::my_stl
{
    template <typename ForwardIterator>
    ForwardIterator remove_duplicates(ForwardIterator first, ForwardIterator last)
    {
        if (first == last)
            return last;

        ForwardIterator result = first;
        while (++first != last)
        {
            if (!(*result == *first))
            {
                *(++result) = *first;
            }
        }
        return ++result;
    }
} // namespace std::my_stl

