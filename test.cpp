#include <iostream>
#include <thread>

void hello()
{
    std::cout << "hello world" << std::endl;
}

int main(void)
{
    std::thread t(hello);
    t.join();
    return 0;
}