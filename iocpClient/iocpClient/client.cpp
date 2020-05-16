#include "client.h"

CSocket::CSocket()
{
	m_sock = INVALID_SOCKET;
	memset(&m_sock_addr, 0x0, sizeof(sockaddr_in));

	
}

CSocket::~CSocket()
{
	WSACleanup();
}

int CSocket::init_sock()
{
	WSAStartup(MAKEWORD(2, 2), &m_wsaData);

	m_sock = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
	if (m_sock == INVALID_SOCKET) {
		WSACleanup();
		return -1;
	}
	
	return 1;
}

int CSocket::conn_sock(const char *ip, int port)
{
	int ret;
	ret = inet_pton(AF_INET, ip, &m_sock_addr.sin_addr);
	
	m_sock_addr.sin_port = htons(port);

	//inet_pton(AF_INET6, ip.ipv6, &sock_addr.sin_addr);

	return 1;
}

int CSocket::send_data(char* data, int len)
{
	/* TODO */
	return 1;
}

int CSocket::disconn_sock()
{
	/* TODO */
	return 1;
}