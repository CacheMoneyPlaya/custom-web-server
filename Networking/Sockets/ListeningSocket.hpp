/*
 * ListeningSocket.hpp
 *
 *  Created on: 24 Oct 2021
 *      Author: cachemoneyplaya
 */

#ifndef NETWORKING_LISTENINGSOCKET_HPP_
#define NETWORKING_LISTENINGSOCKET_HPP_

#include <stdio.h>
#include "BindingSocket.hpp"


namespace HDE
{
	class ListeningSocket: public BindingSocket
	{
		private:
			int backlog;
			int listening;
		public:
			ListeningSocket(int domain, int service, int protocol, int port, u_long interface, int bcklog);
			void start_listening();

	};
}



#endif /* NETWORKING_LISTENINGSOCKET_HPP_ */
