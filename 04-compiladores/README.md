# 04 - Compiladores

Estudo da teoria e implementação de compiladores. O foco deste diretório é entender as fases de transformação do código-fonte escrito em alto nível até a geração de código de máquina ou representação intermediária (IR).

## Sumário e Roadmap

### 1. Análise Léxica (Scanning / Lexing)
- [ ] Autômatos Finitos (DFA e NFA) e Expressões Regulares.
- [ ] Tokenização: transformação de texto bruto em fluxo de tokens.
- [ ] Tratamento de erros léxicos.
- [ ] Uso de geradores de lexers (Lex, Flex).

### 2. Análise Sintática (Parsing)
- [ ] Gramáticas Livres de Contexto (CFG) e notação BNF/EBNF.
- [ ] Árvore de Sintaxe Abstrata (AST - Abstract Syntax Tree).
- [ ] Parsers Top-Down: Descida Recursiva, LL(k).
- [ ] Parsers Bottom-Up: Shift-Reduce, LR(0), SLR, LALR.
- [ ] Uso de geradores de parsers (Yacc, Bison).

### 3. Análise Semântica
- [ ] Tabela de Símbolos: estruturas de dados para escopo e visibilidade.
- [ ] Checagem de tipos (Type Checking) e inferência.
- [ ] Validação de regras semânticas (declaração antes do uso, retorno de funções).

### 4. Código Intermediário (IR) e Otimização
- [ ] Representações Intermediárias: Código de Três Endereços, SSA (Static Single Assignment).
- [ ] Otimizações Locais e Globais: Constant folding, Dead-code elimination, Loop unrolling.
- [ ] Grafos de Fluxo de Controle (CFG - Control Flow Graph).

### 5. Geração de Código Alvo
- [ ] Seleção de instruções.
- [ ] Alocação de registradores (coloração de grafos).
- [ ] Geração de código Assembly e binário executável.

### 6. Infraestrutura Moderna
- [ ] Estudo da arquitetura LLVM (Frontends, Middle-end/Otimizador, Backends).

## Referências Úteis
* Livro: Compilers: Principles, Techniques, and Tools (O "Livro do Dragão").
* Livro: Engineering a Compiler (Keith Cooper & Linda Torczon).
* LLVM Language Reference Manual.
