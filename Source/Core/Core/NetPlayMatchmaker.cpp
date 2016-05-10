#include "NetPlayMatchmaker.h"

#include "SFML/Network.hpp"


NetPlayMatchmaker::NetPlayMatchmaker(const std::string & server, u16 port, const std::string& game) 
	: m_port(port),
	m_server(server),
	m_game(game)
{
}

NetPlayMatchmaker::~NetPlayMatchmaker()
{
}

void NetPlayMatchmaker::search(std::string code)
{
	sf::TcpSocket socket;
	sf::Socket::Status status = socket.connect(m_server, m_port);

	sf::Packet packet;
	packet << code << m_game << 0 << 10 << "127.0.0.1" << "test name";

	socket.send(packet);

}