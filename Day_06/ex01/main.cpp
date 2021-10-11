#include <iostream>

struct Data 
{
};

uintptr_t serialize(Data* ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data*>(raw));
}

int main()
{
    Data *a = new Data;
    uintptr_t raw_data = serialize(a);
    std::cout << a << std::endl;
    std::cout << raw_data << std::endl;
    a = deserialize(raw_data);
    std::cout << a << std::endl;
}