
//
//  LabJSub.cpp
//  Lab_J
//
//  Created by Anthony Stanfel  on 11/4/15.
//  Copyright © 2015 Anthony Stanfel . All rights reserved.
//

#include "LabJSub.h"
#include "LabJ.h"

TakenKingPlayer::TakenKingPlayer(string sentGamerTag, int sentYearsPlayed, string sentNewClass){
        GamerTag = sentGamerTag;
        YearsPlayed = sentYearsPlayed;
        newClass = sentNewClass;
}
void TakenKingPlayer:: setGamerTag(string newGamerTag){
        GamerTag = newGamerTag;
}
string TakenKingPlayer:: getGamerTag(){
        return GamerTag;
}
void TakenKingPlayer:: setYearsPlayed(int currentYearsPlayed){
        YearsPlayed = currentYearsPlayed;
}
int TakenKingPlayer::getYearsPlayed(){
        return YearsPlayed;
}
void TakenKingPlayer:: setNewClass (string sentNewClass){
        newClass = sentNewClass;
}
string TakenKingPlayer::getNewClass(){
        return newClass;
}


