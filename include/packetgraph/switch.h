/* Copyright 2015 Outscale SAS
 *
 * This file is part of Packetgraph.
 *
 * Packetgraph is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 3 as published
 * by the Free Software Foundation.
 *
 * Packetgraph is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Packetgraph.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _PG_SWITCH_H
#define _PG_SWITCH_H

#include <packetgraph/errors.h>

/**
 * Create a new switch brick
 *
 * @param	name name of the brick
 * @param	west_max maximum of links you can connect on the west side
 * @param	east_max maximum of links you can connect on the east side
 * @param	output side where to forward packets first
 * @param	errp is set in case of an error
 * @return	a pointer to a brick structure on success, NULL on error
 */
PG_WARN_UNUSED
struct pg_brick *pg_switch_new(const char *name,
			       uint32_t west_max,
			       uint32_t east_max,
			       enum pg_side output,
			       struct pg_error **errp);

#endif  /* _PG_SWITCH_H */
