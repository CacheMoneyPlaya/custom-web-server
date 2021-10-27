/*
 * Socket.cpp
 *
 *  Created on: 21 Oct 2021
 *      Author: cachemoneyplaya
 */


#include "Socket.hpp"


//Default constructor
HDE::Socket::Socket(int domain, int service, int protocol, int port, u_long interface)
{
	//	Define address structure
	address.sin_family = domain;
	address.sin_port = htons(port);
	address.sin_addr.s_addr = htonl(interface);

	//	Establish connection
	sock  = socket(domain, service, protocol);


	//Test socket
	test_connection(sock);
}

//Test connection virtual function
void HDE::Socket::test_connection(int item_to_test)
{
	if (item_to_test < 0)
	{
		perror("Filed to connect");
		exit(EXIT_FAILURE);
	}
}

struct sockaddr_in HDE::Socket::get_address()
{
	return address;
}

int HDE::Socket::get_sock()
{
	return sock;
}


int HDE::Socket::get_connection()
{
	return connection;
}

void HDE::Socket::set_connection(int conn)
{
	connection = conn;
}
