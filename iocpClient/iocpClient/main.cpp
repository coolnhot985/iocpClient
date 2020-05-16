#include "local.h"

#pragma comment(lib, "Ws2_32.lib")

struct SOCKETINFO
{
	WSAOVERLAPPED overlapped;
	WSABUF dataBuffer;
	int receiveBytes;
	int sendBytes;
};

int main(int argc, char* argv[])
{
	CSocket csock;
	
	if (csock.init_sock() < 0) {
		cout << "init fail";
		return -1;
	}

	if (csock.conn_sock("13.124.115.167", 8000) < 0) {
		cout << "conn fail\n";
		return -1;
	}

	cout << "conn\n";
	while (1) {
		Sleep(1);
	}
}
