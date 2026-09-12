# 09 - Seguranca

Estudo das práticas, criptografia e mecanismos de defesa fundamentais para proteger sistemas de software contra vulnerabilidades e ataques.

## Sumário e Roadmap

### 1. Criptografia e Proteção de Dados
- [ ] Criptografia Simétrica (AES, DES) vs. Assimétrica (RSA, Curvas Elípticas - ECC).
- [ ] Funções Hash criptográficas (SHA-256, SHA-3) e uso de Salting para senhas (Argon2, bcrypt).
- [ ] Assinaturas digitais, certificados SSL/TLS e infraestrutura de chave pública (PKI).

### 2. Autenticação e Autorização
- [ ] Mecanismos de sessão baseados em cookies vs. Tokens (JWT - JSON Web Tokens).
- [ ] Protocolos de federação e identidade: OAuth 2.0 e OpenID Connect (OIDC).
- [ ] Controle de Acesso Baseado em Papéis (RBAC) e em Atributos (ABAC).

### 3. Vulnerabilidades e OWASP Top 10
- [ ] Injection (SQLi, Command Injection).
- [ ] Broken Authentication e falhas de gerenciamento de sessão.
- [ ] Cross-Site Scripting (XSS) e Cross-Site Request Forgery (CSRF).
- [ ] Insecure Deserialization e Broken Object Level Authorization (BOLA/IDOR).

### 4. Práticas de Codificação Segura
- [ ] Validação rigorosa de entradas e sanitização de dados.
- [ ] Princípio do menor privilégio (Principle of Least Privilege).
- [ ] Gerenciamento seguro de segredos (evitar hardcoded credentials).
- [ ] Análise estática de código (SAST) e escaneamento de dependências.

## Referências Úteis
* Documentação oficial do projeto OWASP (OWASP Top 10 e Cheat Sheet Series).
* Livro: Security Engineering (Ross Anderson).
