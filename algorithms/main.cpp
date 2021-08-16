#include <iostream>
#include <vector>
#include <ctime>
#include <algorithm>
#include "bubble_sort.h"

int ARRAY_SIZE = 10;
uint MAX_RANGE = 100;

void Print(int x) {
    std::cout << x << " ";
}

int main() {
    srand(time(0));
    std::vector<int> v;
    // for (size_t i = 0; i < ARRAY_SIZE; i++) {
    //     v.push_back(rand() % MAX_RANGE);
    // }
    v.push_back(5);
    v.push_back(1);
    v.push_back(4);
    v.push_back(2);
    v.push_back(8);




    std::cout << "Init array before sorting: ";
    std::for_each(v.begin(), v.end(), Print);
    std::cout << std::endl;
    // Here's your sorting algorithm
    bubble_sort(v);
    std::cout << "After sorting: ";
    std::for_each(v.begin(), v.end(), Print);
    std::cout << std::endl;
    return 0;
}