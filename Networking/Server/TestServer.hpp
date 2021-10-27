/*
 * TestServer.hpp
 *
 *  Created on: 27 Oct 2021
 *      Author: cachemoneyplaya
 */

#ifndef NETWORKING_SERVER_TESTSERVER_HPP_
#define NETWORKING_SERVER_TESTSERVER_HPP_

#include "Server.hpp"

namespace HDE
{
	class TestServer: public Server
	{
		private:
			void accepter();
			void handler();
			void responder();
			char buffer[30000] = {0};
			int new_socket;
		public:
			TestServer();
			void launch();
	};
}

#endif /* NETWORKING_SERVER_TESTSERVER_HPP_ */
