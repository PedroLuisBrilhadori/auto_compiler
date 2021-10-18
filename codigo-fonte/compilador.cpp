#include <iostream>
#include <cstring>
#include <string>

#define VERMELHO     "\x1b[31m"
#define VERDE   "\x1b[32m"
#define AZUL    "\x1b[34m"
#define RESET   "\x1b[0m"

using namespace std;

void compile(int argc, string caminho, string compilador = "g++ ") {
    if(argc == 2 || argc == 3){
        int result;

        string comando_string(compilador); 
        char comando_char[70];
        comando_string += caminho + " -o run";
        strcpy(comando_char, comando_string.c_str()); // transforma o tipo string_basic em char * [] (tipo exigido pelo system())
        result = system(comando_char);
        if( result == 0){
            cout << VERDE << "√ " << RESET << "Compilado com sucesso!\n";
            system("./run");
        } else {
            cout << VERMELHO << "ERROR: " << RESET << "Falha na Compilação\n";
        }
    }
}

int main(int argc, char * argv[]) {
    char flag;
    if(argc == 2 || argc == 3){
        while(true){
            cout << "\n\n-------------------------------------------\n";
            cout << "Compilando...\nPara sair presione Ctrl + C a qualquer momento\n";
            cout << "-------------------------------------------\n\n";
            if(argc == 3) 
                compile(argc, string(argv[1]), string(argv[2]));
            else
                compile(argc, string(argv[1]));
            cout << "Autinho: Deseja continuar? [Y/n] ";
            fflush(stdin);
            cin.get(flag);
            if(toupper(flag) == 'N')
                break;
        }
    } else 
        cout << "Por favor, insira o caminho de seu codigo\n";

    return 0;
}