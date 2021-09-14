#include <iostream>
#include <cstring>
#include <string>

using namespace std;

void compile(int argc, string caminho, string compilador = "g++ ") {
    if(argc == 2 || argc == 3){
        string comando(compilador); 
        char buffer[70];
        comando += caminho + " -o run";
        strcpy(buffer, comando.c_str()); // transforma o tipo string_basic em char * [] (tipo exigido pelo system())
        system(buffer);
        system(".\\run.exe");
    }
}

int main(int argc, char * argv[]) {
    if(argc == 2 || argc == 3){
        while(true){
            cout << "\n\n-------------------------------------------\n";
            cout << "Compilando...\nPara sair presione Ctrl + C a qualquer momento\n";
            cout << "-------------------------------------------\n\n";
            if(argc == 3) 
                compile(argc, string(argv[1]), string(argv[2]));
            else
                compile(argc, string(argv[1]));
            system("pause");
        }
    } else 
        cout << "Por favor, insira o caminho de seu codigo\n";

    return 0;
}