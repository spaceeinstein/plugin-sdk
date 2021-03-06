/*
Plugin-SDK (Grand Theft Auto) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "plbase/PluginBase_VC.h"
#include "CBaseModelInfo.h"
#include "eWeaponType.h"

#pragma pack(push, 4)
class CWeaponModelInfo : public CBaseModelInfo {
public:
    char gap28[28]; 
    int dword44; 
    
    //vtable
    void SetAtomic(int arg0, RpAtomic* atomic);

    //funcs
    int GetWeaponInfo();
    void Init();
    int SetWeaponInfo(int arg0);
};
#pragma pack(pop)

VALIDATE_SIZE(CWeaponModelInfo, 0x48);