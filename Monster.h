//
// Created by Jonathan Gomes Selman on 7/3/17.
//

#ifndef QUICK_TOUR_MONSTER_H
#define QUICK_TOUR_MONSTER_H


#include <string>

class Monster {
public:
    Monster(int size, const std::string &name);

    int getSize() const;

    void setSize(int size);

    int getPower() const;

    void setPower(int power);

    const std::string &getName() const;

    void setName(const std::string &name);

    bool operator==(const Monster &rhs) const {
        return std::tie(size, power, name) == std::tie(rhs.size, rhs.power, rhs.name);
    }

    bool operator!=(const Monster &rhs) const {
        return !(rhs == *this);
    }

private:
    int size;
    int power = 100;
    std::string name;

};


#endif //QUICK_TOUR_MONSTER_H
