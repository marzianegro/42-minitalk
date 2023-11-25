# *minitalk*

## Description
This project is a small client-server communication program that involves signal handling. The goal is to create a server and a client that can exchange messages using a minimalistic protocol.

## Features
- **Signal Communication**: Uses signals for communication between the server and client.
- **Binary Transmission**: Transmits binary data as messages.
- **Acknowledgment Mechanism**: Implements a simple acknowledgment mechanism for reliable message delivery.

## Getting Started

### Installation
1. Clone the repository:

    ```bash
    git clone https://github.com/marzianegro/42-minitalk.git
    ```

2. Navigate to the project directory:

    ```bash
    cd 42-minitalk
    ```

3. Compile the server and client:

    ```bash
    make
    ```

### Usage
1. Start the server:

    ```bash
    ./server
    ```

2. In another terminal, start the client with the server's process ID:

    ```bash
    ./client [server_pid] [message]
    ```

### Example
```bash
# Terminal 1 (Start Server)
./server
# Terminal 2 (Start Client)
./client [server_pid] "Hello, minitalk!"
```
