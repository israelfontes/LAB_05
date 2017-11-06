# Laboratório 5
## Uso da da Standard Template Library (STL)
### Autor
* Israel Medeiros Fontes
* israel_fontes@live.com
* Matricula: 2016037140

# Questão 1
## Descrição:
Implementação de uma função template closest2mean que recebe como parâmetro um intervalo
especificado por dois iteradores da categoria InputIterator e retorna um iterador para o
elemento nesse intervalo cujo valor é o mais próximo da média do intervalo.

# Questão 2
## Descrição:
Implementação de uma função template print_elements que recebe como parâmetros um container
qualquer seguido de um label e um separador a serem usados na impressão de todos os elementos
do container.

# Questão 3
## Descrição:
Implementação de um programa que, dado um container de inteiros, encontra
o primeiro número primo do conjunto. Utilizando esta função, imprime todos os valores primos no
container. Em outras palavras, o programa deve lê um valor N fornecido como entrada via linha
de comando e imprime todos os valores primos de 1 a N.

# Compilando:
## Make:
Para compilar use o make:
$ make

## Documentação:
Para gerar documentação use:
$ make doxy

# Questão 4
## Resposta:
O código dado cria dois vectors vazios, depois preenche um dos vectors com 9 elementos de forma 
crescente do 1 ao 9. Depois é utilizado a função transform() da STL para para percorrer todos os
elementos do vector preenchido, aplicando a função square() que recebe o valor inteiro e retorna o
quadrado dele, passando esse resultado para o outro vector antes vazio. Ao final é impresso o vector 
que recebeu a transformação.