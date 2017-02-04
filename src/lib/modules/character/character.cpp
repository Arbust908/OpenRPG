/*
character-generator - character.h
Created on: Jan 30, 2017

License GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>
This is free software: you are free to change and redistribute it.
There is NO WARRANTY, to the extent permitted by law.
*/
#include "utils.h"
#include "die.h"
#include "character.h"

using namespace std;

Character::Character() {
    output("character created", VB_CODE);

    abil.STR = gen_stat();
    abil.DEX = gen_stat();
    abil.CON = gen_stat();
    abil.INT = gen_stat();
    abil.WIS = gen_stat();
    abil.CHA = gen_stat();
}

Character::~Character() {
    // TODO nothing yet
}

int Character::gen_stat() {
    Die d6(6);

    return d6.roll() + d6.roll() + 6;;
}