#include <iostream>
#include "Datacontainer.h"
#include <typeinfo>
int main()
{

    temp_data hello;
    std::vector<int> x{13, 2020};
    int y{6};
    char z = 'F';
    std::string hlo = "hello world";

    hello.add_data<std::vector<int>>("vector", x);
    hello.add_data<int>("int", y);
    hello.add_data<char>("char", z);
    hello.add_data<std::string>("can_be_any_name", hlo);

    // I'm not sure if this works with a custom class but I think it should

    const std::vector<int> *temp = hello.retrieve_data<std::vector<int>>("vector");
    const int *yza = hello.retrieve_data<int>("int");
    const char *zzz = hello.retrieve_data<char>("char");
    const std::string *hlowor = hello.retrieve_data<std::string>("can_be_any_name");
    std::cout << (*temp)[0] << std::endl;
    std::cout << (*temp)[1] << std::endl;
    std::cout << (*yza) << std::endl;
    std::cout << (*zzz) << std::endl;
    std::cout << (*hlowor) << std::endl;
};
