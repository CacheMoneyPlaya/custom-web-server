/*
 * ConnectingSocket.hpp
 *
 *  Created on: 21 Oct 2021
 *      Author: cachemoneyplaya
 */

#ifndef NETWORKING_CONNECTINGSOCKET_HPP_
#define NETWORKING_CONNECTINGSOCKET_HPP_


#include <stdio.h>
#include "Socket.hpp"

namespace HDE
{
	class ConnectingSocket: public Socket
	{
		public:
			ConnectingSocket(int domain, int service, int protocol, int port, u_long interface);
			int connect_to_network(int sock, struct sockaddr_in address);
	};
}

#endif /* NETWORKING_CONNECTINGSOCKET_HPP_ */
