/*
 * This file is part of PRO ONLINE.

 * PRO ONLINE is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.

 * PRO ONLINE is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with PRO ONLINE. If not, see <http://www.gnu.org/licenses/ .
 */

#ifndef _CONFIG_H_
#define _CONFIG_H_

#include <time.h>

// Server Listening Port
#define SERVER_PORT 27312

// Listener Connection Backlog (aka. Max Concurrent Logins)
#define SERVER_LISTEN_BACKLOG 128

// Server User Maximum
#define SERVER_USER_MAXIMUM 1024

// Server User Timeout (in seconds)
#define SERVER_USER_TIMEOUT 15

// Server SQLite3 Database
#define SERVER_DATABASE "database.db"

// Server Status Logfile
#define SERVER_STATUS_XMLOUT "www/status.xml"

// Server Shutdown Message
#define SERVER_SHUTDOWN_MESSAGE "PROMETHEUS HUB IS SHUTTING DOWN!"

#endif
