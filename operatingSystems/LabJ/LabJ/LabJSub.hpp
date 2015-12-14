//
//  LabJSub.hpp
//  Lab_J
//
//  Created by Anthony Stanfel  on 11/4/15.
//  Copyright © 2015 Anthony Stanfel . All rights reserved.
//

#ifndef LabJSub_hpp
#define LabJSub_hpp

#include <stdio.h>

#endif /* LabJSub_hpp */

#include "LabJ.h"

class TakenKingPlayer : public People
{
public:
        TakenKingPlayer(string Gamertag = "Junk", int YearsPlayed = 0, string newClass = "Junk");
        string getGamerTag();
        void setGamerTag(string GamerTag);
        int getYearsPlayed();
        void setYearsPlayed(int YearsPlayed);
        void setNewClass(string NewClass);
        string getNewClass();
        
private:
        string newClass;
        string GamerTag;
        int YearsPlayed;
        
};
