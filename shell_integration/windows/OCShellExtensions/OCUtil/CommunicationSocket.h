/**
 * Copyright (c) 2000-2013 Liferay, Inc. All rights reserved.
 *
 * This library is free software; you can redistribute it and/or modify it under
 * the terms of the GNU Lesser General Public License as published by the Free
 * Software Foundation; either version 2.1 of the License, or (at your option)
 * any later version.
 *
 * This library is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License for more
 * details.
 */

#ifndef COMMUNICATIONSOCKET_H
#define COMMUNICATIONSOCKET_H

#pragma once

#pragma warning (disable : 4251)

#include <string>
#include <WinSock2.h>

class __declspec(dllexport) CommunicationSocket
{
public:
	CommunicationSocket(int port);
	~CommunicationSocket();

	bool Connect();
	bool Close();

	bool SendMsg(const wchar_t*);
	bool ReadLine(std::wstring*);

private:	
	int _port;
	SOCKET _clientSocket;
};

#endif