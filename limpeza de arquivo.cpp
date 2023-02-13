#include <iostream>
#include"limpeza.hpp"
#include <windows.h> 

int main() {

    // esconder prompt de comando
    ShowWindow(GetConsoleWindow(), SW_HIDE);
    limpeza();

    return 0;
}
