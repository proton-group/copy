#ifndef COPY_HPP
#define COPY_HPP
#include <type_traits>
#include <iterator>
#include <stdio.h>

template<typename Iter>
    requires std::is_fundamental<std::iter_value_t<Iter>>::value
void copy(Iter source_begin, Iter source_end, Iter result_begin)
{
    auto resIt = result_begin;
    for(auto it = source_begin; it != source_end; ++it)
    {
        memmove(&(*resIt), &(*it), sizeof(std::iter_value_t<Iter>));
        ++resIt;
    }
}


#endif