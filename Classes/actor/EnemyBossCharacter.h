#ifndef __10sec_BURST__EnemyBossCharacter__
#define __10sec_BURST__EnemyBossCharacter__

#include "cocos2d.h"
#include "actor/EnemyCharacter.h"

USING_NS_CC;

class EnemyBossCharacter : public EnemyCharacter
{
public:
    CC_SYNTHESIZE_READONLY(Constant::ImageEnemy, imageEnemy, ImageEnemy);
    EnemyBossCharacter();
    static EnemyBossCharacter* create();
};

#endif /* defined(__10sec_BURST__EnemyEnemyBossCharacter__) */