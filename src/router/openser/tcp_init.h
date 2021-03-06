/*
 * $Id: tcp_init.h,v 1.2 2005/07/29 18:19:45 bogdan_iancu Exp $
 *
 * Copyright (C) 2001-2003 FhG Fokus
 *
 * This file is part of openser, a free SIP server.
 *
 * openser is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version
 *
 * openser is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License 
 * along with this program; if not, write to the Free Software 
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef tcp_init_h
#define tcp_init_h
#include "ip_addr.h"

int init_tcp();
void destroy_tcp();
int tcp_init(struct socket_info* sock_info);
int tcp_init_children(int *chd_rank);
void tcp_main_loop();
void tcp_receive_loop(int unix_sock);


#endif
