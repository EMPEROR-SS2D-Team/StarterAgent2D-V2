// -*-c++-*-

/*
 *Copyright:

 Copyright (C) Hidehisa AKIYAMA

 This code is free software; you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation; either version 3, or (at your option)
 any later version.

 This code is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with this code; see the file COPYING.  If not, write to
 the Free Software Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.

 *EndCopyright:
 */

/////////////////////////////////////////////////////////////////////

#ifndef TOKYOTEC_BHV_BASIC_OFFENSIVE_KICK_H
#define TOKYOTEC_BHV_BASIC_OFFENSIVE_KICK_H

#include <rcsc/player/soccer_action.h>
#include <rcsc/geom/vector_2d.h>


class Bhv_BasicOffensiveKick
    : public rcsc::SoccerBehavior
{
private:
public:
    
    bool execute(rcsc::PlayerAgent *agent);
    bool shoot(rcsc::PlayerAgent *agent);
    // bool pass_to_forward(rcsc::PlayerAgent *agent, int kick_count);
    bool pass(rcsc::PlayerAgent *agent, int kick_count = 3);
    bool dribble(rcsc::PlayerAgent *agent);
    bool clearball(rcsc::PlayerAgent *agent);
};

class Dribble 
{
    private:

    public:

        bool execute(rcsc::PlayerAgent *agent);

        double DribblePower(rcsc::PlayerAgent *agent,
                                rcsc::Vector2D point ,
                                    int selfreachCycles );
};

class Shoot 
{
    private:
    public:

            bool execute(rcsc::PlayerAgent *agent);

            bool check(rcsc::PlayerAgent *agent,
                        rcsc::Vector2D point );
};

#endif