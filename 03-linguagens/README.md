# 03 - Linguagens

Este diretório centraliza o estudo detalhado das linguagens de programação, focando em suas particularidades sintáticas, ecossistemas de compilação/interpretação e gerenciamento de memória. 

## Sumário e Roadmap

### 1. C / C++
- [ ] **Ponteiros e Memória:** Aritmética de ponteiros, alocação dinâmica (malloc/free, new/delete) e memory leaks.
- [ ] **C++ Moderno:** Smart pointers (unique_ptr, shared_ptr), RAII (Resource Acquisition Is Initialization) e semântica de movimento (Move Semantics).
- [ ] **STL (Standard Template Library):** Vectors, maps, iterators e algorithms.
- [ ] **Processo de Build:** Preprocessador, compilação, linkagem e Makefiles.

### 2. Java
- [ ] **Ecosistema:** Funcionamento da JVM (Java Virtual Machine), Bytecode e JIT Compiler.
- [ ] **Gerenciamento de Memória:** Garbage Collector (G1, ZGC) e referências.
- [ ] **Recursos da Linguagem:** Generics (Type Erasure), Streams API, Lambdas e Annotations.
- [ ] **Concorrência:** Threads, Runnable, Executors e blocos synchronized.

### 3. Python
- [ ] **Tipagem e Estrutura:** Duck typing, mutabilidade vs imutabilidade de tipos base.
- [ ] **Recursos Avançados:** List/Dict Comprehensions, Generators (yield) e Decorators.
- [ ] **Arquitetura:** O problema do GIL (Global Interpreter Lock) e módulos nativos vs C-extensions.
- [ ] **Paradigma:** Suporte multiparadigma (POO com dunder methods, traços funcionais).

### 4. JavaScript (JS)
- [ ] **Motor de Execução:** Call Stack, Event Loop, Web APIs e Task/Microtask Queues.
- [ ] **Escopo e Contexto:** Hoisting, Closures e o comportamento do `this`.
- [ ] **Orientação a Objetos:** Prototype Chain (Herança baseada em protótipos).
- [ ] **Assincronismo:** Callbacks, Promises e Async/Await.

### 5. TypeScript (TS)
- [ ] **Sistema de Tipos:** Tipagem estática estrutural, interfaces vs type aliases.
- [ ] **Generics Avançados:** Utility Types (Partial, Pick, Omit, Record) e Conditional Types.
- [ ] **Integração:** Configuração do `tsconfig.json` e transpilação para JS.

### 6. Rust
- [ ] **Gerenciamento de Memória:** Ownership, Borrowing e Lifetimes (sem Garbage Collector).
- [ ] **Segurança:** Safe vs Unsafe Rust, tratamento de erros com `Result` e `Option` (Pattern Matching).
- [ ] **Estruturação:** Structs, Traits (como interfaces) e impl blocks.
- [ ] **Ferramental:** Cargo (Package manager e build system) e zero-cost abstractions.

### 7. Kotlin
- [ ] **Segurança de Nulos:** Null-safety (tipos nullable e operadores `?.` / `?:`).
- [ ] **Concorrência:** Coroutines (suspend functions, dispatchers, escopos).
- [ ] **Recursos de Produtividade:** Extension functions, Data classes e Scope functions (let, run, with, apply, also).
- [ ] **Interoperabilidade:** Como o código Kotlin compila e interage perfeitamente com código Java legado.

## Referências Úteis
* Documentações oficiais de cada linguagem (MDN para JS, Rust Book, cppreference.com).
* Compiler Explorer (Godbolt) - Para comparar como diferentes linguagens compiladas geram assembly.
