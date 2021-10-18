# Compilador automatico C++

## Por que?
Atualmente estudo  Análise e desenvolvimento de sistemas na FATEC-RP. Com isso, preciso fazer vários exercícios de C++ durante a semana.
Uso Javascript e estou acostumado com as mudanças acontecerem assim que altero meu código. 

E para Alegria de todos, fiz o meu compilador automático!

---------------------------------

## Requisitos

- É necessário um compilador de C++ instalado em seu sistema
    
    Se você não possue. Baixe usando seu instalador de pacotes;
    Exemplo: 
        
        sudo apt install g++


-------------------------------

## Instalador (Setup.exe)

O Instalador está em processo de desenvolvimento, mas ele não é totalmente necessário. 

### Instalação Manual

- Primeiro, é necesário clonar esse repositorio.
    
    ```shell
    git clone https://github.com/PedroLuisBrilhadori/auto_compiler.git

    ```
- Depois, compile o arquivo "compilador.cpp".
    ```shell
    g++ ./codigo-fonte/compilador.cpp -o auto
    ```
- Com o aplicativo compilado, já é possivel usa-lo, mas tem como melhorar.

    - crie uma pasta nos binários do sistema.

            sudo mkdir /usr/bin/auto

    - jogue o arquivo compilado para a pasta 

            sudo mv auto /usr/bin/auto

    - depois digite em seu terminal:

    ```shell    
    export PATH=$PATH:/usr/bin/auto
    ```
    Com esses passos, você instalou o programa no path do sistema, ou seja, pode acessa-lo de qualquer lugar!

    basta digitar "auto" e utilizar o programa ;-) 


--------------------------------

## Como usar

Para usar, basta digitar "auto caminho_arquivo compilador" em seu terminal.

O compilador padrão, é o "g++".

### Exemplo

Primeiro entre na pasta "Programa".

Depois execute o comando:

    auto .\test.cpp 
