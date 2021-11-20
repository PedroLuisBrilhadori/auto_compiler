# Compilador automatico C++

## Por que?
Atualmente estudo  Análise e desenvolvimento de sistemas na FATEC-RP. Com isso, preciso fazer vários exercícios de C++ durante a semana.
Uso Javascript e estou acostumado com as mudanças acontecerem assim que altero meu código. 

E para Alegria de todos, fiz o meu compilador automático!

---------------------------------

## Requisitos

- É necessário um compilador de C++ instalado em seu sistema
    
    Se você não possue. Aqui está um link para baixar o MinGW, ele é a coleção de alguns compiladores (inclue o g++)
        
        https://sourceforge.net/projects/mingw/


-------------------------------

### Instalação Manual

- Primeiro, é necesário clonar esse repositorio.
    
    ```shell
    git clone https://github.com/PedroLuisBrilhadori/auto_compiler.git

    ```
- Depois, compile o arquivo "compilador.cpp".
    ```shell
    g++ ./codigo-fonte/compilador.cpp -o auto.exe
    ```
- Com o aplicativo compilado, já é possivel usa-lo, mas tem como melhorar.

    - crie uma pasta no local que preferir.

        Ex. C:\Program Files\Auto

    - coloque o aplicativo, junto do arquivo "auto.cmd".
    - depois digite em seu Windows Powershell:
    ```shell    
    SETX PATH "(caminho da pasta);%PATH%"
    ```
    Ex.
    ```shell
    SETX PATH "C:\Program Files\Auto;%PATH%"
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
