#include <iostream>
#include <string.h>

#include "Direction.hpp"
#include "Notebook.hpp"

using namespace std;

namespace ariel {

    void Notebook::write( int page, int row,  int column, Direction direction, string message) {}
    string Notebook::read(int page, int row,  int column, Direction direction, int length) {
        return "";
    }
    void Notebook::erase(int page, int row,  int column, Direction direction, int length) {}
    void Notebook::show(int page){}
    
} 
