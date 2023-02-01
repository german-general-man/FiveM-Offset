#pragma once
#include <windows.h>

// Offsets found on 1.02.2023 by MoppyBlack (FiveM Unban God)
// My Discord-Tag: M0ppxBIaCK#2462

namespace offset 
{
    // net.dll 
    uintptr_t serverIP = 0x16630 // GetAddress
    uintptr_t getport = 0x169e0 // GetPort
    uintptr_t steam_name = 0x14d20 // NetAddress
    uintptr_t ICoreGameInit = 0x40880; // ICoreGameInit and then Get (void)

    // conhost-v2.dll
    uintptr_t c_print = 0x2fb40 //ConHost::Print
    uintptr_t c_open = 0x2f310 //ConHost::IsConsoleOpen

    //discord.dll
    uintptr_t discordmanager = 0x58120 // discordAppId

    //citizen_resources_core.dll
    uintptr_t resource_name = 0x16470 // GetName
    uintptr_t resource_path = 0x164a0 // GetPath
    uintptr_t resource_state = 0x164c0// GetState
    uintptr_t resource_manager = 0x16490 // GetManager ResourceImpl
    uintptr_t resource_manager2 = 0x101b0 // GetManager ResourceEventComponent
    uintptr_t resource_core = 0x222e0 // GetResource ResourceManagerImpl
    uintptr_t resource_core2 = 0x164b0 // GetResource ResourceMetaDataComponent
    uintptr_t resource_stop = 0x16b20 // Stop
    uintptr_t resource_start = 0x16a50 // Start
    uintptr_t bypassAddress = 0x34ae0 // LoadMetaData

    //citizen_scripting_lua.dll
    uintptr_t internal_file = 0x19160 // RunFileInternal
    uintptr_t file_internal = 0x18350 // LoadFileInternal
    uintptr_t system_file_internal = 0x19670 // LoadSystemFileInternal
    uintptr_t natives_build = 0x17bb0 // LoadNativesBuild
    uintptr_t LoadFile = 0x19690 // LoadFile
    uintptr_t DoFile = 0x30cc0 // DoFile
    uintptr_t Dofilecont = 0x30ca0 // Dofilecont
    uintptr_t runtime = 0x19690 //LuaScriptRuntime

    //citizen_resources_metadata_lua.dll
    uintptr_t LoadFile = 0x71b60 // LoadFile
    uintptr_t DoFile = 0x71840 // DoFile
}
