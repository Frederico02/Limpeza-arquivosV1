#include "limpeza.hpp"
#include <string>


void limpeza() {

    // caminho de arquivos temporarios 
    std::string path = "%TEMP%";

    // Comando de apagar tudo 
    std::string command = "del /Q /F /S \"" + path + "\"";

    // faz a limpeza 
    int result = system(("cmd /c echo " + path + " & " + command).c_str());
}
