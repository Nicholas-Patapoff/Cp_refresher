#include <iostream>
#include <iomanip>
#include <limits>
int main()
{

    int tool = 2;
    int *tool_ref{&tool};

    std::cout << "Reference: " << &tool << " value: " << *tool_ref << std::endl;
}
