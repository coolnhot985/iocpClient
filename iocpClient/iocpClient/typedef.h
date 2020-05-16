#pragma once

#include <string.h>

#define SIZE_IPV4 16
#define SIZE_IPV6 64

class CIp {
	
public:
	CIp();
	~CIp();

	int set_ipv4(char* ip);
	int set_ipv6(char* ip);

private:
	char m_ipv4[SIZE_IPV4];
	char m_ipv6[SIZE_IPV6];
};
