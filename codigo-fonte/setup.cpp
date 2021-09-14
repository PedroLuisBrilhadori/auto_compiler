#include <iostream> 

using namespace std;

void busca_atualizacoes() {
    // int teste = system("git pull");
    // cout << teste << endl;
}


int main() {
    char verifica_att = 'y', flag;
    bool config_compilador;
    char config_comando_compilador[15];


    cout << "Olá, eu sou o instalador do app bacana que compila as coisas automaticamente \n";
    cout << "Você deseja verificar as atualizações? [Y/n] ";
    fflush(stdin); cin.get(verifica_att);

    if(toupper(verifica_att) != 'N')
        busca_atualizacoes();
    else {
        cout << "\nOk, mas o software pode não funcionar corretamente!\n"; 
        cout << "------------------------------------------\n\n"; 
    }

    cout << "Primeiro, vamos compilar nosso código fonte! \n";
    cout << "Seu computador possui um compilador instalado? [Y/n] "; 
    fflush(stdin); cin.get(flag);
    
    if(toupper(flag) != 'N'){
        cout << "Beleza! Conta pra gente, qual é o comando de seu compilador? \nExemplo: g++\n";
        cin >> config_comando_compilador;
    } else {
        cout << "Você deve instalar um compilador, recomendo o MinGW\n";
        exit(0);
    }



    return 0;
}