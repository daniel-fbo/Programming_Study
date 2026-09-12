# 16 - DevOps e Cloud

Estudo das práticas, ferramentas e conceitos de infraestrutura, automação de deploys, conteinerização e provisionamento de recursos em nuvem.

## Sumário e Roadmap

### 1. Conteinerização
- [ ] Conceitos de isolamento: Namespaces e Cgroups no kernel Linux.
- [ ] Docker: Imagens, contêineres, Dockerfiles e otimização de imagens (Multi-stage builds).
- [ ] Persistência de dados (Volumes e Bind Mounts) e Redes no Docker.
- [ ] Gerenciamento de múltiplos contêineres com Docker Compose.

### 2. Orquestração de Contêineres
- [ ] Arquitetura do Kubernetes (Control Plane vs. Worker Nodes).
- [ ] Objetos básicos: Pods, Deployments, Services (ClusterIP, NodePort, LoadBalancer) e Ingress.
- [ ] Gerenciamento de estado: ConfigMaps, Secrets e PersistentVolumes.
- [ ] Gerenciamento de pacotes com Helm Charts.

### 3. Integração e Entrega Contínua (CI/CD)
- [ ] Construção de pipelines de CI/CD (GitHub Actions, GitLab CI).
- [ ] Automação de testes, linters e compilação em pipelines.
- [ ] Estratégias de Deploy: Blue-Green, Canary, Rolling Updates.

### 4. Infraestrutura como Código (IaC) e Nuvem
- [ ] Provisionamento declarativo de infraestrutura usando Terraform.
- [ ] Conceitos fundamentais de Cloud Providers (AWS/GCP/Azure):
  - Redes e Isolamento (VPC, Subnets, Security Groups).
  - Computação e Armazenamento (Instâncias virtuais, Objetos/S3, Serverless/Functions).
  - Gerenciamento de Identidade e Acesso (IAM).

### 5. Observabilidade e Monitoramento
- [ ] Os três pilares: Logs, Métricas e Tracing.
- [ ] Coleta e agregação de métricas com Prometheus e visualização via Grafana.

## Referências Úteis
* Documentação oficial do Docker e Kubernetes (kubernetes.io/docs).
* Livro: Phoenix Project (Gene Kim) - Para entender a cultura DevOps.
* Terraform Up & Running (Yevgeniy Brikman).
