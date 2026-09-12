# 11 - APIs e Comunicação

Estudo dos padrões, protocolos e tecnologias utilizadas para a integração e troca de dados entre diferentes sistemas, aplicações e microsserviços.

## Sumário e Roadmap

### 1. REST (Representational State Transfer)
- [ ] Modelo de Maturidade de Richardson (Níveis 0 a 3 - HATEOAS).
- [ ] Design de Recursos e boas práticas de nomenclatura (Endpoints).
- [ ] Idempotência e uso semântico dos métodos HTTP (GET, POST, PUT, PATCH, DELETE).
- [ ] Versionamento de APIs, paginação e filtragem.
- [ ] Documentação com OpenAPI / Swagger.

### 2. gRPC e Protocol Buffers
- [ ] Conceitos de RPC (Remote Procedure Call).
- [ ] Serialização binária com Protocol Buffers (Protobuf).
- [ ] Tipos de comunicação: Unary, Server Streaming, Client Streaming e Bidirectional Streaming.
- [ ] Vantagens do gRPC sobre o REST em comunicação entre microsserviços.

### 3. GraphQL
- [ ] Diferenças entre REST e GraphQL (Over-fetching e Under-fetching).
- [ ] Estruturação de Schemas, Types e Resolvers.
- [ ] Queries (Leitura) e Mutations (Escrita).
- [ ] O problema do N+1 e o uso de DataLoaders.

### 4. Comunicação Assíncrona e Real-Time
- [ ] WebSockets: Conexões persistentes e bidirecionais.
- [ ] Server-Sent Events (SSE) e Long Polling.
- [ ] Mensageria e Event-Driven Architecture (introdução conceitual a Message Brokers como RabbitMQ e Apache Kafka).

## Referências Úteis
* API Design Patterns (JJ Geewax).
* Documentações oficiais: gRPC.io, GraphQL.org, OpenAPI Specification.
