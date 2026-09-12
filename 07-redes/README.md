# 07 - Redes

Estudo dos protocolos, arquiteturas e mecanismos que permitem a comunicação entre sistemas distribuídos. O foco é entender desde a camada física até a aplicação.

## Sumário e Roadmap

### 1. Modelos de Arquitetura
- [ ] Modelo OSI (7 camadas) vs. Modelo TCP/IP (4 camadas).
- [ ] Encapsulamento e desencapsulamento de dados ao longo das camadas.

### 2. Camada de Aplicação
- [ ] DNS (Domain Name System): Resolução de nomes, registros e hierarquia.
- [ ] HTTP/1.1, HTTP/2 e HTTP/3 (QUIC): Métodos, status codes, cabeçalhos, keep-alive e multiplexação.
- [ ] Email protocols: SMTP, IMAP, POP3.
- [ ] Transferência de arquivos e diretórios: FTP, SSH/SFTP.

### 3. Camada de Transporte
- [ ] UDP (User Datagram Protocol): Datagramas, sem conexão, confiabilidade best-effort.
- [ ] TCP (Transmission Control Protocol): Conexão orientada, three-way handshake, controle de fluxo (sliding window) e controle de congestionamento (slow start, congestion avoidance).
- [ ] Portas, Sockets e multiplexação/desmultiplexação de conexões.

### 4. Camada de Rede
- [ ] Endereçamento IP: IPv4 (sub-redes, CIDR, NAT) e IPv6.
- [ ] Protocolos de suporte: ICMP (ping, traceroute), ARP (Address Resolution Protocol).
- [ ] Roteamento: Algoritmos de vetor de distância (Distance Vector) e estado de enlace (Link State), protocolos OSPF e BGP.

### 5. Camada de Enlace e Física
- [ ] Endereçamento MAC (Media Access Control) e frames.
- [ ] Detecção e correção de erros (Paridade, CRC).
- [ ] Tecnologias locais: Ethernet, CSMA/CD, redes sem fio (Wi-Fi / 802.11).

## Referências Úteis
* Livro: Computer Networking: A Top-Down Approach (Kurose & Ross).
* Documentação de referência: RFCs da IETF.
