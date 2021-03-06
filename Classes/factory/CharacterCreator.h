#ifndef __mikumoburst__CharacterCreator__
#define __mikumoburst__CharacterCreator__

#include "cocos2d.h"

USING_NS_CC;

enum CharacterScale {
    DOUBLE = 150,
    NORMAL = 100,
    HARF = 60,
};

class CharacterCreator
{
    
public:
    CharacterCreator();
    virtual ~CharacterCreator();

    void init(CharacterScale scale);
    Sprite* create(const std::string &filename);
    Sprite* create(const std::string &filename, Point position);
    void change(Sprite* sprite, const std::string &filename);

private:
    CharacterScale scale;

};

#endif /* defined(__mikumoburst__CharacterCreator__) */
