//Trabalho feito por Nádson Nascimento Santos - numero de matrícula: 20231016024
#include <iostream>
using namespace std;

int numalunos = 5;

// Definição da estrutura para armazenar as informações do aluno
struct Aluno {
    char nome[30];
    int matricula;
    int nota;
};

int main() {
    // Vetor para armazenar os dados de 25 alunos
    Aluno alunos[numalunos];

    // Entrada de dados
    cout << "Digite os dados dos alunos:\n";
    for (int i = 0; i < numalunos; ++i) {
        cout << "Aluno " << i + 1 << ":" <<endl;
        cout << "Nome: " << endl;
        cin >> alunos[i].nome;
        cout << "Matricula: " << endl;
        cin >> alunos[i].matricula;
        cout << "Nota: " << endl;
        cin >> alunos[i].nota;
    }

    // Encontrar aluno com maior nota
    int MaiorNota = 0;
    for (int i = 1; i < numalunos; ++i) {
        if (alunos[i].nota > alunos[MaiorNota].nota) {
            MaiorNota = i;
        }
    }

    // Encontrar aluno com segunda maior nota
    int SegMaiorNota = (MaiorNota == 0) ? 1 : 0;
    for (int i = 0; i < numalunos; ++i) {
        if (i != MaiorNota && alunos[i].nota > alunos[SegMaiorNota].nota) {
            SegMaiorNota = i;
        }
    }

    // Encontrar aluno com menor nota
    int MenorNota = 0;
    for (int i = 1; i < numalunos; ++i) {
        if (alunos[i].nota < alunos[MenorNota].nota) {
            MenorNota = i;
        }
    }

    // Encontrar aluno com segunda menor nota
    int SegMenorNota = (MenorNota == 0) ? 1 : 0;
    for (int i = 0; i < numalunos; ++i) {
        if (i != MenorNota && alunos[i].nota < alunos[SegMenorNota].nota) {
            SegMenorNota = i;
        }
    }

    // Saída de dados
    cout << "Os dados dos alunos sao: " << endl;
    cout << "Aluno com maior nota: " << alunos[MaiorNota].nome << ", Matricula: " << alunos[MaiorNota].matricula << ", Nota: " << alunos[MaiorNota].nota << endl;
    cout << "Aluno com segunda maior nota: " << alunos[SegMaiorNota].nome << ", Matricula: " << alunos[SegMaiorNota].matricula << ", Nota: " << alunos[SegMaiorNota].nota << endl;
    cout << "Aluno com menor nota: " << alunos[MenorNota].nome << ", Matricula: " << alunos[MenorNota].matricula << ", Nota: " << alunos[MenorNota].nota << endl;
    cout << "Aluno com segunda menor nota: " << alunos[SegMenorNota].nome << ", Matricula: " << alunos[SegMenorNota].matricula << ", Nota: " << alunos[SegMenorNota].nota << endl;

return 0;
}
