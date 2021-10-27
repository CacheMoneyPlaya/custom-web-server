/*
 * Server.hpp
 *
 *  Created on: 27 Oct 2021
 *      Author: cachemoneyplaya
 */

#ifndef NETWORKING_SERVER_SERVER_HPP_
#define NETWORKING_SERVER_SERVER_HPP_


#include <stdio.h>

#include "../hdelibc-networking.hpp"

namespace HDE
{
	class Server
	{
		private:
			ListeningSocket * socket;
			virtual void accepter() = 0;
			virtual void handler() = 0;
			virtual void responder() = 0;
		public:
			Server(int domain, int service, int protocol, int port, u_long interface, int bklg);
			virtual void launch() = 0;
			ListeningSocket * get_socket();
	};
}

#endif /* NETWORKING_SERVER_SERVER_HPP_ */
