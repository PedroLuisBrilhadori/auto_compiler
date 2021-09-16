#include <iostream> 
#include <stdio.h>
#include <cstring>

using namespace std;

char config_comando_compilador[15];

void busca_atualizacoes() {
    // int teste = system("git pull");
    // cout << teste << endl;
}
void criar_path(){
  FILE * arquivo_bat;
    char flag, bat[45];

    cout << "Deseja instalar o progama no caminho padrão? (C:\\Program Files\\Autinho) [Y/n] ";
    fflush(stdin); cin.get(flag);
    
    if(toupper(flag) != 'N'){
        int result;

        arquivo_bat = fopen("C:\\Program Files\\Autinho\\auto.cmd", "w");
        
        if(arquivo_bat == NULL)
            cout << "Erro ao criar arquivo!\n";

        strcpy(bat, "@echo off\nsetlocal\n%~dp0auto.exe\nendlocal");    
        
        result = fputs(bat, arquivo_bat); 
        if(result == EOF){
            cout << "Erro na gravação do arquivo\n";
        }
        fclose(arquivo_bat);
    }
}

bool compilador_config() {
    char flag, flag2;
    bool config_compilador = false;

    do{
        cout << "Primeiro, vamos compilar nosso código fonte! \n";
        cout << "Seu computador possui um compilador instalado? [Y/n] "; 
        fflush(stdin); cin.get(flag);

        if(toupper(flag) != 'N'){
            cout << "Beleza! Conta pra gente, qual é o comando de seu compilador? \nExemplo: g++\n";
            cin >> config_comando_compilador;
            cout << "ok! O comando de seu compilador é: '" << config_comando_compilador << "' certo? [Y/n] ";
            fflush(stdin); cin.get(flag2);
            if(toupper(flag2) != 'N')
                config_compilador = true;
            else{
                cout << "Vamos tentar novamente..."; 
                fflush(stdin); getchar(); cout << "\n";
            }
        } else {
            cout << "Preciso de um compilador!"; 
            fflush(stdin); getchar(); cout << "\n";
            exit(0);
        }
    } while(config_compilador == false);
    
    return config_compilador;
}

int main() {
    system("chcp 65001");
    system("cls");
    char verifica_att = 'y', flag, flag2;
    bool config_compilador;



    cout << "Olá, eu sou o instalador do app bacana que compila as coisas automaticamente \n";
    cout << "Você deseja verificar as atualizações? [Y/n] ";
    fflush(stdin); cin.get(verifica_att);

    if(toupper(verifica_att) != 'N')
        busca_atualizacoes();
    else {
        cout << "\nOk, mas o software pode não funcionar corretamente!\n"; 
        cout << "------------------------------------------\n\n"; 
    }

    if(compilador_config() == true){
        criar_path();
    }

    return 0;
}