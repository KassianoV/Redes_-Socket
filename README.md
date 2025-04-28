# Redes_-Socket

Este repositório contém a implementação de exercícios utilizando **sockets** para comunicação em redes de computadores. Os códigos abordam conceitos fundamentais de comunicação cliente-servidor, utilizando a linguagem C.

## Estrutura do Repositório

- **cliente/** — Implementação do cliente socket.
- **servidor/** — Implementação do servidor socket.

Cada pasta contém:
- Arquivos `.c` com o código-fonte de cliente e servidor.
- Orientações básicas para compilação e execução.

---

## Como Executar

### Compilar o Servidor

```bash
cd servidor
gcc -o servidor servidor.c
./servidor
```

### Compilar o Cliente

Abra outro terminal:

```bash
cd cliente
gcc -o cliente cliente.c
./cliente
```

> **Nota:** Certifique-se de que o servidor esteja em execução antes de iniciar o cliente.

---

## Tecnologias Utilizadas

- Linguagem de Programação: **C**
- Comunicação de rede: **Sockets TCP/IP**
- Compilador: **GCC**

## Pré-requisitos

- Sistema operacional baseado em Unix (Linux/Mac) ou Windows com suporte a sockets.
- Compilador GCC instalado.

---

## Como Clonar o Repositório

```bash
git clone https://github.com/KassianoV/Redes_-Socket.git
cd Redes_-Socket
```

## Autor

- Kassiano V.  
[GitHub - KassianoV](https://github.com/KassianoV)
