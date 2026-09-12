# 05 - Interpretadores

Este diretório aborda a execução de código em tempo real. Diferente dos compiladores (AOT - Ahead of Time), o estudo aqui é focado em como o código é lido e executado dinamicamente, passando pela construção de Máquinas Virtuais e compilação JIT.

## Sumário e Roadmap

### 1. Interpretadores Tree-Walk
- [ ] Avaliação direta a partir da Árvore de Sintaxe Abstrata (AST).
- [ ] Representação de valores e variáveis em tempo de execução.
- [ ] Implementação de controle de fluxo (if, while) visitando nós da árvore.
- [ ] Gerenciamento de ambiente (Environment) para closures e escopos aninhados.

### 2. Máquinas Virtuais (VMs) e Bytecode
- [ ] Design de Bytecode (conjunto de instruções para uma máquina abstrata).
- [ ] Arquiteturas de VM: Stack-based (baseadas em pilha) vs Register-based (baseadas em registradores).
- [ ] O ciclo principal de execução: Fetch, Decode, Execute.
- [ ] Threaded code e otimização do loop de despacho de instruções (Dispatch loop).

### 3. Gerenciamento de Memória (Runtime)
- [ ] Alocação dinâmica de objetos e representação em memória.
- [ ] Garbage Collection (Coleta de Lixo):
  - Algoritmo Mark-and-Sweep.
  - Algoritmo Copying / Semi-space.
  - Coleta Geracional (Generational GC).

### 4. Compilação JIT (Just-In-Time)
- [ ] Diferença entre interpretação pura e JIT.
- [ ] Perfilamento (Profiling) em tempo de execução para identificar "hot spots".
- [ ] Tiered Compilation (ex: interpretar rápido no início, compilar para código de máquina apenas o que é muito executado).

## Referências Úteis
* Livro: Crafting Interpreters (Robert Nystrom) - A melhor referência prática para construir um interpretador tree-walk e depois uma VM baseada em bytecode (em C).
* Artigos e documentações sobre a arquitetura da JVM (Java) e do motor V8 (JavaScript).
