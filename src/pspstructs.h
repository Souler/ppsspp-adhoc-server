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

#ifndef _PSPSTRUCTS_H_
#define _PSPSTRUCTS_H_

// Ethernet Address (MAC)
#define ETHER_ADDR_LEN 6
typedef struct SceNetEtherAddr {
	uint8_t data[ETHER_ADDR_LEN];
} SceNetEtherAddr;

// Adhoc Virtual Network Name (1234ABCD)
#define ADHOCCTL_GROUPNAME_LEN 8
typedef struct SceNetAdhocctlGroupName {
	uint8_t data[ADHOCCTL_GROUPNAME_LEN];
} SceNetAdhocctlGroupName;

// Player Nickname
#define ADHOCCTL_NICKNAME_LEN 128
typedef struct SceNetAdhocctlNickname {
	uint8_t data[ADHOCCTL_NICKNAME_LEN];
} SceNetAdhocctlNickname;

#endif
