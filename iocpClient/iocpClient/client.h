#pragma once

#include <winsock2.h>
#include <WS2tcpip.h>

#pragma comment(lib, "Ws2_32.lib")

#include "typedef.h"

typedef struct _WSASOCK {
	WSAOVERLAPPED	overlapped;
	WSABUF			buff;
	int				recv_len;
	int				send_len;
} WSASOCK;

class CSocket {

public:
	CSocket();
	~CSocket();

	int init_sock();
	int conn_sock(const char* ip, int port);
	int send_data(char* data, int len);
	int disconn_sock();

private:

	SOCKET m_sock;
	sockaddr_in m_sock_addr;
	WSADATA m_wsaData;
};
