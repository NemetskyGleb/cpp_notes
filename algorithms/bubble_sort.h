#ifndef BUBBLE_SORT_H
#define BUBBLE_SORT_H

template <typename T>
void bubble_sort(T& a)
{
    for (size_t i = 0; a.size() && i < a.size() - 1; ++i){
        for (size_t j = i; j + 1 > 0; --j) {
            if (a[j] > a[j + 1]) {
                std::swap(a[j], a[j+1]);
            }
        }
    }
}

#endif


