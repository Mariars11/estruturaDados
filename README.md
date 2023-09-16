# Estrutura de Dados :open_file_folder:

- Comandos
    > gcc -v 
        Verifica se o c está instalado
    > gcc program.c -o program
        gcc "nome do arquivo" -o "nome desejado de saida"
    > .\program
        Roda o programa

## Arquivos :scroll:

- 3 Arquivos básicos em todos os programas
    - stdin
        - Arquivo de entrada padrão
    - stdout
        - Arquivo de saída padrão
    - stderr
        - Arquivo de erro padrão

## Usar mais de um arquivo

- Exemplo
    - bubbleSort.h - definição das funções
    - bubbleSort.c - implementação das funções
    - main.c - chamada das funções

> gcc main.c bubbleSort.c -o main

## Biblioteca string.h
- strcmp: comparação entre strings
    >  "0": conteúdo das strings são iguais
    > "< 0": conteúdo da string1 é menor do que string2
    > "> 0": conteúdo da string1 é maior do que string2 

- tolower: string em caixa baixa
