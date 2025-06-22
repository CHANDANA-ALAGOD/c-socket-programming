# C Socket Programming — TCP anC Socket Programming: TCP and UDP Client-Server Communication

This project demonstrates basic one-way communication between a client and server implemented in C, using both TCP and UDP sockets. The goal was to understand how data is transmitted over the network, how TCP differs from UDP, and how to analyze network traffic using tools like tcpdump and Wireshark.
System Setup

    Laptop: Dell Vostro 3400

    Operating System: Ubuntu Linux

    Network: Loopback (localhost 127.0.0.1) for local testing

Project Files
File	Description
client.c	TCP client implementation
server.c	TCP server implementation
client1.c	UDP client implementation
server1.c	UDP server implementation
tcpdump_tcp.pcap	Packet capture for TCP communication (captured with tcpdump)
tcpdump_udp.pcap	Packet capture for UDP communication (captured with tcpdump)
capture.pcap	Wireshark capture 1
capture1.pcap	Wireshark capture 2
capture2.pcap	Wireshark capture 3
How to Compile and Run
Compile TCP Client and Server

gcc client.c -o client
gcc server.c -o server

Compile UDP Client and Server

gcc client1.c -o client1
gcc server1.c -o server1

Run TCP Client and Server

In one terminal window:

./server

In another terminal window:

./client

Run UDP Client and Server

In one terminal window:

./server1

In another terminal window:

./client1

Packet Capture

During the client-server exchanges, I captured network traffic using two tools:

    tcpdump
    Example command:

    sudo tcpdump -i lo -w tcpdump_tcp.pcap

    Wireshark

        Captured packets and saved as .pcap files for both TCP and UDP runs.

        Observed differences between TCP (connection-oriented, reliable) and UDP (connectionless, no retransmissions).

Key Learnings

    Implemented basic socket programming in C.

    Understood the differences between TCP and UDP protocols.

    Learned how to capture and analyze network packets using tcpdump and Wireshark.

    Gained insights into packet flow, headers, retransmissions, and connection establishment (3-way handshake for TCP).

Conclusion

This project served as an excellent hands-on introduction to socket programming and network packet analysis on Linux. The experience will help in developing more complex client-server applications and understanding real-world network behavior.d UDP Client-Server Communication

This project demonstrates basic client-server communication over both TCP (Transmission Control Protocol) and UDP (User Datagram Protocol) using C socket programming on Linux. It also includes packet captures and analysis using `tcpdump` and Wireshark to explore how these two protocols behave in practice.

The goal of this project was to develop a better understanding of how TCP and UDP differ in terms of connection setup, packet delivery, and reliability, by implementing simple client-server programs and analyzing the resulting network traffic.
