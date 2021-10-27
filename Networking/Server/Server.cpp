/*
 * Server.cpp
 *
 *  Created on: 27 Oct 2021
 *      Author: cachemoneyplaya
 */

#include "Server.hpp"


HDE::Server::Server(int domain, int service, int protocol, int port, u_long interface, int bklg)
{
	socket = new ListeningSocket(domain, service, protocol, port, interface, bklg);
}

HDE::ListeningSocket * HDE::Server::get_socket()
{
	return socket;
}
