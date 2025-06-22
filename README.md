# C Socket Programming: TCP and UDP Client-Server Communication

This project demonstrates basic client-server communication over both TCP (Transmission Control Protocol) and UDP (User Datagram Protocol) using C socket programming on Linux.
It also includes packet captures and analysis using tcpdump and Wireshark to explore how these two protocols behave in practice.

The goal of this project was to develop a better understanding of how TCP and UDP differ in terms of connection setup, packet delivery, and reliability, by implementing simple client-server programs and analyzing the resulting network traffic.

---

## System Setup

* **Laptop:** Dell Vostro 3400
* **Operating System:** Ubuntu Linux
* **Network:** Loopback interface (`localhost` - 127.0.0.1), used for local testing

---

## Project Files

| File Name         | Description                  |
| ----------------- | ---------------------------- |
| client.c          | TCP client implementation    |
| server.c          | TCP server implementation    |
| client1.c         | UDP client implementation    |
| server1.c         | UDP server implementation    |
| tcpdump\_tcp.pcap | TCP packet capture (tcpdump) |
| tcpdump\_udp.pcap | UDP packet capture (tcpdump) |
| capture.pcap      | Wireshark capture 1          |
| capture1.pcap     | Wireshark capture 2          |
| capture2.pcap     | Wireshark capture 3          |

---

## How to Compile

### Compile TCP Programs

```bash
gcc client.c -o client
gcc server.c -o server
```

### Compile UDP Programs

```bash
gcc client1.c -o client1
gcc server1.c -o server1
```

---

## How to Run

### Running TCP Client and Server

In one terminal window:

```bash
./server
```

In another terminal window:

```bash
./client
```

### Running UDP Client and Server

In one terminal window:

```bash
./server1
```

In another terminal window:

```bash
./client1
```

---

## Packet Capture

During the client-server exchanges, network traffic was captured using two tools:

### 1. tcpdump

Example command:

```bash
sudo tcpdump -i lo -w tcpdump_tcp.pcap
```

* Captured packets on the loopback interface (lo)
* Saved as `.pcap` files

### 2. Wireshark

* Captured packets in real-time
* Saved as `.pcap` files (`capture.pcap`, `capture1.pcap`, `capture2.pcap`)
* Observed key differences between:

  * TCP: connection-oriented, reliable
  * UDP: connectionless, no retransmissions

---

## Key Learnings

* Implemented basic socket programming in C for both TCP and UDP
* Understood the differences between TCP and UDP protocols
* Learned how to capture and analyze network packets using tcpdump and Wireshark
* Observed connection establishment (3-way handshake) in TCP
* Analyzed packet flow, headers, retransmissions, and delivery reliability

---

## Conclusion

This project served as an excellent hands-on introduction to C socket programming and network packet analysis on Linux.
The experience will be valuable for developing more advanced client-server applications and for understanding real-world network behaviors in both TCP/IP and UDP-based systems.

---
