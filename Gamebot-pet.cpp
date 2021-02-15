#include <iostream>
#include "Processes/Selector.h"

using namespace Processes;

int main()
{
    Selector s = Selector();
    std::cout << "Hello World!\n" << s.ListWindows();
}