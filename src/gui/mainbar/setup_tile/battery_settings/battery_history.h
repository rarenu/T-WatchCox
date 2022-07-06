/****************************************************************************
 *   Tu May 22 21:23:51 2020
 *   Copyright  2020  Dirk Brosswick
 *   Email: dirk.brosswick@googlemail.com
 ****************************************************************************/
 
/*
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */
#ifndef _BATTERY_HISTROY_H
    #define _BATTERY_HISTROY_H

    #define BATTERY_HISTORY_INTERVALL       30
    /**
     * @brief system battery hirtory tile setup
     * 
     * @param tile_num 
     */
    void battery_history_tile_setup( uint32_t tile_num );
    /**
     * @brief start battery logging into a chart
     */
    void battery_history_start_chart_logging( void );

#endif // _BATTERY_HISTROY_H