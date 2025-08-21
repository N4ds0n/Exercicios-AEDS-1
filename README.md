# Exercícios da Disciplina de Análise e Desenvolvimento de Sistemas I

> Repositório com exercícios feitos anteriormente na disciplina de Análise e Desenvolvimento de Sistemas I. Esses projetos foram realizados durante a faculdade e estão sendo versionados para fins de organização e histórico acadêmico.

## 📖 Sobre o Repositório

Este repositório serve como um arquivo pessoal dos trabalhos práticos desenvolvidos durante a matéria de Análise e Desenvolvimento de Sistemas __. O foco principal dos exercícios é a aplicação de **lógica de programação** utilizando a linguagem **C++**, cobrindo desde conceitos fundamentais até a criação de algoritmos mais elaborados para a resolução de problemas.

## ✨ Projetos em Destaque

Dentre os diversos exercícios, dois projetos se destacam pela complexidade e pelos conceitos aplicados:

---

### 1. Travessia em Campo Minado

Este projeto é uma simulação lógica que gera um "campo minado" aleatório em um tabuleiro 6x6 e, em seguida, analisa e informa todos os caminhos seguros para atravessá-lo.

**Funcionalidades:**
* Gera um tabuleiro 6x6 com "minas" (obstáculos) posicionadas aleatoriamente.
* Verifica a existência de caminhos livres de minas em todas as **linhas** e **colunas**.
* Analisa a travessia segura na **diagonal principal** e na **diagonal secundária**.
* Permite ao usuário gerar um novo tabuleiro e rodar a análise novamente.

**Conceitos de C++ e Lógica Aplicados:**
* Manipulação de arrays bidimensionais (matrizes).
* Geração de números aleatórios (`srand`, `rand`).
* Uso intensivo de laços de repetição aninhados (`for`).
* Aplicação de lógica booleana e estruturas de controle (`if`, `break`).
* Criação de um loop de jogo com `do-while`.

---

### 2. Gestão de Notas de Alunos

Este foi o trabalho principal da disciplina, focado em manipulação de dados estruturados. O programa cadastra um conjunto de alunos com nome, matrícula и nota, e em seguida, realiza uma análise para classificar os alunos com as melhores e piores performances.

**Funcionalidades:**
* Armazena os dados de múltiplos alunos utilizando `structs`.
* Identifica e exibe o aluno com a **maior nota**.
* Identifica e exibe o aluno com a **segunda maior nota**.
* Identifica e exibe o aluno com a **menor nota**.
* Identifica e exibe o aluno com a **segunda menor nota**.

**Conceitos de C++ e Lógica Aplicados:**
* Uso de **`structs`** para agrupar diferentes tipos de dados.
* Criação e manipulação de arrays de `structs`.
* Algoritmos de busca para encontrar valores máximos e mínimos em um conjunto de dados.
* Lógica para identificar o segundo maior/menor elemento, tratando casos especiais.
* Entrada e saída de dados formatados com `iostream`.
g++ nome_do_arquivo.cpp -o executavel
