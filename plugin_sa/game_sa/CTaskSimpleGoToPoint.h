/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskSimpleGoTo.h"

class PLUGIN_API CTaskSimpleGoToPoint : public CTaskSimpleGoTo {
protected:
    CTaskSimpleGoToPoint(plugin::dummy_func_t a) : CTaskSimpleGoTo(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskSimpleGoToPoint, 0x);