/*
 * BindingSocket.hpp
 *
 *  Created on: 21 Oct 2021
 *      Author: cachemoneyplaya
 */

#ifndef NETWORKING_BINDINGSOCKET_HPP_
#define NETWORKING_BINDINGSOCKET_HPP_

#include <stdio.h>
#include "Socket.hpp"

namespace HDE
{
	class BindingSocket: public Socket
	{
		public:
			BindingSocket(int domain, int service, int protocol, int port, u_long interface) : Socket(domain, service, protocol, port, interface){};
			int connect_to_network(int sock, struct sockaddr_in address);
	};
}


#endif /* NETWORKING_BINDINGSOCKET_HPP_ */
