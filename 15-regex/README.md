# 15 - Expressões Regulares (Regex)

Estudo de expressões regulares para busca, validação, extração e manipulação de padrões de texto em linguagens de programação e ferramentas de linha de comando.

## Sumário e Roadmap

### 1. Sintaxe e Elementos Básicos
- [ ] Classes de caracteres predefinidas (`\d`, `\w`, `\s`), conjuntos personalizados (`[a-z]`) e negações (`[^0-9]`).
- [ ] Ancoragem e limites de palavra (`^`, `$`, `\b`, `\B`).
- [ ] Quantificadores e comportamentos:
  - Gulosos (Greedy: `*`, `+`, `?`)
  - Preguiçosos (Lazy / Non-greedy: `*?`, `+?`, `??`)
  - Possessivos (`*+`, `++`).

### 2. Agrupamento e Captura Avançada
- [ ] Grupos de captura (`()`) vs. Grupos não-capturantes (`(?:)`).
- [ ] Retrovisores (Backreferences - `\1`, `\2`) para buscar elementos repetidos.
- [ ] Grupos nomeados (Named Capturing Groups - `(?<nome>...)`).

### 3. Lookarounds (Asserções de Posição)
- [ ] Lookahead Positivo (`(?=...)`) e Negativo (`(?!...)`).
- [ ] Lookbehind Positivo (`(?<=...)`) e Negativo (`(?<!...)`).
- [ ] Validações complexas de senha e regras sem alteração do ponteiro de leitura.

### 4. Engines, Performance e Segurança
- [ ] Motores de busca Regex: Autômatos Finitos Determinísticos (DFA) vs. Não-Determinísticos (NFA).
- [ ] Prevenção de Retrocesso Catastrófico (Catastrophic Backtracking).
- [ ] Vulnerabilidades de ReDoS (Regular Expression Denial of Service).

### 5. Regex na Prática
- [ ] Uso nativo em linguagens: C++ (`<regex>`), Python (`re`), JavaScript (`RegExp`).
- [ ] Processamento de texto no terminal: `grep`, `egrep`, `sed`, `awk`, `ripgrep`.

## Referências Úteis
* Ferramenta interativa: Regex101 (regex101.com).
* Livro: Mastering Regular Expressions (Jeffrey E. F. Friedl).
