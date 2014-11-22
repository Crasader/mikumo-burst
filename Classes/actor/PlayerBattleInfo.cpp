#include "actor/PlayerBattleInfo.h"
#include "core/Constant.h"

USING_NS_CC;

PlayerBattleInfo::PlayerBattleInfo()
: rank(0)
, bp(0)
, burstCount(0)
{
}

PlayerBattleInfo::~PlayerBattleInfo()
{
}

PlayerBattleInfo* PlayerBattleInfo::create()
{
    PlayerBattleInfo *info = new PlayerBattleInfo();
    if (info)
    {
        info->autorelease();
        return info;
    }
    CC_SAFE_DELETE(info);
    return NULL;
}

float PlayerBattleInfo::getBpPercentage()
{
    return bp * 100.f / Constant::MAX_PLAYER_BP;
}

void PlayerBattleInfo::incrementBurstCount()
{
    burstCount++;
}

void PlayerBattleInfo::upBpGauge()
{
    bp += Constant::BP_INCREMENT + floor(rank / 10);
}
