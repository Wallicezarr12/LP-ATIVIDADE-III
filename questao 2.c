#include <stdio.h>

int main() {
    
int numAlunos = 5;
int numNotas = 3;
char nomes[5][50];
int idades[5];
float notas[5][3];
float medias[5];
int i;
int j; 

    for ( i = 0; i < numAlunos; ++i) {
printf("Digite o nome do aluno %d: ", i + 1);
scanf("%s", nomes[i]);

printf("Digite a idade do aluno %d: ", i + 1);
scanf("%d", &idades[i]);

printf("Digite as %d notas do aluno %d (separadas por espaço): ", numNotas, i + 1);
    for (j = 0; j < numNotas; ++j) {
      scanf("%f", &notas[i][j]);
}
}

printf("\nDados dos Alunos:\n");
for (i = 0; i < numAlunos; ++i) {
float somaNotas = 0;

   for ( j = 0; j < numNotas; ++j) {
    somaNotas += notas[i][j];
}
  medias[i] = somaNotas / numNotas;

printf("\nAluno: %s, Idade: %d\n", nomes[i], idades[i]);
printf("Notas:");
   for ( j = 0; j < numNotas; ++j) {
  printf(" %.2f", notas[i][j]);
}

printf("\nMédia: %.2f\n", medias[i]);

  if (medias[i] >= 7.0) {
  printf("Situação: Aprovado\n");
  } 
  else if (medias[i] >= 5.0) {
   printf("Situação: Em recuperação\n");
  } else {
  printf("Situação: Reprovado\n");
  }
    }

    return 0;
}