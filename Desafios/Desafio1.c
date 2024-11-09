#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define BITMIN 0
#define BITMAX 8
unsigned char valorbin(unsigned char num) { // Função para exibir o número em binário.
  for(int i = BITMAX-1; i >= BITMIN; i--){ // Conta do bit mais significativo ao menos significativo.
    ((num>>i)&1)==0 ? putchar('0') : putchar ('1'); /* Desloca o valor total i vezes para direita,
    com i sendo o bit que queremos representar no momento, se este bit que queremos representar
    resultar em 1 na porta AND, significa que ele está ativo, portanto é adicionado o char '1' ao
    valor, caso contrário, significa que ele está desligado, adicionando o char '0' */
  }putchar('\n'); // Coloca uma nova linha no fim do valor.
}
int main(){
    srand(time(NULL));
    unsigned char armarios = 0, pos = 0, mask;
    char controle;
    puts("Digite para escolher: \n 1. Ocupar armário.\n 2. Liberar armário.\n 3. Sair.");
    while(controle!=3){ // Roda o programa enquanto o usuário não entrar com o valor 3.
    scanf("%hhd",&controle);
    switch (controle)
    {
    case 1: // Ocupar
    mask = 1; // Valor de mask a ser utilizado nas operações.
    if(armarios==255){ // Se todos os armários estiverem ocupados, a variavel terá o valor de 255. (8 bits)
        puts("Todos os armários estão ocupados");
    }else{
        puts("Escolhendo um armário aleatório para ocupar.");
        while(armarios==(armarios|(mask<<pos))){
            pos = BITMIN + rand() % BITMAX;
        /* Enquanto não houver mudança no valor em 'Armarios' mesmo após o deslocamento de bits, o 
        código irá gerar um novo valor aleatório entre 0 e 7, até que consiga ocupar um armário livre*/
        }
        armarios = armarios|(mask<<pos); // Deslocamento de bits.
        printf("Armário ocupado: %d\n",pos);}
    valorbin(armarios);
    puts("Próxima operação:");
    break;
    case 2: // Desocupar
    mask = 1; // Valor de mask a ser utilizado nas operações.
    puts("Digite qual posição liberar: ");
    scanf("%hhd",&pos);
    while((pos<0)|(pos>7)){ // Não há armário abaixo de 0 nem acima de 7.
        puts("Posição inválida. Digite outra.");
        scanf("%hhd",&pos); // Recebe outra posição.
    }mask=mask<<pos; // Desloca o bit que queremos remover.
    if(armarios==(armarios&~mask)){
        puts("O armário já está livre.");
    }else{
        armarios = armarios&~mask; /* Inverte o bit deslocado para que ao usar a porta AND, apenas
        ele seja 0, fazendo o armário ser desocupado. */}
    valorbin(armarios);
    puts("Próxima operação:");
    break;
    case 3: // Sair.
    puts("Programa encerrado.");
    break;
    default: // Quando o valor não é 1, 2 ou 3.
    puts("Operação inválida.");
    break;}
    }
    return 0;
}
