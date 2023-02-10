#pragma once
#include <windows.h>

// Offsets found on 10.02.2023 by MoppyBlack (FiveM Unban God)
// My Discord-Tag: Juan.#8888

namespace offset 
{
    //net.dll 
    uintptr_t serverIP = 0x168e0 // GetAddress
    uintptr_t getport = 0x16ca0 // GetPort
    uintptr_t steam_name = 0x14e90 // NetAddress
    uintptr_t ICoreGameInit = 0x40f80; // ICoreGameInit and then Get (void)

    //conhost-v2.dll
    uintptr_t c_print = 0x2faa0 //ConHost::Print
    uintptr_t c_open = 0x2f270 //ConHost::IsConsoleOpen

    //discord.dll
    uintptr_t discordmanager = 0x58100 // discordAppId

    //citizen_resources_core.dll
    uintptr_t resource_name = 0x164c0 // GetName
    uintptr_t resource_path = 0x164f0 // GetPath
    uintptr_t resource_state = 0x16510 // GetState
    uintptr_t resource_manager = 0x164e0 // GetManager ResourceImpl
    uintptr_t resource_manager2 = 0x103a0 // GetManager ResourceEventComponent
    uintptr_t resource_core = 0x225e0 // GetResource ResourceManagerImpl
    uintptr_t resource_core2 = 0x16500 // GetResource ResourceMetaDataComponent
    uintptr_t resource_stop = 0x16b70 // Stop
    uintptr_t resource_start = 0x16aa0 // Start
    uintptr_t bypassAddress = 0x34de0 // LoadMetaData

    //citizen_scripting_lua.dll
    uintptr_t internal_file = 0x18fc0 // RunFileInternal
    uintptr_t file_internal = 0x181b0 // LoadFileInternal
    uintptr_t system_file_internal = 0x18f20 // LoadSystemFileInternal
    uintptr_t natives_build = 0x17a10 // LoadNativesBuild
    uintptr_t LoadFile = 0x194f0 // LoadFile
    uintptr_t DoFile = 0x31470 // DoFile
    uintptr_t Dofilecont = 0x31450 // Dofilecont
    uintptr_t runtime = 0x10800 //LuaScriptRuntime

    //citizen_resources_metadata_lua.dll
    uintptr_t LoadFile = 0x71b60 // LoadFile
    uintptr_t DoFile = 0x71840 // DoFile
}
