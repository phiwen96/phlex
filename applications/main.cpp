#include <iostream>
#include <phlex/phlex.hpp>
#include <ph_file/file.hpp>
using std::cout, std::endl;


enum struct APPLICATION_MODE : int
{
    CONSOLE = 1,
    FILE = 2,
    UNKNOWN
};



auto start_console (auto conf) -> int
{
    
    while (true)
    {
        cout << ">>";
        
    }
    return 0;
}




int main (int argc, char** argv)
{
    auto mode = (APPLICATION_MODE) argc;
    
    switch (mode)
    {
        case APPLICATION_MODE::CONSOLE:
        {
            start_console (2);
            break;
        }
            
        case APPLICATION_MODE::FILE:
        {
            break;
        }
            
        case APPLICATION_MODE::UNKNOWN:
        {
            break;
        }
            
        default:
        {
            break;
        }
    }
    
    
	return 0;
}




