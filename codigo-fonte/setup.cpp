#include <iostream> 

using namespace std;

char config_comando_compilador[15];

void busca_atualizacoes() {
    // int teste = system("git pull");
    // cout << teste << endl;
}

void criar_path(){

}

void instalar_path(){

}

void compilador_config() {
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
                cout << "Preciso de um compilador! Vamos tentar novamente\n"; 
                fflush(stdin); getchar();
            }
        } else {
            cout << "Vamos tentar novamente...\n"; 
            fflush(stdin); getchar();
        }
    } while(config_compilador == false);
    
    
}

int main() {
    system("chcp 65001");
    system("cls");
    char verifica_att = 'y', flag, flag2;



    cout << "Olá, eu sou o instalador do app bacana que compila as coisas automaticamente \n";
    cout << "Você deseja verificar as atualizações? [Y/n] ";
    fflush(stdin); cin.get(verifica_att);

    if(toupper(verifica_att) != 'N')
        busca_atualizacoes();
    else {
        cout << "\nOk, mas o software pode não funcionar corretamente!\n"; 
        cout << "------------------------------------------\n\n"; 
    }

    compilador_config();


    return 0;
}