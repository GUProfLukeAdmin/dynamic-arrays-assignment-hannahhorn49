#include <vector>
#include <iostream>

void part1()
{
    // TODO: Implement part 1
    //  Demonstrate size vs capacity during resizing. You may use std::vector library.

    // first need to create/declare an empty vector of integers
    std::vector<int> vec1;

    // next we can use the push_back function to loop and push 50,000 elements into the vector
    for (int i = 0; i < 50000; ++i)
    {
        vec1.push_back(i);
    }

    // after we add the elements, want to output the size and capicity of initial vector
    std::cout << "After adding elements: Size = " << vec1.size() << ", Capicity = " << vec1.capacity() << std::endl;

    // next we want to remove half of the elements from original vector by resizing
    vec1.resize(vec1.size() / 2);

    // again display the size and capacity after this resizing operation
    std::cout << "After resizing: Size = " << vec1.size() << ", Capacity = " << vec1.capacity() << std::endl;

    // finally we call shrink to fit on vector to optimize memory usage
    vec1.shrink_to_fit();

    // for the final time we display the size and capacity again
    std::cout << "After shrink_to_fit(): Size =  " << vec1.size() << ", Capacity = " << vec1.capacity() << std::endl;
}

void part2()
{
    // TODO: Implement part 2 (compares memory usage)

    // first create a std::vector<bool> with 10,000 elements
    std::vector<bool> Boolvector(10000);

    // then create a std::vector<char> with 10,000 elements
    std::vector<char> Charvector(10000);

    // calculate memory usage (in bytes) of bool vector
    // we multiply the capacity (tells us the number of elements the vector can hold)
    // by the sizeof (tells us the # of bytes of single bool element)
    // gives us the total amount of of memory allocated for the vector in bytes
    int boolMemoryusage = Boolvector.capacity() * sizeof(bool);

    // calculate memory usage (in bytes) of char vector
    int charMemoryusage = Charvector.capacity() * sizeof(char);

    // want to display the memory usage of each vector
    std::cout << "Memory usage of std::vector<bool>: " << boolMemoryusage << " bytes" << std::endl;
    std::cout << "Memory usage of std::vector<char>: " << charMemoryusage << " bytes" << std::endl;
}

int main()
{
    part1();
    part2();
    return 0;
}