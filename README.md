TCP and UDP Client-Server Communication in C

This project demonstrates how I implemented basic client-server communication using both TCP and UDP sockets in C on Linux.
It also includes packet captures analyzed with tcpdump and Wireshark to explore how these protocols behave in practice.
System Setup

    Laptop: Dell Vostro 3400

    Operating System: Ubuntu Linux

    Network: Loopback interface (localhost - 127.0.0.1) used for local testing

Project Files
File Name	Description
client.c	TCP client implementation
server.c	TCP server implementation
client1.c	UDP client implementation
server1.c	UDP server implementation
tcpdump_tcp.pcap	TCP packet capture (tcpdump)
tcpdump_udp.pcap	UDP packet capture (tcpdump)
capture.pcap	Wireshark capture 1
capture1.pcap	Wireshark capture 2
capture2.pcap	Wireshark capture 3
How to Compile
Compile TCP Programs

gcc client.c -o client
gcc server.c -o server

Compile UDP Programs

gcc client1.c -o client1
gcc server1.c -o server1

How to Run
Running TCP Client and Server

In one terminal window:

./server

In another terminal window:

./client

Running UDP Client and Server

In one terminal window:

./server1

In another terminal window:

./client1

Packet Capture

While running the client-server programs, I captured network traffic to analyze protocol behavior.
Using tcpdump

Example command (TCP):

sudo tcpdump -i lo -w tcpdump_tcp.pcap

Using Wireshark

Captured packet traces saved as .pcap files.
Observed key differences in behavior between TCP (connection-oriented, reliable delivery) and UDP (connectionless, faster, no retransmission).
Key Learnings

    Implemented both TCP and UDP client-server programs in C

    Understood connection setup and teardown (TCP 3-way handshake vs UDP’s stateless behavior)

    Analyzed packet flow and headers using tcpdump and Wireshark

    Observed packet retransmissions, flow control in TCP, and lack thereof in UDP

Conclusion

This project helped me develop a practical understanding of:

    The differences between TCP and UDP protocols

    How socket programming works in C

    How to capture and analyze network traffic on Linux

It lays the groundwork for future projects involving more advanced networking and protocol analysis.
