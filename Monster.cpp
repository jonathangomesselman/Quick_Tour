//
// Created by Jonathan Gomes Selman on 7/3/17.
//

#include "Monster.h"

Monster::Monster(int size, const std::string &name) : size(size), name(name) {}

int Monster::getSize() const {
    return size;
}

void Monster::setSize(int size) {
    Monster::size = size;
}

int Monster::getPower() const {
    return power;
}

void Monster::setPower(int power) {
    Monster::power = power;
}

const std::string &Monster::getName() const {
    return name;
}

void Monster::setName(const std::string &name) {
    Monster::name = name;
}
