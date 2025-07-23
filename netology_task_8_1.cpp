#include <iostream>

void counting_function() {
    static int count{1};
    std::cout << "Number of times function has been called: " << count << std::endl;
    ++count;
}


int main()
{
    for (int i = 0; i < 15; i++)
    {
        counting_function();
    }
}