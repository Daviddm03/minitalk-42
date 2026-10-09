# minitalk

A small client-server communication program written in C using UNIX signals.

The project was developed as part of the 42 curriculum to explore inter-process communication without using sockets, pipes, or shared files.

## How It Works

The project contains two programs:

- `server` — receives and reconstructs messages
- `client` — converts a message into bits and sends them to the server

Communication happens using only:

```text
SIGUSR1
SIGUSR2
```

Each character is sent bit by bit. The server reconstructs the characters from the received signals and prints the completed message.

## Getting Started

### Requirements

- GCC or Clang
- Make
- A Unix-like environment

Clone the repository:

```bash
git clone git@github.com:Daviddm03/minitalk-42.git
cd minitalk-42/minitalk
```

Compile:

```bash
make
```

This creates:

```text
server
client
```

## Usage

Start the server:

```bash
./server
```

The server prints its process ID:

```text
PID -> 12345
```

Open another terminal and send a message using that PID:

```bash
./client 12345 "Hello from minitalk"
```

The message is reconstructed and printed by the server.

Clean or rebuild the project with:

```bash
make clean
make fclean
make re
```

## What I Learned

minitalk introduced me to UNIX signals and inter-process communication.

The most interesting part was representing characters as individual bits, transmitting those bits using signals, and reconstructing the original message on another process.

It also helped me understand process IDs and signal handlers in practice.

## Tech

C · UNIX Signals · Processes · Bitwise Operations · Makefile
