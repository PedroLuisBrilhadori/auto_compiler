#include <iostream>
#include <cstring>
#include <string>

using namespace std;

void compile(int argc, string caminho) {
    if(argc == 1){
        // monta comando 
        string gpp("g++ ");
        char buffer[70];
        gpp += caminho + " -o run";
        strcpy(buffer, gpp.c_str());
        system(buffer);
        system(".\\run.exe");
    }
}

int main(int argc, char * argv[]) {
    if(argc == 2){
        while(true){
            cout << "\n\n-------------------------------------------\n";
            cout << "Compilando...\nPara sair presione Ctrl + C a qualquer momento\n";
            cout << "-------------------------------------------\n\n";
            compile(1, string(argv[1]));
            system("pause");
        }
    } else 
        cout << "Por favor, insira o caminho de seu codigo\n";

    return 0;
}