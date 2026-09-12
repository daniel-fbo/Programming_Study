# 08 - Bancos de Dados

Estudo dos princípios de armazenamento, modelagem, recuperação e gerenciamento de dados em sistemas relacionais e não relacionais.

## Sumário e Roadmap

### 1. Modelagem e Projeto Relacional
- [ ] Modelo Entidade-Relacionamento (MER) e Diagramas (DER).
- [ ] Normalização: 1FN, 2FN, 3FN e Forma Normal de Boyce-Codd (BCNF).
- [ ] Chaves primárias, estrangeiras, índices e restrições de integridade.

### 2. SQL Avançado e Otimização
- [ ] Joins (Inner, Left, Right, Full, Cross) e Subconsultas correlacionadas.
- [ ] Agrupamentos, funções de janela (Window Functions: ROW_NUMBER, RANK, SUM over).
- [ ] Planos de Execução (Query Execution Plans) e o papel do otimizador.
- [ ] Estruturas de indexação: B-Trees, B+ Trees e Hash Indexes.

### 3. Transações e Concorrência (ACID)
- [ ] Propriedades ACID: Atomicidade, Consistência, Isolamento e Durabilidade.
- [ ] Níveis de Isolamento (ANSI SQL): Read Uncommitted, Read Committed, Repeatable Read, Serializable.
- [ ] Anomalias de concorrência: Dirty Read, Non-repeatable Read, Phantom Read, Write Skew.
- [ ] Controle de concorrência baseado em bloqueios (Locks) e MVCC (Multi-Version Concurrency Control).

### 4. Bancos de Dados Não Relacionais (NoSQL)
- [ ] Teorema CAP (Consistência, Disponibilidade e Tolerância a Particionamento).
- [ ] Modelos de dados NoSQL:
  - Chave-Valor (Redis)
  - Documentos (MongoDB)
  - Colunares (Cassandra)
  - Grafos (Neo4j)
- [ ] Eventual Consistency vs. Strong Consistency.

## Referências Úteis
* Livro: Database System Concepts (Silberschatz, Korth & Sudarshan).
* Livro: Designing Data-Intensive Applications (Martin Kleppmann).
