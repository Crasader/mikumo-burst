#include "TitleSceneLoader.h"

Scene* TitleSceneLoader::createScene()
{
    cocosbuilder::NodeLoaderLibrary* nodeLoaderLibrary = cocosbuilder::NodeLoaderLibrary::newDefaultNodeLoaderLibrary();
    nodeLoaderLibrary->registerNodeLoader("TitleScene", TitleSceneLoader::loader());
    
    cocosbuilder::CCBReader* ccbReader = new cocosbuilder::CCBReader(nodeLoaderLibrary);
    Node* node = ccbReader->readNodeGraphFromFile("TitleScene.ccbi");
    
    Scene* pScene = Scene::create();
    if (node != NULL)
    {
        pScene->addChild(node);
        
        auto director = Director::getInstance();
        auto glview = director->getOpenGLView();
        if(!glview) {
            glview = GLView::create("My Game");
            director->setOpenGLView(glview);
        }
        Size screenSize = glview->getFrameSize();
        
        // エフェクト
        ParticleSystemQuad* particle1 = ParticleSystemQuad::create("particle/title_particle1.plist");
        particle1->setPosition(Vec2(screenSize.width / 2, screenSize.height / 2));
        pScene->addChild(particle1);
        ParticleSystemQuad* particle2 = ParticleSystemQuad::create("particle/title_particle2.plist");
        particle2->setPosition(Vec2(screenSize.width / 2, screenSize.height / 2));
        pScene->addChild(particle2);

//        ParticleSystemQuad* particle1 = ParticleSystemQuad::create("particle/title_particle1.plist");
//        particle1->setPosition(Vec2(screenSize.width / 2, screenSize.height / 2));
//        ParticleSystemQuad* particle2 = ParticleSystemQuad::create("particle/title_particle2.plist");
//        particle2->setPosition(Vec2(screenSize.width / 2, screenSize.height / 2));
//
//        ParticleBatchNode *batch = ParticleBatchNode::createWithTexture(particle1->getTexture());
//        
//        batch->addChild(particle1, 0);
//        batch->addChild(particle2, 0);
//        
//        pScene->addChild(batch);
        
    }
    ccbReader->release();
    
    return pScene;
}