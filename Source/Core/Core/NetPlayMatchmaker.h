#pragma once

#include "NetPlayServer.h"

class NetPlayMatchmaker 
{
public:
	NetPlayMatchmaker(const std::string & server, u16 port, const std::string& game);
	~NetPlayMatchmaker();

	void search(std::string code);
private:
	std::string m_server;
	const u16 m_port;
	const std::string m_game;
};

