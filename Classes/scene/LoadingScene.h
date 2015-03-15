#ifndef __LOADING_SCENE_H__
#define __LOADING_SCENE_H__

#include "cocos2d.h"
#include "extensions/cocos-ext.h"
#include "cocosbuilder/CocosBuilder.h"
#include "resources/AppsInformation.h"

USING_NS_CC;
USING_NS_CC_EXT;
using namespace cocosbuilder;

class LoadingScene : public Layer
, public NodeLoaderListener
{
public:
    LoadingScene();
    virtual ~LoadingScene();
    
    virtual bool init();
	virtual void onNodeLoaded(Node* pNode, NodeLoader* pNodeLoader);
    
    CCB_STATIC_NEW_AUTORELEASE_OBJECT_WITH_INIT_METHOD(LoadingScene, create);

    void update(float frame);
    
    AppsInformation* appsInfo;

private:
    void checkAppsUpdate();
    void endLoading();
    bool loadingFlg = false;
};

#endif /* defined(__LOADING_SCENE_H__) */
