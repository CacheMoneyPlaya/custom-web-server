/*
 * BindingSocket.cpp
 *
 *  Created on: 21 Oct 2021
 *      Author: cachemoneyplaya
 */


#include "BindingSocket.hpp"


HDE::BindingSocket::BindingSocket(int domain, int service, int protocol, int port, u_long interface) : Socket(domain, service, protocol, port, interface)
{

	set_connection(connect_to_network(get_sock(), get_address()));
	//Test connection
	test_connection(get_connection());
}

int HDE::BindingSocket::connect_to_network(int sock, struct sockaddr_in)
{
	return bind(sock, (struct sockaddr *)&address, sizeof(address));
}
