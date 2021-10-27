/*
 * ListeningSocket.cpp
 *
 *  Created on: 24 Oct 2021
 *      Author: cachemoneyplaya
 */


#include "ListeningSocket.hpp"

HDE::ListeningSocket::ListeningSocket(int domain, int service, int protocol, int port, u_long interface, int bcklog): BindingSocket(domain, service, protocol, port, interface)
{
	backlog = bcklog;
	start_listening();
	test_connection(listening);
}

void HDE::ListeningSocket::start_listening()
{
	listening = listen(get_sock(), backlog);
}
