
#include "typedef.h"

CIp::CIp() {
	memset(&m_ipv4, 0x0, sizeof(SIZE_IPV4));
	memset(&m_ipv6, 0x0, sizeof(SIZE_IPV6));
}

CIp::~CIp() {
	/* TODO */
}

int CIp::set_ipv4(char *ip) {

	if (NULL == ip) {
		return -1;
	}

	memcpy(&m_ipv4, ip, SIZE_IPV4);
}

int CIp::set_ipv6(char *ip) {
	
	if (NULL == ip) {
		return -1;
	}

	memcpy(&m_ipv6, ip, SIZE_IPV6);
}