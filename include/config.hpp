#pragma once
#include <3ds.h>
#include <string>
#include <vector>
#include <3ds.h>
#include <citro2d.h>

class Config {
    public:
    bool randomTID;
    bool customTitle;
    bool forceInstall;
    bool ignoreBannerChecksum;
    std::vector<std::string> templates;
    unsigned int currentTemplate;
    unsigned long dsiwareCount;
    void draw(bool interactive=false);
    void interact(touchPosition *touch);
    void interactKey(u32 *key);
    Config();

};
