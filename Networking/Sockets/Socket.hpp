/*
 * Socket.hpp
 *
 *  Created on: 21 Oct 2021
 *      Author: cachemoneyplaya
 */

#ifndef NETWORKING_SOCKET_HPP_
#define NETWORKING_SOCKET_HPP_

#include <stdio.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <iostream>


namespace HDE
{
	class Socket
	{
		private:
			int sock;
			int connection;

		public:
			struct sockaddr_in address;
			Socket(int domain, int service, int protocol, int port, u_long interface);
			virtual int connect_to_network(int sock, struct sockaddr_in address) = 0;
			void test_connection(int);
			struct sockaddr_in get_address();
			int get_sock();
			int get_connection();
			void set_connection(int conn);
	};
}


#endif /* NETWORKING_SOCKET_HPP_ */
