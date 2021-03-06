#ifndef __mikumoburst__PlayerBattleInfo__
#define __mikumoburst__PlayerBattleInfo__

#include "cocos2d.h"
#include "core/Constant.h"

USING_NS_CC;

class PlayerBattleInfo : public Ref
{
private:
    CC_SYNTHESIZE(int, rank, Rank);
    CC_SYNTHESIZE(int, bp, Bp);
    CC_SYNTHESIZE(int, tapCount, TapCount);
    CC_SYNTHESIZE(int, burstCount, BurstCount);
    CC_SYNTHESIZE(Sprite*, iconImage, IconImage);
    CC_SYNTHESIZE(Sprite*, cutInImage1, CutInImage1);
    CC_SYNTHESIZE(Sprite*, cutInImage2, CutInImage2);
    CC_SYNTHESIZE(Sprite*, cutInImage3, CutInImage3);
    
public:
    PlayerBattleInfo();
    ~PlayerBattleInfo();
    static PlayerBattleInfo* create(Constant::CharaSelect charaSelect);
    float getBpPercentage();
    void incrementTapCount();
    void incrementBurstCount();
    void upBpGauge();
};

#endif /* defined(__mikumoburst__EnemyPlayerBattleInfo__) */
