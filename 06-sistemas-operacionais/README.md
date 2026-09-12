# 06 - Sistemas Operacionais

Estudo dos conceitos fundamentais que governam a interação entre o software de aplicação e o hardware subjacente. O foco é entender a gerência de recursos, concorrência e o modelo de execução do sistema.

## Sumário e Roadmap

### 1. Processos e Threads
- [ ] Processo vs. Thread: Bloco de Controle de Processo (PCB), espaço de endereçamento e trocas de contexto (Context Switch).
- [ ] Ciclo de vida de um processo e chamadas de sistema (fork, exec, wait).
- [ ] Concorrência e Paralelismo.
- [ ] Condições de Corrida (Race Conditions) e Seção Crítica.
- [ ] Mecanismos de Sincronização: Mutexes, Semáforos, Monitores e Variáveis de Condição.
- [ ] Problemas clássicos de sincronização (Produtor-Consumidor, Jantar dos Filósofos, Leitores-Escritores).
- [ ] Deadlocks: Condições de Coffman, prevenção, detecção e recuperação.

### 2. Gerenciamento de Memória
- [ ] Espaço de endereçamento virtual e MMU (Memory Management Unit).
- [ ] Paginação e Tabelas de Páginas (Page Tables, Translation Lookaside Buffer - TLB).
- [ ] Memória Virtual e Substituição de Páginas (Algoritmos FIFO, LRU, Second-Chance).
- [ ] Swapping, Thrashing e alocação de memória física (First-Fit, Best-Fit).

### 3. Escalonamento de CPU
- [ ] Critérios de escalonamento (Throughput, Latência, Fairness).
- [ ] Algoritmos não-preemptivos e preemptivos (FCFS, SJF, Round Robin, Multilevel Queue).

### 4. Sistema de Arquivos e E/S
- [ ] Estrutura lógica de arquivos, diretórios e montagem.
- [ ] Alocação de espaço em disco (Contígua, Encadeada, Indexada / Inodes).
- [ ] Gerenciamento de E/S, polling vs. interrupções e Direct Memory Access (DMA).

## Referências Úteis
* Livro: Operating System Concepts (Silberschatz, Galvin & Gagne - O "Livro dos Dinossauros").
* Livro: Modern Operating Systems (Andrew S. Tanenbaum).
