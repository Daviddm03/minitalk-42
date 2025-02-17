# Minitalk-42 🖥
<h3>What is Minitalk ⁉️</h3>
The Minitalk project at 42 is a practical coding challenge that introduces students to inter-process communication (IPC) in Unix-based systems, specifically using signals. The objective is to create a simple messaging system with a client-server architecture where the client program can send a string message to the server program, and the server receives and displays it. This project enhances understanding of low-level system calls, signal handling, and process communication.

<h3>Key points 🔑</h3>

**Signal Handling**
- Understanding how signals work, how to send them, and how to write handlers that properly interpret these signals.

**Bitwise Manipulation**
- Since the message is sent bit by bit, you’ll work with bitwise operations to encode and decode characters.

**Process Communication**
- A deeper look at how processes can communicate with each other, an essential concept in Unix and Linux programming.

**System Calls** 
- Familiarizing yourself with system calls like kill() to send signals and signal() or sigaction() to handle incoming signals in the server.

<h3>Conclusion ✅</h3>
In summary, Minitalk is designed to help students understand the fundamentals of signal-based communication between processes, an essential building block for more complex systems programming tasks. It builds proficiency in working with low-level operations, teaches the basics of client-server models, and provides hands-on experience with signal handling in C.

<h3>How to run</h3>

1 - **Clone**
```bash
$ git clone https://github.com/Daviddm03/minitalk-42.git
```

2 - **Navigate to the directory**
```bash
$ cd minitalk-42
```

3 - **Compile the program**
```bash
$ make
```

4 - **Run server**
```bash
$ ./server
```

5 - **Run client "At this point, you must use the PID that was displayed on the server and send a string."**
```bash
$ ./client <PID> "send a string"
```

