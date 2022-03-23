#include <string>
#include <iostream>
#include <map>
#include "Direction.hpp"

namespace ariel
{
    class Notebook
    {
    private:
        std::map< int, std::map< int, char>> myNotebook;
        int page, row, column;
        

    public:
        void write( int page, int row,  int column, Direction direction, std::string message);
        std::string read(int page, int row,  int column, Direction direction, int length);
        void erase(int page, int row,  int column, Direction direction, int length);
        void show(int page);
    };
}