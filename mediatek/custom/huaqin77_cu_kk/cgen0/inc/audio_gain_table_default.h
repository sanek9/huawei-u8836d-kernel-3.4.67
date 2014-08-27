/*******************************************************************************
 *
 * Filename:
 * ---------
 * audio_gain_table_default.h
 *
 * Project:
 * --------
 *   ALPS
 *
 * Description:
 * ------------
 * This file is the header of audio cgain table parameters
 *
 * Author:
 * -------
 * ChiPeng Chang
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by CC/CQ. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * $Revision:$
 * $Modtime:$
 * $Log:$
 * 
 * 08 28 2012 weiguo.li
 * [ALPS00347285] [Need Patch] [Volunteer Patch]LGE AudioGainTable modification
 * .
 * 
 * 08 26 2012 weiguo.li
 * [ALPS00347285] [Need Patch] [Volunteer Patch]LGE AudioGainTable modification
 * .
 * 
 * 07 29 2012 weiguo.li
 * [ALPS00319405] ALPS.JB.BSP.PRA check in CR for Jades
 * .
 *
 *
 *
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by CC/CQ. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef AUDIO_GAIN_TABLE_DEFAULT_H
#define AUDIO_GAIN_TABLE_DEFAULT_H

// Receiver  Gain
// Headset   Gain
// Speaker   Gain
#define DEFAULT_VOICE_GAIN_TABLE_PARA \
    0xFF,0x09000000,      0xC3,0x0A000000,      0xA3,0x0B000000,      0x93,0x07000000,      0x63,0x08000000,\
    0x33,0x09000000,      0x00,0x0A000000,      0x00,0x0B000000,      0x48,0x08000000,      0x50,0x08000000,\
    0x58,0x09000000,      0x60,0x0A000000,      0x68,0x0B000000,      0x70,0x08000000,      0x78,0x08000000,\
    0x80,0x09000000,      0x88,0x0A000000,      0x90,0x0B000000,      0x98,0x08000000,      0xA0,0x08000000,\
    \
    0xFF,0x0A006400,      0xC4,0x0B006400,      0xA4,0x07006400,      0x94,0x08006400,      0x64,0x09006400,\
    0x34,0x0A006400,      0x00,0x0B006400,      0x00,0x07000000,      0x48,0x08000000,      0x50,0x09000000,\
    0x58,0x0A000000,      0x60,0x0B000000,      0x68,0x07000000,      0x70,0x08000000,      0x78,0x09000000,\
    0x80,0x0A000000,      0x88,0x0B000000,      0x90,0x07000000,      0x98,0x08000000,      0xA0,0x09000000,\
    \
    0xFF,0x0B0C0000,      0xC5,0x070C8000,      0xA5,0x080D0000,      0x95,0x090D8000,      0x65,0x0A0E0000,\
    0x35,0x0B0E8000,      0x00,0x070F8000,      0x00,0x08000000,      0x48,0x09000000,      0x50,0x0A000000,\
    0x58,0x0B000000,      0x60,0x07000000,      0x68,0x08000000,      0x70,0x09000000,      0x78,0x0A000000,\
    0x80,0x0B000000,      0x88,0x07000000,      0x90,0x08000000,      0x98,0x09000000,      0xA0,0x0A000000 
// Receiver  Gain
// Headset   Gain
// Speaker   Gain
#define DEFAULT_SYSTEM_GAIN_TABLE_PARA \
    0xF2,0x08000000,      0xC2,0x09000000,      0xA2,0x0A000000,      0x92,0x0B000000,      0x62,0x07000000,\
    0x32,0x08000000,      0x00,0x09000000,      0x00,0x0A000000,      0x48,0x0B000000,      0x50,0x07000000,\
    0x58,0x08000000,      0x60,0x09000000,      0x68,0x0A000000,      0x70,0x0B000000,      0x78,0x07000000,\
    0x80,0x08000000,      0x88,0x09000000,      0x90,0x0A000000,      0x98,0x0B000000,      0xA0,0x07000000,\
    \
    0xFF,0x080FE720,      0xF0,0x090FE720,      0xB0,0x0A0FE720,      0x90,0x0B0FE720,      0x70,0x070FE720,\
    0x50,0x080FE720,      0x30,0x090FE720,      0x00,0x0A0FE720,      0x48,0x0B000000,      0x50,0x07000000,\
    0x58,0x08000000,      0x60,0x09000000,      0x68,0x0A000000,      0x70,0x0B000000,      0x78,0x07000000,\
    0x80,0x08000000,      0x88,0x09000000,      0x90,0x0A000000,      0x98,0x0B000000,      0xA0,0x07000000,\
    \
    0xFF,0x090FE720,      0xF0,0x0A0FE720,      0xB0,0x0B0FE720,      0x90,0x070FE720,      0x70,0x080FE720,\
    0x50,0x090FE720,      0x30,0x0A0FE720,      0x00,0x0B0FE720,      0x48,0x07000000,      0x50,0x08000000,\
    0x58,0x09000000,      0x60,0x0A000000,      0x68,0x0B000000,      0x70,0x07000000,      0x78,0x08000000,\
    0x80,0x09000000,      0x88,0x0A000000,      0x90,0x0B000000,      0x98,0x07000000,      0xA0,0x08000000
// Receiver  Gain
// Headset   Gain
// Speaker   Gain
#define DEFAULT_RINGTONE_GAIN_TABLE_PARA \
    0xF2,0x08000000,      0xC2,0x09000000,      0xA2,0x0A000000,      0x92,0x0B000000,      0x62,0x07000000,\
    0x32,0x08000000,      0x00,0x09000000,      0x00,0x0A000000,      0x48,0x0B000000,      0x50,0x07000000,\
    0x58,0x08000000,      0x60,0x09000000,      0x68,0x0A000000,      0x70,0x0B000000,      0x78,0x07000000,\
    0x80,0x08000000,      0x88,0x09000000,      0x90,0x0A000000,      0x98,0x0B000000,      0xA0,0x07000000,\
    \
    0xFF,0x08005C00,      0xF0,0x09006000,      0xB0,0x0A006400,      0x90,0x0B006800,      0x90,0x090FE720,\
    0x50,0x08407000,      0x30,0x09805C00,      0x00,0x0AC04C00,      0x48,0x08000000,      0x50,0x09000000,\
    0x58,0x0A000000,      0x60,0x0B000000,      0x68,0x07000000,      0x70,0x08000000,      0x78,0x09000000,\
    0x80,0x0A000000,      0x88,0x0B000000,      0x90,0x07000000,      0x98,0x08000000,      0xA0,0x09000000,\
    \
    0xFF,0x090B8000,      0xF0,0x0A0C0000,      0xB0,0x0A0C8000,      0x90,0x060D0000,      0x90,0x0A0FE720,\
    0x50,0x094E0000,      0x10,0x0A8B8000,      0x00,0x0BC98000,      0x48,0x09000000,      0x50,0x0A000000,\
    0x58,0x0B000000,      0x60,0x0B000000,      0x68,0x0C000000,      0x70,0x09000000,      0x78,0x0A000000,\
    0x80,0x0B000000,      0x88,0x0B000000,      0x90,0x0C000000,      0x98,0x09000000,      0xA0,0x0A000000
// Receiver  Gain
// Headset   Gain
// Speaker   Gain
#define DEFAULT_MUSIC_GAIN_TABLE_PARA \
    0xFF,0x07000000,      0xF4,0x08000000,      0xE8,0x09000000,      0xD8,0x0A000000,      0xC8,0x0B000000,\
    0xB8,0x07000000,      0x98,0x08000000,      0x78,0x09000000,      0x58,0x0A000000,      0x48,0x0B000000,\
    0x38,0x07000000,      0x28,0x08000000,      0x18,0x09000000,      0x00,0x0A000000,      0x78,0x0B000000,\
    0x80,0x07000000,      0x88,0x08000000,      0x90,0x09000000,      0x98,0x0A000000,      0xA0,0x0B000000,\
    \
    0xFF,0x07003000,      0xF4,0x08003400,      0xE8,0x09003800,      0xD8,0x0A003C00,      0xC8,0x0B004000,\
    0xB8,0x06004400,      0x98,0x08004800,      0x78,0x09004C00,      0x58,0x0A005000,      0x48,0x0B005400,\
    0x38,0x07005800,      0x28,0x08405C00,      0x18,0x09806000,      0x00,0x0AC06400,      0x78,0x0B000000,\
    0x80,0x07000000,      0x88,0x08000000,      0x90,0x09000000,      0x98,0x0A000000,      0xA0,0x0B000000,\
    \
    0xFF,0x08088000,      0xF0,0x09090000,      0xC0,0x0A098000,      0xB0,0x0B0A0000,      0xA0,0x070A8000,\
    0x90,0x080B0000,      0x80,0x090B8000,      0x70,0x0A0C0000,      0x60,0x0B0C8000,      0x50,0x070D0000,\
    0x40,0x080D8000,      0x30,0x094E0000,      0x20,0x0A8E8000,      0x00,0x0BCF0000,      0x78,0x07000000,\
    0x80,0x08000000,      0x88,0x09000000,      0x90,0x0A000000,      0x98,0x0B000000,      0xA0,0x07000000 
// Receiver  Gain
// Headset   Gain
// Speaker   Gain
#define DEFAULT_ALARM_GAIN_TABLE_PARA \
    0xF2,0x08000000,      0xC2,0x09000000,      0xA2,0x0A000000,      0x92,0x0B000000,      0x62,0x07000000,\
    0x32,0x08000000,      0x00,0x09000000,      0x00,0x0A000000,      0x48,0x0B000000,      0x50,0x07000000,\
    0x58,0x08000000,      0x60,0x09000000,      0x68,0x0A000000,      0x70,0x0B000000,      0x78,0x07000000,\
    0x80,0x08000000,      0x88,0x09000000,      0x90,0x0A000000,      0x98,0x0B000000,      0xA0,0x07000000,\
    \
    0xFF,0x08005C00,      0xF0,0x09006000,      0xB0,0x0A006400,      0x90,0x0B006800,      0x90,0x090FE720,\
    0x50,0x08407000,      0x30,0x09805C00,      0x00,0x0AC04C00,      0x48,0x08000000,      0x50,0x09000000,\
    0x58,0x0A000000,      0x60,0x0B000000,      0x68,0x07000000,      0x70,0x08000000,      0x78,0x09000000,\
    0x80,0x0A000000,      0x88,0x0B000000,      0x90,0x07000000,      0x98,0x08000000,      0xA0,0x09000000,\
    \
    0xFF,0x090B8000,      0xF0,0x0A0C0000,      0xB0,0x0A0C8000,      0x90,0x060D0000,      0x90,0x0A0FE720,\
    0x50,0x094E0000,      0x10,0x0A8B8000,      0x00,0x0BC98000,      0x48,0x09000000,      0x50,0x0A000000,\
    0x58,0x0B000000,      0x60,0x0B000000,      0x68,0x0C000000,      0x70,0x09000000,      0x78,0x0A000000,\
    0x80,0x0B000000,      0x88,0x0B000000,      0x90,0x0C000000,      0x98,0x09000000,      0xA0,0x0A000000
// Receiver  Gain
// Headset   Gain
// Speaker   Gain
#define DEFAULT_NOTIFICATION_GAIN_TABLE_PARA \
    0xF2,0x08000000,      0xC2,0x09000000,      0xA2,0x0A000000,      0x92,0x0B000000,      0x62,0x07000000,\
    0x32,0x08000000,      0x00,0x09000000,      0x00,0x0A000000,      0x48,0x0B000000,      0x50,0x07000000,\
    0x58,0x08000000,      0x60,0x09000000,      0x68,0x0A000000,      0x70,0x0B000000,      0x78,0x07000000,\
    0x80,0x08000000,      0x88,0x09000000,      0x90,0x0A000000,      0x98,0x0B000000,      0xA0,0x07000000,\
    \
    0xFF,0x08005C00,      0xF0,0x09006000,      0xB0,0x0A006400,      0x90,0x0B006800,      0x90,0x090FE720,\
    0x50,0x08407000,      0x30,0x09805C00,      0x00,0x0AC04C00,      0x48,0x08000000,      0x50,0x09000000,\
    0x58,0x0A000000,      0x60,0x0B000000,      0x68,0x07000000,      0x70,0x08000000,      0x78,0x09000000,\
    0x80,0x0A000000,      0x88,0x0B000000,      0x90,0x07000000,      0x98,0x08000000,      0xA0,0x09000000,\
    \
    0xFF,0x090B8000,      0xF0,0x0A0C0000,      0xB0,0x0A0C8000,      0x90,0x060D0000,      0x90,0x0A0FE720,\
    0x50,0x094E0000,      0x10,0x0A8B8000,      0x00,0x0BC98000,      0x48,0x09000000,      0x50,0x0A000000,\
    0x58,0x0B000000,      0x60,0x0B000000,      0x68,0x0C000000,      0x70,0x09000000,      0x78,0x0A000000,\
    0x80,0x0B000000,      0x88,0x0B000000,      0x90,0x0C000000,      0x98,0x09000000,      0xA0,0x0A000000
// Receiver  Gain
// Headset   Gain
// Speaker   Gain
#define DEFAULT_BLUETOOTH_SCO_GAIN_TABLE_PARA \
    0xFF,0x0A000000,      0xEF,0x0B000000,      0xDF,0x07000000,      0xCC,0x08000000,      0xBC,0x09000000,\
    0xAC,0x0A000000,      0x9C,0x0B000000,      0x8C,0x07000000,      0x7C,0x08000000,      0x6C,0x09000000,\
    0x5C,0x0A000000,      0x4C,0x0B000000,      0x3C,0x07000000,      0x2C,0x08000000,      0x1C,0x09000000,\
    0x00,0x0A000000,      0x88,0x0B000000,      0x90,0x07000000,      0x98,0x08000000,      0xA0,0x09000000,\
    \
    0xFF,0x0A006400,      0xEF,0x0B006400,      0xDF,0x07006400,      0xCC,0x08006400,      0xBC,0x09006400,\
    0xAC,0x0A006400,      0x9C,0x0B006400,      0x8C,0x07006400,      0x7C,0x08006400,      0x6C,0x09006400,\
    0x5C,0x0A006400,      0x4C,0x0B006400,      0x3C,0x07006400,      0x2C,0x08006400,      0x1C,0x09006400,\
    0x00,0x0A006400,      0x88,0x0B000000,      0x90,0x07000000,      0x98,0x08000000,      0xA0,0x09000000,\
    \
    0xFF,0x0B0F8000,      0xEF,0x070F8000,      0xDF,0x080F8000,      0xCC,0x090F8000,      0xBC,0x0A0F8000,\
    0xAC,0x0B0F8000,      0x9C,0x070F8000,      0x8C,0x080F8000,      0x7C,0x090F8000,      0x6C,0x0A0F8000,\
    0x5C,0x0B0F8000,      0x4C,0x070F8000,      0x3C,0x080F8000,      0x2C,0x090F8000,      0x1C,0x0A0F8000,\
    0x00,0x0B0F8000,      0x88,0x07000000,      0x90,0x08000000,      0x98,0x09000000,      0xA0,0x0A000000
// Receiver  Gain
// Headset   Gain
// Speaker   Gain
#define DEFAULT_ENFORCEAUDIBLE_GAIN_TABLE_PARA \
    0xF2,0x08000000,      0xC2,0x09000000,      0xA2,0x0A000000,      0x92,0x0B000000,      0x62,0x07000000,\
    0x32,0x08000000,      0x00,0x09000000,      0x00,0x0A000000,      0x48,0x0B000000,      0x50,0x07000000,\
    0x58,0x08000000,      0x60,0x09000000,      0x68,0x0A000000,      0x70,0x0B000000,      0x78,0x07000000,\
    0x80,0x08000000,      0x88,0x09000000,      0x90,0x0A000000,      0x98,0x0B000000,      0xA0,0x07000000,\
    \
    0xFF,0x08005C00,      0xF0,0x09006000,      0xB0,0x0A006400,      0x90,0x0B006800,      0x90,0x090FE720,\
    0x50,0x08407000,      0x30,0x09805C00,      0x00,0x0AC04C00,      0x48,0x08000000,      0x50,0x09000000,\
    0x58,0x0A000000,      0x60,0x0B000000,      0x68,0x07000000,      0x70,0x08000000,      0x78,0x09000000,\
    0x80,0x0A000000,      0x88,0x0B000000,      0x90,0x07000000,      0x98,0x08000000,      0xA0,0x09000000,\
    \
    0xFF,0x090B8000,      0xF0,0x0A0C0000,      0xB0,0x0A0C8000,      0x90,0x060D0000,      0x90,0x0A0FE720,\
    0x50,0x094E0000,      0x10,0x0A8B8000,      0x00,0x0BC98000,      0x48,0x09000000,      0x50,0x0A000000,\
    0x58,0x0B000000,      0x60,0x0B000000,      0x68,0x0C000000,      0x70,0x09000000,      0x78,0x0A000000,\
    0x80,0x0B000000,      0x88,0x0B000000,      0x90,0x0C000000,      0x98,0x09000000,      0xA0,0x0A000000    
// Receiver  Gain
// Headset Gain
// Speaker Gain
#define DEFAULT_DTMF_GAIN_TABLE_PARA \
    0xF8,0x0A000000,      0xE8,0x0B000000,      0xD8,0x07000000,      0xC8,0x08000000,      0xB8,0x09000000,\
    0xA8,0x0A000000,      0x98,0x0B000000,      0x88,0x07000000,      0x78,0x08000000,      0x68,0x09000000,\
    0x58,0x0A000000,      0x48,0x0B000000,      0x38,0x07000000,      0x28,0x08000000,      0x18,0x09000000,\
    0x00,0x0A000000,      0xFF,0x0B000000,      0x90,0x07000000,      0x98,0x08000000,      0xA0,0x09000000,\
    \
    0xF8,0x0A005000,      0xE8,0x0B005400,      0xD8,0x07005800,      0xC8,0x08005C00,      0xB8,0x09006000,\
    0xA8,0x0A407800,      0x98,0x0B407800,      0x88,0x07806800,      0x78,0x08806800,      0x68,0x09806800,\
    0x58,0x0AC05400,      0x48,0x0BC05400,      0x38,0x07C05400,      0x28,0x08C05400,      0x18,0x09C05400,\
    0x00,0x0AC05400,      0xFF,0x0B000000,      0x90,0x07000000,      0x98,0x08000000,      0xA0,0x09000000,\
    \
    0xF8,0x0A098000,      0xE8,0x0B0A8000,      0xD8,0x070B0000,      0xC8,0x080B8000,      0xB8,0x090C0000,\
    0xA8,0x0A4F0000,      0x98,0x0B4F0000,      0x88,0x078D0000,      0x78,0x058D0000,      0x68,0x098D0000,\
    0x58,0x0ACA8000,      0x48,0x0BCA8000,      0x38,0x07CA8000,      0x28,0x08CA8000,      0x18,0x09CA8000,\
    0x00,0x0A000000,      0xFF,0x0B000000,      0x90,0x07000000,      0x98,0x08000000,      0xA0,0x09000000  
// Receiver  Gain
// Headset Gain
// Speaker Gain
#define DEFAULT_TTS_GAIN_TABLE_PARA \
    0xF8,0x0A000000,      0xE8,0x0B000000,      0xD8,0x07000000,      0xC8,0x08000000,      0xB8,0x09000000,\
    0xA8,0x0A000000,      0x98,0x0B000000,      0x88,0x07000000,      0x78,0x08000000,      0x68,0x09000000,\
    0x58,0x0A000000,      0x48,0x0B000000,      0x38,0x07000000,      0x28,0x08000000,      0x18,0x09000000,\
    0x00,0x0A000000,      0xFF,0x0B000000,      0x90,0x07000000,      0x98,0x08000000,      0xA0,0x09000000,\
    \
    0xF8,0x0A005000,      0xE8,0x0B005400,      0xD8,0x07005800,      0xC8,0x08005C00,      0xB8,0x09006000,\
    0xA8,0x0A407800,      0x98,0x0B407800,      0x88,0x07806800,      0x78,0x08806800,      0x68,0x09806800,\
    0x58,0x0AC05400,      0x48,0x0BC05400,      0x38,0x07C05400,      0x28,0x08C05400,      0x18,0x09C05400,\
    0x00,0x0AC05400,      0xFF,0x0B000000,      0x90,0x07000000,      0x98,0x08000000,      0xA0,0x09000000,\
    \
    0xF8,0x0A098000,      0xE8,0x0B0A8000,      0xD8,0x070B0000,      0xC8,0x080B8000,      0xB8,0x090C0000,\
    0xA8,0x0A4F0000,      0x98,0x0B4F0000,      0x88,0x078D0000,      0x78,0x058D0000,      0x68,0x098D0000,\
    0x58,0x0ACA8000,      0x48,0x0BCA8000,      0x38,0x07CA8000,      0x28,0x08CA8000,      0x18,0x09CA8000,\
    0x00,0x0A000000,      0xFF,0x0B000000,      0x90,0x07000000,      0x98,0x08000000,      0xA0,0x09000000 
// Receiver  Gain
// Headset Gain
// Speaker Gain
#define DEFAULT_FM_GAIN_TABLE_PARA \
    0x00,0x0A000000,      0x00,0x0B000000,      0x00,0x07000000,      0x00,0x08000000,      0x00,0x09000000,\
    0x00,0x0A000000,      0x00,0x0B000000,      0x00,0x07000000,      0x00,0x08000000,      0x00,0x09000000,\
    0x00,0x0A000000,      0x00,0x0B000000,      0x00,0x07000000,      0x00,0x08000000,      0x00,0x09000000,\
    0x00,0x0A000000,      0x00,0x0B000000,      0x00,0x07000000,      0x00,0x08000000,      0x00,0x09000000,\
    \
    0x00,0x18000000,      0x00,0x18000400,      0x00,0x18000400,      0x00,0x2A000800,      0x00,0x26000C00,\
    0x00,0x22001000,      0x00,0x1E001400,      0x00,0x1A001800,      0x00,0x16001C00,      0x00,0x12002000,\
    0x00,0x10802400,      0x00,0x0CC02800,      0x00,0x08C02C00,      0x00,0x04C03400,      0x00,0x09000000,\
    0x00,0x0A000000,      0x00,0x0B000000,      0x00,0x07000000,      0x00,0x08000000,      0x00,0x09000000,\
    \
    0x00,0x2C080000,      0x00,0x29090000,      0x00,0x280A0000,      0x00,0x280A8000,      0x00,0x220B0000,\
    0x00,0x1E0B8000,      0x00,0x1C0C0000,      0x00,0x1A0C8000,      0x00,0x160D0000,      0x00,0x120D8000,\
    0x00,0x100E0000,      0x00,0x0C4E8000,      0x00,0x084F0000,      0x00,0x04CF8000,      0x00,0x0A000000,\
    0x00,0x0B000000,      0x00,0x07000000,      0x00,0x08000000,      0x00,0x09000000,      0x00,0x0A000000
//IDLE_RECORD_MIC 
//IDLE_RECORD_HeadSet
//INCALL_RECEIVER
//INCALL_HEADSET    
//INCALL_SPEAKER
//VOIP_RECEIVER
//VOIP_HEADSET
//VOIP_SPEAKER
//FM_RECORDING
//TTY_DEVICE
//VOICE_RECOGNITION
#define DEFAULT_MICROPHONE_GAIN_TABLE_PARA \
    0x28,	0x24,	0x30,	0x28,\
    0x28,	0x28,	0x24,	0x28,\
    0x2,	0x24,	0x28,	0x20,\
    0x00,	0x00,	0x00,	0x00,\
    0x00,	0x00,	0x00,	0x00
//SIDETONE_RECEIVER
//SIDETONE_HEADSET
//SIDETONE_SPEAKER
#define DEFAULT_SIDETONE_GAIN_TABLE_PARA \
	0x10,	0x20,	0x00,	0x00, \
	0x00,	0x00,	0x00,	0x00, \
	0x00,	0x00,	0x00,	0x00, \
	0x00,	0x00,	0x00,	0x00, \
	0x00,	0x00,	0x00,	0x00
// Receiver Gain
// Headset Gain
// Speaer Gain
#define DEFAULT_SPEECH_GAIN_TABLE_PARA \
    0x0A,0x13000000,      0x09,0x10000000,      0x08,0x0E000000,      0x07,0x0C000000,      0x06,0x0A000000,\
    0x05,0x07000000,      0x04,0x06000000,      0x03,0x0A000000,      0x02,0x0B000000,      0x01,0x07000000,\
    0x0A,0x0C000000,      0x09,0x09000000,      0x08,0x0A000000,      0x07,0x0B000000,      0x06,0x07000000,\
    0x05,0x0C000000,      0x04,0x09000000,      0x03,0x0A000000,      0x02,0x0B000000,      0x01,0x07000000,\
    \
    0x0A,0x13005000,      0x09,0x10005400,      0x08,0x0e005800,      0x07,0x0C005C00,      0x06,0x0A106000,\
    0x05,0x08206400,      0x04,0x06306800,      0x03,0x0A000000,      0x02,0x0B000000,      0x01,0x07000000,\
    0x0A,0x0C000000,      0x09,0x0D000000,      0x08,0x0A000000,      0x07,0x0B000000,      0x06,0x07000000,\
    0x05,0x0C000000,      0x04,0x0D000000,      0x03,0x0A000000,      0x02,0x0B000000,      0x01,0x07000000,\
    \
    0x0A,0x130C0000,      0x09,0x100C8000,      0x08,0x0E0D0000,      0x07,0x0C0E8000,      0x06,0x0A1D8000,\
    0x05,0x082B8000,      0x04,0x063A8000,      0x07,0x0A000000,      0x02,0x0B000000,      0x01,0x07000000,\
    0x0A,0x08000000,      0x09,0x09000000,      0x08,0x0A000000,      0x07,0x0B000000,      0x06,0x07000000,\
    0x05,0x08000000,      0x04,0x09000000,      0x07,0x0A000000,      0x02,0x0B000000,      0x01,0x07000000
#endif