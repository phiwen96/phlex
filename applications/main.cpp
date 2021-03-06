#include <iostream>
#include <phlex/phlex.hpp>
#include <ph_file/file.hpp>
#include <ph_concepts/concepts.hpp>
using std::cout, std::endl;


enum struct APPLICATION_MODE : int
{
    CONSOLE = 1,
    FILE = 2,
    UNKNOWN
};



auto start_console (auto conf) -> int
{
    
    while (false)
    {
        cout << ">>";
        
    }
    return 0;
}


#include <vector>
int main (int argc, char** argv)
{
//    kuken i = {3};

#ifdef DEBUG
    
#ifndef TEST_DIR
    throw;
#endif
    
    cout << "testing dir=" << TEST_DIR << endl;
    
    cout << "debug" << endl;
    
#endif
    
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

//#include <ostream>

struct A
{
    auto operator << (std::basic_ostream<char>& o) const noexcept -> std::basic_ostream<char>&
    {
        return o;
    }
};



