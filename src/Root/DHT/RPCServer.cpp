#include <stdio.h>

#include <queue>

#include <p2p/Socket.hpp>

#include <p2p/Event/Source.hpp>
#include <p2p/Event/Wait.hpp>

#include <p2p/Root/Endpoint.hpp>
#include <p2p/Root/Message.hpp>
#include <p2p/Root/NetworkId.hpp>
#include <p2p/Root/NodeId.hpp>
#include <p2p/Root/PrivateIdentity.hpp>
#include <p2p/Root/PublicIdentity.hpp>
#include <p2p/Root/RoutineIdGenerator.hpp>

#include <p2p/Root/DHT/RPCMessage.hpp>
#include <p2p/Root/DHT/RPCServer.hpp>

namespace p2p {

	namespace Root {
	
		namespace DHT {
			
			RPCServer::RPCServer(Socket<NodeId, Message>& socket)
				: socket_(socket) { }
			
			RPCServer::~RPCServer() { }
			
			// TODO
			
		}
		
	}
	
}

