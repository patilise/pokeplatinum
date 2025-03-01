#include <nitro.h>
#include <string.h>

#include "assert.h"

#include "struct_decls/struct_party_decl.h"
#include "struct_decls/struct_0207ADB4_decl.h"
#include "overlay014/struct_ov14_0221FC20_decl.h"
#include "overlay016/struct_ov16_0224B9DC_decl.h"

#include "struct_defs/pokemon.h"
#include "struct_defs/struct_0207ADB4_t.h"
#include "overlay014/struct_ov14_0221FC20_t.h"
#include "overlay016/struct_ov16_0224B9DC_t.h"

#include "unk_02073C2C.h"
#include "party.h"
#include "overlay014/ov14_0221FC20.h"
#include "overlay016/ov16_0223DF00.h"
#include "overlay016/ov16_0225177C.h"

static const u16 Unk_ov14_0222EE90[] = {
	0x7,
	0x8,
	0x27,
	0x4B,
	0x50,
	0x91,
	0x97,
	0xA1,
	0xAA,
	0xB6,
	0xBE,
	0xF8,
	0x10D,
	0xffff
};

static const u16 Unk_ov14_0222EE78[] = {
	0x87,
	0xDB,
	0xDE,
	0x10C,
	0x29,
	0x57,
	0x58,
	0x79,
	0x7B,
	0x82,
	0xC4,
	0xffff
};

typedef void (* UnkFuncPtr_ov14_0222EEAC)(UnkStruct_0207ADB4 *, UnkStruct_ov16_0224B9DC *);

static s32 ov14_02222D7C(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1, int param2, u16 * param3, s32 * param4, u16 param5, u8 * param6, int param7, int param8, int param9);
void ov14_0221FC20(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1, u8 param2, u8 param3);
u8 ov14_0221FCF4(UnkStruct_0207ADB4 * param0, u8 param1);
static u8 ov14_0221FD44(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static u8 ov14_0221FE38(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_02220078(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_02222C88(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_02220184(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_022201C4(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_02220204(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_02220244(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_02220284(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_022202B8(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_02220310(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_02220368(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_022203C0(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_02220418(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_02220464(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_022204B0(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_022204FC(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_02220548(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_02220590(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_022205D8(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_02220628(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_02220678(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_022206A8(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_022206D8(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_02220708(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_02220738(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_02220768(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_02220798(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_022207C8(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_022207F8(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_0222084C(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_0222089C(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_02220900(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_02220964(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_02220980(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_02220B10(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_02220B34(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_02220C70(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_02220CA4(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_02220CD4(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_02220D04(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_02220D48(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_02220D8C(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_02220E68(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_02220E84(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_02220EA8(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_02221060(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_02221114(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_022211AC(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_022212A0(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_02221394(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_0222140C(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_02221444(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_0222147C(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_022214D0(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_02221524(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_02221578(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_022215CC(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_022216F8(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_02221824(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_022218E4(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_022219A4(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_02221A48(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_02221AEC(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_02221B5C(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_02221BCC(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_02221BE8(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_02221BEC(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_02221BF0(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_02221C24(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_02222844(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_0222287C(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_022228C8(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_02222900(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_02222918(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_0222294C(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_0222296C(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_0222298C(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_022229AC(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_02222A08(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_02222A28(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_02222A44(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_02222A6C(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_02222B10(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_02222B48(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_02222B80(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_02220AB4(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_02220F88(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_02222BB4(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_02221C88(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_02221CF0(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_02221D20(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_02221D88(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_02221E18(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_02221EBC(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_02221EEC(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_02221F1C(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_02221F78(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_02221F9C(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_02221FCC(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_02222090(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_022220CC(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_02222260(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_02222298(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_022223B0(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_02222400(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_02222450(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_022224A4(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_022224F8(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_02222648(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_022227A4(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_022227F4(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_02222BF8(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static void ov14_02222C28(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1, int param2);
static BOOL ov14_02222C60(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1);
static int ov14_02222CF0(UnkStruct_ov16_0224B9DC * param0);
static int ov14_02222D10(UnkStruct_ov16_0224B9DC * param0, int param1);
static void ov14_02222D24(UnkStruct_ov16_0224B9DC * param0, int param1);
static u8 ov14_02222D34(UnkStruct_ov16_0224B9DC * param0, u8 param1);
static s32 ov14_02222E84(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1, u16 param2, u16 param3, u8 * param4, int param5, int param6, int param7, u8 param8);
static int ov14_0222327C(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1, int param2, int param3);
static void ov14_0222254C(UnkStruct_ov16_0224B9DC * param0, int param1, int * param2, int * param3, int param4);
static BOOL ov14_022233F4(UnkStruct_ov16_0224B9DC * param0, int param1);
static BOOL ov14_0222342C(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1, int param2);
static BOOL ov14_022235F0(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1, int param2);
static BOOL ov14_02223B34(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1, int param2, u8 param3);
static BOOL ov14_02223C8C(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1, int param2);
static BOOL ov14_02223E10(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1, int param2, u32 param3, u8 param4);
static BOOL ov14_02224070(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1, int param2);
static BOOL ov14_0222416C(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1, int param2);
static BOOL ov14_022241A4(UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1, int param2);
int ov14_022243BC(UnkStruct_0207ADB4 * param0, int param1);
BOOL ov14_022244B0(UnkStruct_0207ADB4 * param0, int param1);

static const UnkFuncPtr_ov14_0222EEAC Unk_ov14_0222EEAC[] = {
    ov14_02220184,
    ov14_022201C4,
    ov14_02220204,
    ov14_02220244,
    ov14_02220284,
    ov14_022202B8,
    ov14_02220310,
    ov14_02220368,
    ov14_022203C0,
    ov14_02220418,
    ov14_02220464,
    ov14_022204B0,
    ov14_022204FC,
    ov14_02220548,
    ov14_02220590,
    ov14_022205D8,
    ov14_02220628,
    ov14_02220678,
    ov14_022206A8,
    ov14_022206D8,
    ov14_02220708,
    ov14_02220738,
    ov14_02220768,
    ov14_02220798,
    ov14_022207C8,
    ov14_022207F8,
    ov14_0222084C,
    ov14_0222089C,
    ov14_02220900,
    ov14_02220964,
    ov14_02220980,
    ov14_02220B10,
    ov14_02220B34,
    ov14_02220C70,
    ov14_02220CA4,
    ov14_02220CD4,
    ov14_02220D04,
    ov14_02220D48,
    ov14_02220D8C,
    ov14_02220E68,
    ov14_02220E84,
    ov14_02220EA8,
    ov14_02221060,
    ov14_02221114,
    ov14_022211AC,
    ov14_022212A0,
    ov14_02221394,
    ov14_0222140C,
    ov14_02221444,
    ov14_0222147C,
    ov14_022214D0,
    ov14_02221524,
    ov14_02221578,
    ov14_022215CC,
    ov14_022216F8,
    ov14_02221824,
    ov14_022218E4,
    ov14_022219A4,
    ov14_02221A48,
    ov14_02221AEC,
    ov14_02221B5C,
    ov14_02221BCC,
    ov14_02221BE8,
    ov14_02221BEC,
    ov14_02221BF0,
    ov14_02221C24,
    ov14_02222844,
    ov14_0222287C,
    ov14_022228C8,
    ov14_02222900,
    ov14_02222918,
    ov14_0222294C,
    ov14_0222296C,
    ov14_0222298C,
    ov14_022229AC,
    ov14_02222A08,
    ov14_02222A28,
    ov14_02222A44,
    ov14_02222A6C,
    ov14_02222B10,
    ov14_02222B48,
    ov14_02222B80,
    ov14_02220AB4,
    ov14_02220F88,
    ov14_02222BB4,
    ov14_02221C88,
    ov14_02221CF0,
    ov14_02221D20,
    ov14_02221D88,
    ov14_02221E18,
    ov14_02221EBC,
    ov14_02221EEC,
    ov14_02221F1C,
    ov14_02221F78,
    ov14_02221F9C,
    ov14_02221FCC,
    ov14_02222090,
    ov14_022220CC,
    ov14_02222260,
    ov14_02222298,
    ov14_022223B0,
    ov14_02222400,
    ov14_02222450,
    ov14_022224A4,
    ov14_022224F8,
    ov14_02222648,
    ov14_022227A4,
    ov14_022227F4,
    ov14_02222BF8
};

void ov14_0221FC20 (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1, u8 param2, u8 param3)
{
    int v0;
    u8 v1;
    u8 * v2;

    v2 = (u8 *)&param1->unk_354;

    for (v0 = 0; v0 < XtOffset(UnkStruct_ov14_0221FC20 *, unk_1C); v0++) {
        v2[v0] = 0;
    }

    for (v0 = 0; v0 < 4; v0++) {
        if (param3 & 1) {
            param1->unk_354.unk_04[v0] = 100;
        } else {
            param1->unk_354.unk_04[v0] = 0;
        }

        param3 = param3 >> 1;
    }

    v1 = ov16_02254A6C(param0, param1, param2, 0, 0xffffffff);

    for (v0 = 0; v0 < 4; v0++) {
        if (v1 & sub_020787CC(v0)) {
            param1->unk_354.unk_04[v0] = 0;
        }

        param1->unk_354.unk_18[v0] = 100 - (ov16_0223F4BC(param0) % 16);
    }

    param1->unk_354.unk_78 = 0;

    if (param0->unk_2C & 0x100) {
        param1->unk_354.unk_0C = 0x20000000;
    } else {
        param1->unk_354.unk_0C = param0->unk_AC[param2].unk_0C;
    }

    if (param0->unk_2C & 0x2) {
        param1->unk_354.unk_0C |= 0x80;
    }
}

u8 ov14_0221FCF4 (UnkStruct_0207ADB4 * param0, u8 param1)
{
    u8 v0;
    UnkStruct_ov16_0224B9DC * v1;

    v1 = param0->unk_30;

    if ((v1->unk_354.unk_10 & 0x10) == 0) {
        v1->unk_354.unk_7B = param1;
        v1->unk_354.unk_7C = ov16_02257028(param0, v1, param1);

        ov14_0221FC20(param0, v1, v1->unk_354.unk_7B, 0xf);
    }

    if ((param0->unk_2C & 0x2) == 0) {
        v0 = ov14_0221FD44(param0, v1);
    } else {
        v0 = ov14_0221FE38(param0, v1);
    }

    return v0;
}

static u8 ov14_0221FD44 (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    int v0;
    u8 v1[4];
    u8 v2[4];
    u8 v3;
    u8 v4 = 0;
    u16 v5;

    ov14_02222C88(param0, param1);

    while (param1->unk_354.unk_0C) {
        if (param1->unk_354.unk_0C & 1) {
            if ((param1->unk_354.unk_10 & 0x10) == 0) {
                param1->unk_354.unk_00 = 0;
            }

            ov14_02220078(param0, param1);
        }

        param1->unk_354.unk_0C = param1->unk_354.unk_0C >> 1;
        param1->unk_354.unk_11++;
        param1->unk_354.unk_01 = 0;
    }

    if (param1->unk_354.unk_10 & 0x2) {
        v4 = 4;
    } else if (param1->unk_354.unk_10 & 0x4) {
        v4 = 5;
    } else {
        v3 = 1;
        v1[0] = param1->unk_354.unk_04[0];
        v2[0] = 0;

        for (v0 = 1; v0 < 4; v0++) {
            if (param1->unk_2D40[param1->unk_354.unk_7B].unk_0C[v0]) {
                if (v1[0] == param1->unk_354.unk_04[v0]) {
                    v1[v3] = param1->unk_354.unk_04[v0];
                    v2[v3++] = v0;
                }

                if (v1[0] < param1->unk_354.unk_04[v0]) {
                    v3 = 1;
                    v1[0] = param1->unk_354.unk_04[v0];
                    v2[0] = v0;
                }
            }
        }

        v4 = v2[ov16_0223F4BC(param0) % v3];
    }

    param1->unk_354.unk_86[param1->unk_354.unk_7B] = param1->unk_354.unk_7C;

    return v4;
}

static u8 ov14_0221FE38 (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    int v0, v1, v2;
    s16 v3[4];
    u8 v4[4];
    s8 v5[4];
    s16 v6;
    u16 v7;
    s8 v8;

    for (v0 = 0; v0 < 4; v0++) {
        if ((v0 == param1->unk_354.unk_7B) || (param1->unk_2D40[v0].unk_4C == 0)) {
            v5[v0] = -1;
            v3[v0] = -1;
            continue;
        }

        ov14_0221FC20(param0, param1, param1->unk_354.unk_7B, 0xf);

        param1->unk_354.unk_7C = v0;

        if ((v0 & 1) != (param1->unk_354.unk_7B & 1)) {
            ov14_02222C88(param0, param1);
        }

        param1->unk_354.unk_11 = 0;
        param1->unk_354.unk_01 = 0;

        v2 = param1->unk_354.unk_0C;

        while (v2) {
            if (v2 & 1) {
                if ((param1->unk_354.unk_10 & 0x10) == 0) {
                    param1->unk_354.unk_00 = 0;
                }

                ov14_02220078(param0, param1);
            }

            v2 >>= 1;

            param1->unk_354.unk_11++;
            param1->unk_354.unk_01 = 0;
        }

        if (param1->unk_354.unk_10 & 0x2) {
            v5[v0] = 4;
        } else if (param1->unk_354.unk_10 & 0x4) {
            v5[v0] = 5;
        } else {
            u8 v9[4];
            u8 v10[4];
            int v11, v12;

            v9[0] = param1->unk_354.unk_04[0];
            v10[0] = 0;
            v11 = 1;

            for (v12 = 1; v12 < 4; v12++) {
                if (param1->unk_2D40[param1->unk_354.unk_7B].unk_0C[v12]) {
                    if (v9[0] == param1->unk_354.unk_04[v12]) {
                        v9[v11] = param1->unk_354.unk_04[v12];
                        v10[v11] = v12;
                        v11++;
                    }

                    if (v9[0] < param1->unk_354.unk_04[v12]) {
                        v9[0] = param1->unk_354.unk_04[v12];
                        v10[0] = v12;
                        v11 = 1;
                    }
                }
            }

            v5[v0] = v10[ov16_0223F4BC(param0) % v11];
            v3[v0] = v9[0];

            if (v0 == (param1->unk_354.unk_7B ^ 2)) {
                if (v3[v0] < 100) {
                    v3[v0] = -1;
                }
            }
        }
    }

    v6 = v3[0];
    v4[0] = 0;
    v1 = 1;

    for (v0 = 1; v0 < 4; v0++) {
        if (v6 == v3[v0]) {
            v4[v1++] = v0;
        }

        if (v6 < v3[v0]) {
            v6 = v3[v0];
            v4[0] = v0;
            v1 = 1;
        }
    }

    param1->unk_354.unk_86[param1->unk_354.unk_7B] = v4[(ov16_0223F4BC(param0) % v1)];

    v8 = v5[param1->unk_354.unk_86[param1->unk_354.unk_7B]];
    v7 = param1->unk_2D40[param1->unk_354.unk_7B].unk_0C[v8];

    if (param1->unk_354.unk_8A[v7].unk_08 == 0x200) {
        if (ov16_0223E208(param0, param1->unk_354.unk_86[param1->unk_354.unk_7B]) == 0) {
            param1->unk_354.unk_86[param1->unk_354.unk_7B] = param1->unk_354.unk_7B;
        }
    }

    if (v7 == 174) {
        if (ov16_02255950(param1, v7, param1->unk_354.unk_7B) == 0) {
            param1->unk_354.unk_86[param1->unk_354.unk_7B] = param1->unk_354.unk_7B;
        }
    }

    return v8;
}

static void ov14_02220078 (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    while (param1->unk_354.unk_00 != 2) {
        switch (param1->unk_354.unk_00) {
        case 0:
            param1->unk_2138 = param1->unk_2134[param1->unk_354.unk_11];

            if (param1->unk_2D40[param1->unk_354.unk_7B].unk_2C[param1->unk_354.unk_01] == 0) {
                param1->unk_354.unk_02 = 0;
            } else {
                param1->unk_354.unk_02 = param1->unk_2D40[param1->unk_354.unk_7B].unk_0C[param1->unk_354.unk_01];
            }

            param1->unk_354.unk_00++;
            break;
        case 1:
            if (param1->unk_354.unk_02 != 0) {
                Unk_ov14_0222EEAC[param1->unk_2134[param1->unk_2138]](param0, param1);
            } else {
                param1->unk_354.unk_04[param1->unk_354.unk_01] = 0;
                param1->unk_354.unk_10 |= 0x1;
            }

            if (param1->unk_354.unk_10 & 0x1) {
                param1->unk_354.unk_01++;

                if ((param1->unk_354.unk_01 < 4) && ((param1->unk_354.unk_10 & 0x8) == 0)) {
                    param1->unk_354.unk_00 = 0;
                } else {
                    param1->unk_354.unk_00++;
                }

                param1->unk_354.unk_10 &= (0x1 ^ 0xff);
            }

            break;
        case 2:
            break;
        }
    }
}

static void ov14_02220184 (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    int v0;
    int v1;

    ov14_02222D24(param1, 1);

    v0 = ov14_02222CF0(param1);
    v1 = ov14_02222CF0(param1);

    if ((ov16_0223F4BC(param0) % 256) < v0) {
        ov14_02222D24(param1, v1);
    }
}

static void ov14_022201C4 (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    int v0;
    int v1;

    ov14_02222D24(param1, 1);

    v0 = ov14_02222CF0(param1);
    v1 = ov14_02222CF0(param1);

    if ((ov16_0223F4BC(param0) % 256) > v0) {
        ov14_02222D24(param1, v1);
    }
}

static void ov14_02220204 (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    int v0;
    int v1;

    ov14_02222D24(param1, 1);

    v0 = ov14_02222CF0(param1);
    v1 = ov14_02222CF0(param1);

    if ((ov16_0223F4BC(param0) % 256) == v0) {
        ov14_02222D24(param1, v1);
    }
}

static void ov14_02220244 (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    int v0;
    int v1;

    ov14_02222D24(param1, 1);

    v0 = ov14_02222CF0(param1);
    v1 = ov14_02222CF0(param1);

    if ((ov16_0223F4BC(param0) % 256) != v0) {
        ov14_02222D24(param1, v1);
    }
}

static void ov14_02220284 (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    int v0;

    ov14_02222D24(param1, 1);

    v0 = ov14_02222CF0(param1);
    param1->unk_354.unk_04[param1->unk_354.unk_01] += v0;

    if (param1->unk_354.unk_04[param1->unk_354.unk_01] < 0) {
        param1->unk_354.unk_04[param1->unk_354.unk_01] = 0;
    }
}

static void ov14_022202B8 (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    u8 v0;
    u32 v1;
    int v2;
    int v3;
    int v4;

    ov14_02222D24(param1, 1);

    v2 = ov14_02222CF0(param1);
    v3 = ov14_02222CF0(param1);
    v4 = ov14_02222CF0(param1);
    v0 = ov14_02222D34(param1, v2);
    v1 = param1->unk_2D40[v0].unk_4C * 100 / param1->unk_2D40[v0].unk_50;

    if (v1 < v3) {
        ov14_02222D24(param1, v4);
    }
}

static void ov14_02220310 (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    u8 v0;
    u32 v1;
    int v2;
    int v3;
    int v4;

    ov14_02222D24(param1, 1);

    v2 = ov14_02222CF0(param1);
    v3 = ov14_02222CF0(param1);
    v4 = ov14_02222CF0(param1);
    v0 = ov14_02222D34(param1, v2);
    v1 = param1->unk_2D40[v0].unk_4C * 100 / param1->unk_2D40[v0].unk_50;

    if (v1 > v3) {
        ov14_02222D24(param1, v4);
    }
}

static void ov14_02220368 (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    u8 v0;
    u32 v1;
    int v2;
    int v3;
    int v4;

    ov14_02222D24(param1, 1);

    v2 = ov14_02222CF0(param1);
    v3 = ov14_02222CF0(param1);
    v4 = ov14_02222CF0(param1);
    v0 = ov14_02222D34(param1, v2);
    v1 = param1->unk_2D40[v0].unk_4C * 100 / param1->unk_2D40[v0].unk_50;

    if (v1 == v3) {
        ov14_02222D24(param1, v4);
    }
}

static void ov14_022203C0 (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    u8 v0;
    u32 v1;
    int v2;
    int v3;
    int v4;

    ov14_02222D24(param1, 1);

    v2 = ov14_02222CF0(param1);
    v3 = ov14_02222CF0(param1);
    v4 = ov14_02222CF0(param1);
    v0 = ov14_02222D34(param1, v2);
    v1 = param1->unk_2D40[v0].unk_4C * 100 / param1->unk_2D40[v0].unk_50;

    if (v1 != v3) {
        ov14_02222D24(param1, v4);
    }
}

static void ov14_02220418 (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    u8 v0;
    int v1;
    u32 v2;
    int v3;

    ov14_02222D24(param1, 1);

    v1 = ov14_02222CF0(param1);
    v2 = ov14_02222CF0(param1);
    v3 = ov14_02222CF0(param1);
    v0 = ov14_02222D34(param1, v1);

    if (param1->unk_2D40[v0].unk_6C & v2) {
        ov14_02222D24(param1, v3);
    }
}

static void ov14_02220464 (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    u8 v0;
    int v1;
    u32 v2;
    int v3;

    ov14_02222D24(param1, 1);

    v1 = ov14_02222CF0(param1);
    v2 = ov14_02222CF0(param1);
    v3 = ov14_02222CF0(param1);
    v0 = ov14_02222D34(param1, v1);

    if ((param1->unk_2D40[v0].unk_6C & v2) == 0) {
        ov14_02222D24(param1, v3);
    }
}

static void ov14_022204B0 (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    u8 v0;
    int v1;
    u32 v2;
    int v3;

    ov14_02222D24(param1, 1);

    v1 = ov14_02222CF0(param1);
    v2 = ov14_02222CF0(param1);
    v3 = ov14_02222CF0(param1);
    v0 = ov14_02222D34(param1, v1);

    if (param1->unk_2D40[v0].unk_70 & v2) {
        ov14_02222D24(param1, v3);
    }
}

static void ov14_022204FC (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    u8 v0;
    int v1;
    u32 v2;
    int v3;

    ov14_02222D24(param1, 1);

    v1 = ov14_02222CF0(param1);
    v2 = ov14_02222CF0(param1);
    v3 = ov14_02222CF0(param1);
    v0 = ov14_02222D34(param1, v1);

    if ((param1->unk_2D40[v0].unk_70 & v2) == 0) {
        ov14_02222D24(param1, v3);
    }
}

static void ov14_02220548 (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    u8 v0;
    int v1;
    u32 v2;
    int v3;

    ov14_02222D24(param1, 1);

    v1 = ov14_02222CF0(param1);
    v2 = ov14_02222CF0(param1);
    v3 = ov14_02222CF0(param1);
    v0 = ov14_02222D34(param1, v1);

    if (param1->unk_2D40[v0].unk_80 & v2) {
        ov14_02222D24(param1, v3);
    }
}

static void ov14_02220590 (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    u8 v0;
    int v1;
    u32 v2;
    int v3;

    ov14_02222D24(param1, 1);

    v1 = ov14_02222CF0(param1);
    v2 = ov14_02222CF0(param1);
    v3 = ov14_02222CF0(param1);
    v0 = ov14_02222D34(param1, v1);

    if ((param1->unk_2D40[v0].unk_80 & v2) == 0) {
        ov14_02222D24(param1, v3);
    }
}

static void ov14_022205D8 (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    u8 v0;
    int v1;
    u32 v2;
    int v3;
    u8 v4;

    ov14_02222D24(param1, 1);

    v1 = ov14_02222CF0(param1);
    v2 = ov14_02222CF0(param1);
    v3 = ov14_02222CF0(param1);
    v0 = ov14_02222D34(param1, v1);
    v4 = ov16_0223E208(param0, v0);

    if (param1->unk_1BC[v4] & v2) {
        ov14_02222D24(param1, v3);
    }
}

static void ov14_02220628 (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    u8 v0;
    int v1;
    u32 v2;
    int v3;
    u8 v4;

    ov14_02222D24(param1, 1);

    v1 = ov14_02222CF0(param1);
    v2 = ov14_02222CF0(param1);
    v3 = ov14_02222CF0(param1);
    v0 = ov14_02222D34(param1, v1);
    v4 = ov16_0223E208(param0, v0);

    if ((param1->unk_1BC[v4] & v2) == 0) {
        ov14_02222D24(param1, v3);
    }
}

static void ov14_02220678 (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    int v0;
    int v1;

    ov14_02222D24(param1, 1);

    v0 = ov14_02222CF0(param1);
    v1 = ov14_02222CF0(param1);

    if (param1->unk_354.unk_08 < v0) {
        ov14_02222D24(param1, v1);
    }
}

static void ov14_022206A8 (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    int v0;
    int v1;

    ov14_02222D24(param1, 1);

    v0 = ov14_02222CF0(param1);
    v1 = ov14_02222CF0(param1);

    if (param1->unk_354.unk_08 > v0) {
        ov14_02222D24(param1, v1);
    }
}

static void ov14_022206D8 (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    int v0;
    int v1;

    ov14_02222D24(param1, 1);

    v0 = ov14_02222CF0(param1);
    v1 = ov14_02222CF0(param1);

    if (param1->unk_354.unk_08 == v0) {
        ov14_02222D24(param1, v1);
    }
}

static void ov14_02220708 (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    int v0;
    int v1;

    ov14_02222D24(param1, 1);

    v0 = ov14_02222CF0(param1);
    v1 = ov14_02222CF0(param1);

    if (param1->unk_354.unk_08 != v0) {
        ov14_02222D24(param1, v1);
    }
}

static void ov14_02220738 (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    int v0;
    int v1;

    ov14_02222D24(param1, 1);

    v0 = ov14_02222CF0(param1);
    v1 = ov14_02222CF0(param1);

    if (param1->unk_354.unk_08 & v0) {
        ov14_02222D24(param1, v1);
    }
}

static void ov14_02220768 (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    int v0;
    int v1;

    ov14_02222D24(param1, 1);

    v0 = ov14_02222CF0(param1);
    v1 = ov14_02222CF0(param1);

    if ((param1->unk_354.unk_08 & v0) == 0) {
        ov14_02222D24(param1, v1);
    }
}

static void ov14_02220798 (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    int v0;
    int v1;

    ov14_02222D24(param1, 1);

    v0 = ov14_02222CF0(param1);
    v1 = ov14_02222CF0(param1);

    if (param1->unk_354.unk_02 == v0) {
        ov14_02222D24(param1, v1);
    }
}

static void ov14_022207C8 (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    int v0;
    int v1;

    ov14_02222D24(param1, 1);

    v0 = ov14_02222CF0(param1);
    v1 = ov14_02222CF0(param1);

    if (param1->unk_354.unk_02 != v0) {
        ov14_02222D24(param1, v1);
    }
}

static void ov14_022207F8 (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    int v0;
    int v1;
    int v2;

    ov14_02222D24(param1, 1);

    v0 = ov14_02222CF0(param1);
    v1 = ov14_02222CF0(param1);

    while ((v2 = ov14_02222D10(param1, v0)) != 0xffffffff) {
        if (param1->unk_354.unk_08 == v2) {
            ov14_02222D24(param1, v1);
            break;
        }

        v0++;
    }
}

static void ov14_0222084C (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    int v0;
    int v1;
    int v2;

    ov14_02222D24(param1, 1);

    v0 = ov14_02222CF0(param1);
    v1 = ov14_02222CF0(param1);

    while ((v2 = ov14_02222D10(param1, v0)) != 0xffffffff) {
        if (param1->unk_354.unk_08 == v2) {
            return;
        }

        v0++;
    }

    ov14_02222D24(param1, v1);
}

static void ov14_0222089C (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    int v0;
    int v1;

    ov14_02222D24(param1, 1);
    v1 = ov14_02222CF0(param1);

    for (v0 = 0; v0 < 4; v0++) {
        if ((param1->unk_2D40[param1->unk_354.unk_7B].unk_0C[v0] != 0) && (param1->unk_354.unk_8A[param1->unk_2D40[param1->unk_354.unk_7B].unk_0C[v0]].unk_03)) {
            break;
        }
    }

    if (v0 < 4) {
        ov14_02222D24(param1, v1);
    }
}

static void ov14_02220900 (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    int v0;
    int v1;

    ov14_02222D24(param1, 1);
    v1 = ov14_02222CF0(param1);

    for (v0 = 0; v0 < 4; v0++) {
        if ((param1->unk_2D40[param1->unk_354.unk_7B].unk_0C[v0] != 0) && (param1->unk_354.unk_8A[param1->unk_2D40[param1->unk_354.unk_7B].unk_0C[v0]].unk_03)) {
            break;
        }
    }

    if (v0 == 4) {
        ov14_02222D24(param1, v1);
    }
}

static void ov14_02220964 (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    ov14_02222D24(param1, 1);
    param1->unk_354.unk_08 = param1->unk_150;
}

static void ov14_02220980 (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    int v0;
    int v1;

    ov14_02222D24(param1, 1);

    v0 = ov14_02222CF0(param1);

    switch (v0) {
    case 1:
        param1->unk_354.unk_08 = ov16_02252060(param1, param1->unk_354.unk_7B, 27, NULL);
        break;
    case 0:
        param1->unk_354.unk_08 = ov16_02252060(param1, param1->unk_354.unk_7C, 27, NULL);
        break;
    case 3:
        param1->unk_354.unk_08 = ov16_02252060(param1, param1->unk_354.unk_7B, 28, NULL);
        break;
    case 2:
        param1->unk_354.unk_08 = ov16_02252060(param1, param1->unk_354.unk_7C, 28, NULL);
        break;
    case 4:
        param1->unk_354.unk_08 = param1->unk_354.unk_8A[param1->unk_354.unk_02].unk_04;
        break;
    case 6:
        v1 = ov16_0223E258(param0, param1->unk_354.unk_7B);
        param1->unk_354.unk_08 = ov16_02252060(param1, v1, 27, NULL);
        break;
    case 5:
        v1 = ov16_0223E258(param0, param1->unk_354.unk_7C);
        param1->unk_354.unk_08 = ov16_02252060(param1, v1, 27, NULL);
        break;
    case 8:
        v1 = ov16_0223E258(param0, param1->unk_354.unk_7B);
        param1->unk_354.unk_08 = ov16_02252060(param1, v1, 28, NULL);
        break;
    case 7:
        v1 = ov16_0223E258(param0, param1->unk_354.unk_7C);
        param1->unk_354.unk_08 = ov16_02252060(param1, v1, 27, NULL);
        break;
    default:
        GF_ASSERT(0);
        break;
    }
}

static void ov14_02220AB4 (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    u8 v0;
    int v1;
    int v2;

    ov14_02222D24(param1, 1);

    v1 = ov14_02222CF0(param1);
    v2 = ov14_02222CF0(param1);
    v0 = ov14_02222D34(param1, v1);

    if ((ov16_02252060(param1, v0, 27, NULL) == v2) || (ov16_02252060(param1, v0, 28, NULL) == v2)) {
        param1->unk_354.unk_08 = 1;
    } else {
        param1->unk_354.unk_08 = 0;
    }
}

static void ov14_02220B10 (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    ov14_02222D24(param1, 1);
    param1->unk_354.unk_08 = param1->unk_354.unk_8A[param1->unk_354.unk_02].unk_03;
}

static void ov14_02220B34 (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    int v0 = 0, v1, v2;
    s32 v3[4];
    int v4;
    u8 v5[6];

    ov14_02222D24(param1, 1);

    v4 = ov14_02222CF0(param1);
    v1 = 0;

    while (Unk_ov14_0222EE90[v1] != 0xffff) {
        if (param1->unk_354.unk_8A[param1->unk_354.unk_02].unk_00 == Unk_ov14_0222EE90[v1]) {
            break;
        }

        v1++;
    }

    v2 = 0;

    while (Unk_ov14_0222EE78[v2] != 0xffff) {
        if (param1->unk_354.unk_8A[param1->unk_354.unk_02].unk_00 == Unk_ov14_0222EE78[v2]) {
            break;
        }

        v2++;
    }

    if ((Unk_ov14_0222EE78[v2] != 0xffff) || ((param1->unk_354.unk_8A[param1->unk_354.unk_02].unk_03 > 1) && (Unk_ov14_0222EE90[v1] == 0xffff))) {
        for (v0 = 0; v0 < 6; v0++) {
            v5[v0] = ov16_02252060(param1, param1->unk_354.unk_7B, 10 + v0, NULL);
        }

        ov14_02222D7C(param0, param1, param1->unk_354.unk_7B, &param1->unk_2D40[param1->unk_354.unk_7B].unk_0C[0], &v3[0], param1->unk_2D40[param1->unk_354.unk_7B].unk_78, &v5[0], ov16_02255A4C(param1, param1->unk_354.unk_7B), param1->unk_2D40[param1->unk_354.unk_7B].unk_88.unk_04_19, v4);

        for (v0 = 0; v0 < 4; v0++) {
            if (v3[v0] > v3[param1->unk_354.unk_01]) {
                break;
            }
        }

        if (v0 == 4) {
            param1->unk_354.unk_08 = 2;
        } else {
            param1->unk_354.unk_08 = 1;
        }
    } else {
        param1->unk_354.unk_08 = 0;
    }
}

static void ov14_02220C70 (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    u8 v0;
    int v1;

    ov14_02222D24(param1, 1);

    v1 = ov14_02222CF0(param1);
    v0 = ov14_02222D34(param1, v1);

    param1->unk_354.unk_08 = param1->unk_307C[v0];
}

static void ov14_02220CA4 (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    int v0;
    int v1;

    ov14_02222D24(param1, 1);

    v0 = ov14_02222CF0(param1);
    v1 = ov14_02222CF0(param1);

    if (v0 == param1->unk_354.unk_08) {
        ov14_02222D24(param1, v1);
    }
}

static void ov14_02220CD4 (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    int v0;
    int v1;

    ov14_02222D24(param1, 1);

    v0 = ov14_02222CF0(param1);
    v1 = ov14_02222CF0(param1);

    if (v0 != param1->unk_354.unk_08) {
        ov14_02222D24(param1, v1);
    }
}

static void ov14_02220D04 (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    int v0;
    int v1;

    ov14_02222D24(param1, 1);

    v0 = ov14_02222CF0(param1);
    v1 = ov14_02222CF0(param1);

    if (ov16_02252EC8(param0, param1, param1->unk_354.unk_7B, param1->unk_354.unk_7C, 1) == v0) {
        ov14_02222D24(param1, v1);
    }
}

static void ov14_02220D48 (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    int v0;
    int v1;

    ov14_02222D24(param1, 1);

    v0 = ov14_02222CF0(param1);
    v1 = ov14_02222CF0(param1);

    if (ov16_02252EC8(param0, param1, param1->unk_354.unk_7B, param1->unk_354.unk_7C, 1) != v0) {
        ov14_02222D24(param1, v1);
    }
}

static void ov14_02220D8C (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    Party * v0;
    Pokemon * v1;
    int v2;
    u8 v3;
    u8 v4, v5;
    int v6;

    ov14_02222D24(param1, 1);

    v6 = ov14_02222CF0(param1);

    param1->unk_354.unk_08 = 0;

    v3 = ov14_02222D34(param1, v6);
    v0 = ov16_0223DF20(param0, v3);

    if (param0->unk_2C & 0x2) {
        v4 = param1->unk_219C[v3];
        v5 = param1->unk_219C[ov16_0223E258(param0, v3)];
    } else {
        v4 = v5 = param1->unk_219C[v3];
    }

    for (v2 = 0; v2 < ov16_0223DF60(param0, v3); v2++) {
        v1 = Party_GetPokemonBySlotIndex(v0, v2);

        if ((v2 != v4) && (v2 != v5) && (GetMonData(v1, MON_DATA_163, NULL) != 0) && (GetMonData(v1, MON_DATA_SPECIES_EGG, NULL) != 0) && (GetMonData(v1, MON_DATA_SPECIES_EGG, NULL) != 494)) {
            param1->unk_354.unk_08++;
        }
    }
}

static void ov14_02220E68 (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    ov14_02222D24(param1, 1);
    param1->unk_354.unk_08 = param1->unk_354.unk_02;
}

static void ov14_02220E84 (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    ov14_02222D24(param1, 1);
    param1->unk_354.unk_08 = param1->unk_354.unk_8A[param1->unk_354.unk_02].unk_00;
}

static void ov14_02220EA8 (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    u8 v0;
    int v1;
    int v2, v3;

    ov14_02222D24(param1, 1);

    v1 = ov14_02222CF0(param1);
    v0 = ov14_02222D34(param1, v1);

    if (param1->unk_2D40[v0].unk_80 & 0x200000) {
        param1->unk_354.unk_08 = 0;
    } else if ((param1->unk_354.unk_7B != v0) && (v1 != 3)) {
        if (param1->unk_354.unk_3C[v0]) {
            param1->unk_354.unk_08 = param1->unk_354.unk_3C[v0];
        } else {
            if ((param1->unk_2D40[v0].unk_27 == 23) || (param1->unk_2D40[v0].unk_27 == 42) || (param1->unk_2D40[v0].unk_27 == 71)) {
                param1->unk_354.unk_08 = param1->unk_2D40[v0].unk_27;
            } else {
                v2 = sub_020759F0(param1->unk_2D40[v0].unk_00, 24);
                v3 = sub_020759F0(param1->unk_2D40[v0].unk_00, 25);

                if ((v2) && (v3)) {
                    if (ov16_0223F4BC(param0) & 1) {
                        param1->unk_354.unk_08 = v2;
                    } else {
                        param1->unk_354.unk_08 = v3;
                    }
                } else if (v2) {
                    param1->unk_354.unk_08 = v2;
                } else {
                    param1->unk_354.unk_08 = v3;
                }
            }
        }
    } else {
        param1->unk_354.unk_08 = param1->unk_2D40[v0].unk_27;
    }
}

static void ov14_02220F88 (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    u8 v0;
    int v1;
    int v2;
    int v3;
    int v4, v5;

    ov14_02222D24(param1, 1);

    v1 = ov14_02222CF0(param1);
    v2 = ov14_02222CF0(param1);
    v0 = ov14_02222D34(param1, v1);

    if (param1->unk_2D40[v0].unk_80 & 0x200000) {
        v3 = 0;
    } else if ((v1 == 0) || (v1 == 2)) {
        if (param1->unk_354.unk_3C[v0]) {
            v3 = param1->unk_354.unk_3C[v0];
            param1->unk_354.unk_08 = param1->unk_354.unk_3C[v0];
        } else {
            if ((param1->unk_2D40[v0].unk_27 == 23) || (param1->unk_2D40[v0].unk_27 == 42) || (param1->unk_2D40[v0].unk_27 == 71)) {
                v3 = param1->unk_2D40[v0].unk_27;
            } else {
                v4 = sub_020759F0(param1->unk_2D40[v0].unk_00, 24);
                v5 = sub_020759F0(param1->unk_2D40[v0].unk_00, 25);

                if ((v4) && (v5)) {
                    if ((v4 != v2) && (v5 != v2)) {
                        v3 = v4;
                    } else {
                        v3 = 0;
                    }
                } else if (v4) {
                    v3 = v4;
                } else {
                    v3 = v5;
                }
            }
        }
    } else {
        v3 = param1->unk_2D40[v0].unk_27;
    }

    if (v3 == 0) {
        param1->unk_354.unk_08 = 2;
    } else if (v3 == v2) {
        param1->unk_354.unk_08 = 1;
    } else {
        param1->unk_354.unk_08 = 0;
    }
}

static void ov14_02221060 (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    int v0;
    u32 v1;
    u32 v2;
    u16 v3;
    int v4;

    ov14_02222D24(param1, 1);

    param1->unk_354.unk_08 = 0;

    for (v0 = 0; v0 < 4; v0++) {
        v1 = 40;
        v2 = 0;
        v3 = param1->unk_2D40[param1->unk_354.unk_7B].unk_0C[v0];
        v4 = ov14_0222327C(param0, param1, param1->unk_354.unk_7B, v3);

        if (v3) {
            v1 = ov16_02254FA8(param0, param1, v3, v4, param1->unk_354.unk_7B, param1->unk_354.unk_7C, v1, &v2);

            if (v1 == 60 * 2) {
                v1 = 80;
            } else if (v1 == 60 * 4) {
                v1 = 160;
            } else if (v1 == 60 / 2) {
                v1 = 20;
            } else if (v1 == 60 / 4) {
                v1 = 10;
            }

            if (v2 & (0x8 | 0x800 | 0x100000 | 0x40000)) {
                v1 = 0;
            }

            if (param1->unk_354.unk_08 < v1) {
                param1->unk_354.unk_08 = v1;
            }
        }
    }
}

static void ov14_02221114 (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    int v0;
    int v1;
    u32 v2;
    u32 v3;

    ov14_02222D24(param1, 1);

    v0 = ov14_02222CF0(param1);
    v1 = ov14_02222CF0(param1);
    v2 = 40;
    v3 = 0;
    v2 = ov16_02254FA8(param0, param1, param1->unk_354.unk_02, ov14_0222327C(param0, param1, param1->unk_354.unk_7B, param1->unk_354.unk_02), param1->unk_354.unk_7B, param1->unk_354.unk_7C, v2, &v3);

    if (v2 == 60 * 2) {
        v2 = 80;
    } else if (v2 == 60 * 4) {
        v2 = 160;
    } else if (v2 == 60 / 2) {
        v2 = 20;
    } else if (v2 == 60 / 4) {
        v2 = 10;
    }

    if (v3 & (0x8 | 0x800 | 0x100000 | 0x40000)) {
        v2 = 0;
    }

    if (v2 == v0) {
        ov14_02222D24(param1, v1);
    }
}

static void ov14_022211AC (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    Party * v0;
    Pokemon * v1;
    int v2;
    u8 v3;
    u8 v4, v5;
    int v6;
    u32 v7;
    int v8;

    ov14_02222D24(param1, 1);

    v6 = ov14_02222CF0(param1);
    v7 = ov14_02222CF0(param1);
    v8 = ov14_02222CF0(param1);
    v3 = ov14_02222D34(param1, v6);

    if (param0->unk_2C & 0x2) {
        v4 = param1->unk_219C[v3];
        v5 = param1->unk_219C[ov16_0223E258(param0, v3)];
    } else {
        v4 = v5 = param1->unk_219C[v3];
    }

    v0 = ov16_0223DF20(param0, v3);

    for (v2 = 0; v2 < ov16_0223DF60(param0, v3); v2++) {
        v1 = Party_GetPokemonBySlotIndex(v0, v2);

        if ((v2 != v4) && (v2 != v5) && (GetMonData(v1, MON_DATA_163, NULL) != 0) && (GetMonData(v1, MON_DATA_SPECIES_EGG, NULL) != 0) && (GetMonData(v1, MON_DATA_SPECIES_EGG, NULL) != 494) && (GetMonData(v1, MON_DATA_160, NULL) & v7)) {
            ov14_02222D24(param1, v8);
            return;
        }
    }
}

static void ov14_022212A0 (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    Party * v0;
    Pokemon * v1;
    int v2;
    u8 v3;
    u8 v4, v5;
    int v6;
    u32 v7;
    int v8;

    ov14_02222D24(param1, 1);

    v6 = ov14_02222CF0(param1);
    v7 = ov14_02222CF0(param1);
    v8 = ov14_02222CF0(param1);
    v3 = ov14_02222D34(param1, v6);

    if (param0->unk_2C & 0x2) {
        v4 = param1->unk_219C[v3];
        v5 = param1->unk_219C[ov16_0223E258(param0, v3)];
    } else {
        v4 = v5 = param1->unk_219C[v3];
    }

    v0 = ov16_0223DF20(param0, v3);

    for (v2 = 0; v2 < ov16_0223DF60(param0, v3); v2++) {
        v1 = Party_GetPokemonBySlotIndex(v0, v2);

        if ((v2 != v4) && (v2 != v5) && (GetMonData(v1, MON_DATA_163, NULL) != 0) && (GetMonData(v1, MON_DATA_SPECIES_EGG, NULL) != 0) && (GetMonData(v1, MON_DATA_SPECIES_EGG, NULL) != 494) && ((GetMonData(v1, MON_DATA_160, NULL) & v7) == 0)) {
            ov14_02222D24(param1, v8);
            return;
        }
    }
}

static void ov14_02221394 (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    ov14_02222D24(param1, 1);

    param1->unk_354.unk_08 = 0x0;

    if (param1->unk_180 & 0x3) {
        param1->unk_354.unk_08 = 0x2;
    }

    if (param1->unk_180 & 0xc) {
        param1->unk_354.unk_08 = 0x3;
    }

    if (param1->unk_180 & 0x30) {
        param1->unk_354.unk_08 = 0x1;
    }

    if (param1->unk_180 & 0xc0) {
        param1->unk_354.unk_08 = 0x4;
    }

    if (param1->unk_180 & 0x8000) {
        param1->unk_354.unk_08 = 0x5;
    }
}

static void ov14_0222140C (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    int v0;
    int v1;

    ov14_02222D24(param1, 1);

    v0 = ov14_02222CF0(param1);
    v1 = ov14_02222CF0(param1);

    if (param1->unk_354.unk_8A[param1->unk_354.unk_02].unk_00 == v0) {
        ov14_02222D24(param1, v1);
    }
}

static void ov14_02221444 (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    int v0;
    int v1;

    ov14_02222D24(param1, 1);

    v0 = ov14_02222CF0(param1);
    v1 = ov14_02222CF0(param1);

    if (param1->unk_354.unk_8A[param1->unk_354.unk_02].unk_00 != v0) {
        ov14_02222D24(param1, v1);
    }
}

static void ov14_0222147C (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    u8 v0;
    int v1;
    int v2;
    int v3;
    int v4;

    ov14_02222D24(param1, 1);

    v1 = ov14_02222CF0(param1);
    v2 = ov14_02222CF0(param1);
    v3 = ov14_02222CF0(param1);
    v4 = ov14_02222CF0(param1);
    v0 = ov14_02222D34(param1, v1);

    if (param1->unk_2D40[v0].unk_18[v2] < v3) {
        ov14_02222D24(param1, v4);
    }
}

static void ov14_022214D0 (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    u8 v0;
    int v1;
    int v2;
    int v3;
    int v4;

    ov14_02222D24(param1, 1);

    v1 = ov14_02222CF0(param1);
    v2 = ov14_02222CF0(param1);
    v3 = ov14_02222CF0(param1);
    v4 = ov14_02222CF0(param1);
    v0 = ov14_02222D34(param1, v1);

    if (param1->unk_2D40[v0].unk_18[v2] > v3) {
        ov14_02222D24(param1, v4);
    }
}

static void ov14_02221524 (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    u8 v0;
    int v1;
    int v2;
    int v3;
    int v4;

    ov14_02222D24(param1, 1);

    v1 = ov14_02222CF0(param1);
    v2 = ov14_02222CF0(param1);
    v3 = ov14_02222CF0(param1);
    v4 = ov14_02222CF0(param1);
    v0 = ov14_02222D34(param1, v1);

    if (param1->unk_2D40[v0].unk_18[v2] == v3) {
        ov14_02222D24(param1, v4);
    }
}

static void ov14_02221578 (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    u8 v0;
    int v1;
    int v2;
    int v3;
    int v4;

    ov14_02222D24(param1, 1);

    v1 = ov14_02222CF0(param1);
    v2 = ov14_02222CF0(param1);
    v3 = ov14_02222CF0(param1);
    v4 = ov14_02222CF0(param1);
    v0 = ov14_02222D34(param1, v1);

    if (param1->unk_2D40[v0].unk_18[v2] != v3) {
        ov14_02222D24(param1, v4);
    }
}

static void ov14_022215CC (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    int v0;
    int v1;
    int v2;
    int v3;
    int v4, v5;
    u32 v6;
    u8 v7[6];

    ov14_02222D24(param1, 1);

    v1 = ov14_02222CF0(param1);
    v2 = ov14_02222CF0(param1);

    if (v1 == 1) {
        v3 = param1->unk_354.unk_18[param1->unk_354.unk_01];
    } else {
        v3 = 100;
    }

    v4 = 0;

    while (Unk_ov14_0222EE90[v4] != 0xffff) {
        if (param1->unk_354.unk_8A[param1->unk_354.unk_02].unk_00 == Unk_ov14_0222EE90[v4]) {
            break;
        }

        v4++;
    }

    v5 = 0;

    while (Unk_ov14_0222EE78[v5] != 0xffff) {
        if (param1->unk_354.unk_8A[param1->unk_354.unk_02].unk_00 == Unk_ov14_0222EE78[v5]) {
            break;
        }

        v5++;
    }

    if ((Unk_ov14_0222EE78[v5] != 0xffff) || ((param1->unk_354.unk_8A[param1->unk_354.unk_02].unk_03 > 1) && (Unk_ov14_0222EE90[v4] == 0xffff))) {
        for (v0 = 0; v0 < 6; v0++) {
            v7[v0] = ov16_02252060(param1, param1->unk_354.unk_7B, 10 + v0, NULL);
        }

        v6 = ov14_02222E84(param0, param1, param1->unk_354.unk_02, param1->unk_2D40[param1->unk_354.unk_7B].unk_78, &v7[0], param1->unk_354.unk_7B, ov16_02255A4C(param1, param1->unk_354.unk_7B), param1->unk_2D40[param1->unk_354.unk_7B].unk_88.unk_04_19, v3);

        if (param1->unk_2D40[param1->unk_354.unk_7C].unk_4C <= v6) {
            ov14_02222D24(param1, v2);
        }
    }
}

static void ov14_022216F8 (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    int v0;
    int v1;
    int v2;
    int v3;
    int v4, v5;
    u32 v6;
    u8 v7[6];

    ov14_02222D24(param1, 1);

    v1 = ov14_02222CF0(param1);
    v2 = ov14_02222CF0(param1);

    if (v1 == 1) {
        v3 = param1->unk_354.unk_18[param1->unk_354.unk_01];
    } else {
        v3 = 100;
    }

    v4 = 0;

    while (Unk_ov14_0222EE90[v4] != 0xffff) {
        if (param1->unk_354.unk_8A[param1->unk_354.unk_02].unk_00 == Unk_ov14_0222EE90[v4]) {
            break;
        }

        v4++;
    }

    v5 = 0;

    while (Unk_ov14_0222EE78[v5] != 0xffff) {
        if (param1->unk_354.unk_8A[param1->unk_354.unk_02].unk_00 == Unk_ov14_0222EE78[v5]) {
            break;
        }

        v5++;
    }

    if ((Unk_ov14_0222EE78[v5] != 0xffff) || ((param1->unk_354.unk_8A[param1->unk_354.unk_02].unk_03 > 1) && (Unk_ov14_0222EE90[v4] == 0xffff))) {
        for (v0 = 0; v0 < 6; v0++) {
            v7[v0] = ov16_02252060(param1, param1->unk_354.unk_7B, 10 + v0, NULL);
        }

        v6 = ov14_02222E84(param0, param1, param1->unk_354.unk_02, param1->unk_2D40[param1->unk_354.unk_7B].unk_78, &v7[0], param1->unk_354.unk_7B, ov16_02255A4C(param1, param1->unk_354.unk_7B), param1->unk_2D40[param1->unk_354.unk_7B].unk_88.unk_04_19, v3);

        if (param1->unk_2D40[param1->unk_354.unk_7C].unk_4C > v6) {
            ov14_02222D24(param1, v2);
        }
    }
}

static void ov14_02221824 (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    int v0;
    u8 v1;
    int v2;
    int v3;
    int v4;

    ov14_02222D24(param1, 1);

    v2 = ov14_02222CF0(param1);
    v3 = ov14_02222CF0(param1);
    v4 = ov14_02222CF0(param1);
    v1 = ov14_02222D34(param1, v2);

    switch (v2) {
    case 1:
        for (v0 = 0; v0 < 4; v0++) {
            if (param1->unk_2D40[v1].unk_0C[v0] == v3) {
                break;
            }
        }

        if (v0 < 4) {
            ov14_02222D24(param1, v4);
        }
        break;
    case 3:
        if (param1->unk_2D40[v1].unk_4C == 0) {
            break;
        }

        for (v0 = 0; v0 < 4; v0++) {
            if (param1->unk_2D40[v1].unk_0C[v0] == v3) {
                break;
            }
        }

        if (v0 < 4) {
            ov14_02222D24(param1, v4);
        }
        break;
    case 0:
        for (v0 = 0; v0 < 4; v0++) {
            if (param1->unk_354.unk_1C[v1][v0] == v3) {
                break;
            }
        }

        if (v0 < 4) {
            ov14_02222D24(param1, v4);
        }
        break;
    default:
        break;
    }
}

static void ov14_022218E4 (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    int v0;
    u8 v1;
    int v2;
    int v3;
    int v4;

    ov14_02222D24(param1, 1);

    v2 = ov14_02222CF0(param1);
    v3 = ov14_02222CF0(param1);
    v4 = ov14_02222CF0(param1);
    v1 = ov14_02222D34(param1, v2);

    switch (v2) {
    case 1:
        for (v0 = 0; v0 < 4; v0++) {
            if (param1->unk_2D40[v1].unk_0C[v0] == v3) {
                break;
            }
        }

        if (v0 == 4) {
            ov14_02222D24(param1, v4);
        }
        break;
    case 3:
        if (param1->unk_2D40[v1].unk_4C == 0) {
            break;
        }

        for (v0 = 0; v0 < 4; v0++) {
            if (param1->unk_2D40[v1].unk_0C[v0] == v3) {
                break;
            }
        }

        if (v0 == 4) {
            ov14_02222D24(param1, v4);
        }
        break;
    case 0:
        for (v0 = 0; v0 < 4; v0++) {
            if (param1->unk_354.unk_1C[v1][v0] == v3) {
                break;
            }
        }

        if (v0 == 4) {
            ov14_02222D24(param1, v4);
        }
        break;
    default:
        break;
    }
}

static void ov14_022219A4 (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    int v0;
    u8 v1;
    int v2;
    int v3;
    int v4;

    ov14_02222D24(param1, 1);

    v2 = ov14_02222CF0(param1);
    v3 = ov14_02222CF0(param1);
    v4 = ov14_02222CF0(param1);
    v1 = ov14_02222D34(param1, v2);

    switch (v2) {
    case 1:
        for (v0 = 0; v0 < 4; v0++) {
            if ((param1->unk_2D40[v1].unk_0C[v0]) && (param1->unk_354.unk_8A[param1->unk_2D40[v1].unk_0C[v0]].unk_00 == v3)) {
                break;
            }
        }

        if (v0 < 4) {
            ov14_02222D24(param1, v4);
        }
        break;
    case 0:
        for (v0 = 0; v0 < 4; v0++) {
            if ((param1->unk_354.unk_1C[v1][v0]) && (param1->unk_354.unk_8A[param1->unk_354.unk_1C[v1][v0]].unk_00 == v3)) {
                break;
            }
        }

        if (v0 < 4) {
            ov14_02222D24(param1, v4);
        }
        break;
    default:
        break;
    }
}

static void ov14_02221A48 (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    int v0;
    u8 v1;
    int v2;
    int v3;
    int v4;

    ov14_02222D24(param1, 1);

    v2 = ov14_02222CF0(param1);
    v3 = ov14_02222CF0(param1);
    v4 = ov14_02222CF0(param1);
    v1 = ov14_02222D34(param1, v2);

    switch (v2) {
    case 1:
        for (v0 = 0; v0 < 4; v0++) {
            if ((param1->unk_2D40[v1].unk_0C[v0]) && (param1->unk_354.unk_8A[param1->unk_2D40[v1].unk_0C[v0]].unk_00 == v3)) {
                break;
            }
        }

        if (v0 == 4) {
            ov14_02222D24(param1, v4);
        }
        break;
    case 0:
        for (v0 = 0; v0 < 4; v0++) {
            if ((param1->unk_354.unk_1C[v1][v0]) && (param1->unk_354.unk_8A[param1->unk_354.unk_1C[v1][v0]].unk_00 == v3)) {
                break;
            }
        }

        if (v0 == 4) {
            ov14_02222D24(param1, v4);
        }
        break;
    default:
        break;
    }
}

static void ov14_02221AEC (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    u8 v0;
    int v1;
    int v2;
    int v3;

    ov14_02222D24(param1, 1);

    v1 = ov14_02222CF0(param1);
    v2 = ov14_02222CF0(param1);
    v3 = ov14_02222CF0(param1);
    v0 = ov14_02222D34(param1, v1);

    switch (v2) {
    case 0x0:
        if (param1->unk_2D40[v0].unk_88.unk_00_0) {
            ov14_02222D24(param1, v3);
        }
        break;
    case 0x1:
        if (param1->unk_2D40[v0].unk_88.unk_00_3) {
            ov14_02222D24(param1, v3);
        }
        break;
    default:
        break;
    }
}

static void ov14_02221B5C (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    int v0;
    int v1;

    ov14_02222D24(param1, 1);

    v0 = ov14_02222CF0(param1);
    v1 = ov14_02222CF0(param1);

    switch (v0) {
    case 0x0:
        if (param1->unk_2D40[param1->unk_354.unk_7B].unk_88.unk_20 == param1->unk_354.unk_02) {
            ov14_02222D24(param1, v1);
        }
        break;
    case 0x1:
        if (param1->unk_2D40[param1->unk_354.unk_7B].unk_88.unk_24 == param1->unk_354.unk_02) {
            ov14_02222D24(param1, v1);
        }
        break;
    default:
        break;
    }
}

static void ov14_02221BCC (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    ov14_02222D24(param1, 1);
    param1->unk_354.unk_10 |= (0x1 | 0x2 | 0x8);
}

static void ov14_02221BE8 (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    return;
}

static void ov14_02221BEC (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    return;
}

static void ov14_02221BF0 (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    u8 v0;
    int v1;

    ov14_02222D24(param1, 1);

    v1 = ov14_02222CF0(param1);
    v0 = ov14_02222D34(param1, v1);

    param1->unk_354.unk_08 = param1->unk_2D40[v0].unk_78;
}

static void ov14_02221C24 (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    u8 v0;
    int v1;

    ov14_02222D24(param1, 1);

    v1 = ov14_02222CF0(param1);
    v0 = ov14_02222D34(param1, v1);

    if (param1->unk_354.unk_7B != v0) {
        param1->unk_354.unk_08 = ov16_0225B0FC(param1, param1->unk_354.unk_40[v0], 1);
    } else {
        param1->unk_354.unk_08 = ov16_0225B0FC(param1, param1->unk_2D40[v0].unk_78, 1);
    }
}

static void ov14_02221C88 (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    u16 v0;
    u8 v1;
    int v2;
    int v3;
    int v4;

    ov14_02222D24(param1, 1);

    v2 = ov14_02222CF0(param1);
    v3 = ov14_02222CF0(param1);
    v4 = ov14_02222CF0(param1);
    v1 = ov14_02222D34(param1, v2);

    if ((v1 & 1) == (param1->unk_354.unk_7B & 1)) {
        v0 = param1->unk_2D40[v1].unk_78;
    } else {
        v0 = param1->unk_354.unk_40[v1];
    }

    if (v0 == v3) {
        ov14_02222D24(param1, v4);
    }
}

static void ov14_02221CF0 (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    u32 v0;
    int v1;

    ov14_02222D24(param1, 1);

    v0 = ov14_02222CF0(param1);
    v1 = ov14_02222CF0(param1);

    if (param1->unk_180 & v0) {
        ov14_02222D24(param1, v1);
    }
}

static void ov14_02221D20 (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    u8 v0;
    int v1;
    u32 v2;
    u8 v3;

    ov14_02222D24(param1, 1);

    v1 = ov14_02222CF0(param1);
    v2 = ov14_02222CF0(param1);
    v0 = ov14_02222D34(param1, v1);
    v3 = ov16_0223E208(param0, v0);

    switch (v2) {
    case 0x4:
        param1->unk_354.unk_08 = param1->unk_1C4[v3].unk_04_0;
        break;
    case 0x400:
        param1->unk_354.unk_08 = param1->unk_1C4[v3].unk_04_2;
        break;
    }
}

static void ov14_02221D88 (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    u8 v0;
    int v1;
    int v2;
    int v3;
    Pokemon * v4;

    ov14_02222D24(param1, 1);

    v1 = ov14_02222CF0(param1);
    v2 = ov14_02222CF0(param1);
    v0 = ov14_02222D34(param1, v1);

    for (v3 = 0; v3 < ov16_0223DF60(param0, v0); v3++) {
        v4 = ov16_0223DFAC(param0, v0, v3);

        if (v3 != param1->unk_219C[v0]) {
            if (GetMonData(v4, MON_DATA_163, NULL) != GetMonData(v4, MON_DATA_164, NULL)) {
                ov14_02222D24(param1, v2);
                break;
            }
        }
    }
}

static void ov14_02221E18 (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    u8 v0;
    int v1;
    int v2;
    int v3, v4;
    Pokemon * v5;

    ov14_02222D24(param1, 1);

    v1 = ov14_02222CF0(param1);
    v2 = ov14_02222CF0(param1);
    v0 = ov14_02222D34(param1, v1);

    for (v3 = 0; v3 < ov16_0223DF60(param0, v0); v3++) {
        v5 = ov16_0223DFAC(param0, v0, v3);

        if (v3 != param1->unk_219C[v0]) {
            for (v4 = 0; v4 < 4; v4++) {
                if (GetMonData(v5, MON_DATA_58 + v4, NULL) != GetMonData(v5, MON_DATA_66 + v4, NULL)) {
                    ov14_02222D24(param1, v2);
                    break;
                }
            }

            if (v4 != 4) {
                break;
            }
        }
    }
}

static void ov14_02221EBC (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    u8 v0;
    int v1;

    ov14_02222D24(param1, 1);

    v1 = ov14_02222CF0(param1);
    v0 = ov14_02222D34(param1, v1);

    param1->unk_354.unk_08 = ov16_02258B80(param1, v0);
}

static void ov14_02221EEC (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    ov14_02222D24(param1, 1);
    param1->unk_354.unk_08 = param1->unk_2D40[param1->unk_354.unk_7B].unk_2C[param1->unk_354.unk_01];
}

static void ov14_02221F1C (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    u8 v0;
    int v1;
    int v2;
    int v3;

    ov14_02222D24(param1, 1);

    v1 = ov14_02222CF0(param1);
    v2 = ov14_02222CF0(param1);
    v0 = ov14_02222D34(param1, v1);
    v3 = ov16_02256128(param0, param1, v0);

    if ((param1->unk_2D40[v0].unk_88.unk_04_10 >= (v3 - 1)) && (v3 > 1)) {
        ov14_02222D24(param1, v2);
    }
}

static void ov14_02221F78 (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    ov14_02222D24(param1, 1);
    param1->unk_354.unk_08 = param1->unk_354.unk_8A[param1->unk_354.unk_02].unk_02;
}

static void ov14_02221F9C (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    ov14_02222D24(param1, 1);
    param1->unk_354.unk_08 = param1->unk_354.unk_8A[param1->unk_307C[param1->unk_354.unk_7C]].unk_02;
}

static void ov14_02221FCC (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    int v0, v1;
    int v2[4];
    int v3, v4;
    int v5;
    int v6;
    int v7;

    ov14_02222D24(param1, 1);

    v7 = ov14_02222CF0(param1);
    v6 = ov14_02222D34(param1, v7);
    v5 = ov16_0223DF1C(param0);

    for (v0 = 0; v0 < v5; v0++) {
        v2[v0] = v0;
    }

    for (v0 = 0; v0 < v5 - 1; v0++) {
        for (v1 = v0 + 1; v1 < v5; v1++) {
            v3 = v2[v0];
            v4 = v2[v1];

            if (ov16_02252EC8(param0, param1, v3, v4, 1)) {
                v2[v0] = v4;
                v2[v1] = v3;
            }
        }
    }

    for (v0 = 0; v0 < v5; v0++) {
        if (v2[v0] == v6) {
            param1->unk_354.unk_08 = v0;
            break;
        }
    }
}

static void ov14_02222090 (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    int v0;
    int v1;

    ov14_02222D24(param1, 1);

    v1 = ov14_02222CF0(param1);
    v0 = ov14_02222D34(param1, v1);

    param1->unk_354.unk_08 = param1->unk_150 - param1->unk_2D40[v0].unk_88.unk_0C;
}

static void ov14_022220CC (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    int v0, v1;
    int v2;
    int v3;
    int v4;
    s32 v5;
    s32 v6;
    s32 v7[4];
    u16 v8[4];
    u8 v9[6];
    Pokemon * v10;

    ov14_02222D24(param1, 1);

    v2 = ov14_02222CF0(param1);
    v3 = ov14_02222CF0(param1);
    v4 = param1->unk_354.unk_7B;

    for (v0 = 0; v0 < 6; v0++) {
        v9[v0] = ov16_02252060(param1, v4, 10 + v0, NULL);
    }

    v5 = ov14_02222D7C(param0, param1, param1->unk_354.unk_7B, &param1->unk_2D40[v4].unk_0C[0], &v7[0], param1->unk_2D40[v4].unk_78, &v9[0], ov16_02255A4C(param1, v4), param1->unk_2D40[v4].unk_88.unk_04_19, v2);

    for (v0 = 0; v0 < ov16_0223DF60(param0, v4); v0++) {
        if (v0 != param1->unk_219C[v4]) {
            v10 = ov16_0223DFAC(param0, v4, v0);

            if ((GetMonData(v10, MON_DATA_163, NULL) != 0) && (GetMonData(v10, MON_DATA_SPECIES_EGG, NULL) != 0) && (GetMonData(v10, MON_DATA_SPECIES_EGG, NULL) != 494)) {
                for (v1 = 0; v1 < 4; v1++) {
                    v8[v1] = GetMonData(v10, MON_DATA_MOVE1 + v1, NULL);
                }

                for (v1 = 0; v1 < 6; v1++) {
                    v9[v1] = GetMonData(v10, MON_DATA_HP_IV + v1, NULL);
                }

                v6 = ov14_02222D7C(param0, param1, param1->unk_354.unk_7B, &v8[0], &v7[0], GetMonData(v10, MON_DATA_HELD_ITEM, NULL), &v9[0], GetMonData(v10, MON_DATA_10, NULL), MON_DATA_PERSONALITY, v2);

                if (v6 > v5) {
                    ov14_02222D24(param1, v3);
                    break;
                }
            }
        }
    }
}

static void ov14_02222260 (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    int v0;

    ov14_02222D24(param1, 1);

    v0 = ov14_02222CF0(param1);

    if (ov14_02223B34(param0, param1, param1->unk_354.unk_7B, 1) == 1) {
        ov14_02222D24(param1, v0);
    }
}

static void ov14_02222298 (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    s32 v6;
    s32 v7;
    s32 v8[4];
    u8 v9[6];

    ov14_02222D24(param1, 1);

    v1 = ov14_02222CF0(param1);
    v2 = ov14_02222CF0(param1);
    v3 = ov14_02222CF0(param1);

    for (v0 = 0; v0 < 6; v0++) {
        v9[v0] = ov16_02252060(param1, param1->unk_354.unk_7B, 10 + v0, NULL);
    }

    v6 = ov14_02222D7C(param0, param1, param1->unk_354.unk_7B, &param1->unk_2D40[param1->unk_354.unk_7B].unk_0C[0], &v8[0], param1->unk_2D40[param1->unk_354.unk_7B].unk_78, &v9[0], ov16_02255A4C(param1, param1->unk_354.unk_7B), param1->unk_2D40[param1->unk_354.unk_7B].unk_88.unk_04_19, v2);
    v4 = ov14_02222D34(param1, v1);

    if (v2 == 1) {
        v5 = param1->unk_354.unk_18[param1->unk_354.unk_01];
    } else {
        v5 = 100;
    }

    v7 = ov14_02222E84(param0, param1, param1->unk_307C[v4], param1->unk_2D40[v4].unk_78, &v9[0], v4, ov16_02255A4C(param1, v4), param1->unk_2D40[v4].unk_88.unk_04_19, v5);

    if (v7 > v6) {
        ov14_02222D24(param1, v3);
    }
}

static void ov14_022223B0 (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    int v0;
    int v1;
    int v2;

    ov14_02222D24(param1, 1);

    v1 = ov14_02222CF0(param1);
    v2 = ov14_02222D34(param1, v1);

    param1->unk_354.unk_08 = 0;

    for (v0 = 0x0; v0 < 0x8; v0++) {
        if (param1->unk_2D40[v2].unk_18[v0] > 6) {
            param1->unk_354.unk_08 += param1->unk_2D40[v2].unk_18[v0] - 6;
        }
    }
}

static void ov14_02222400 (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    int v0;
    int v1;
    int v2;

    ov14_02222D24(param1, 1);

    v0 = ov14_02222CF0(param1);
    v1 = ov14_02222CF0(param1);
    v2 = ov14_02222D34(param1, v0);

    param1->unk_354.unk_08 = param1->unk_2D40[v2].unk_18[v1] - param1->unk_2D40[param1->unk_354.unk_7B].unk_18[v1];
}

static void ov14_02222450 (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;

    ov14_02222D24(param1, 1);

    v0 = ov14_02222CF0(param1);
    v1 = ov14_02222CF0(param1);
    v2 = ov14_02222CF0(param1);
    v3 = ov14_02222D34(param1, v0);

    ov14_0222254C(param1, v3, &v4, &v5, v1);

    if (v4 < v5) {
        ov14_02222D24(param1, v2);
    }
}

static void ov14_022224A4 (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;

    ov14_02222D24(param1, 1);

    v0 = ov14_02222CF0(param1);
    v1 = ov14_02222CF0(param1);
    v2 = ov14_02222CF0(param1);
    v3 = ov14_02222D34(param1, v0);

    ov14_0222254C(param1, v3, &v4, &v5, v1);

    if (v4 > v5) {
        ov14_02222D24(param1, v2);
    }
}

static void ov14_022224F8 (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;

    ov14_02222D24(param1, 1);

    v0 = ov14_02222CF0(param1);
    v1 = ov14_02222CF0(param1);
    v2 = ov14_02222CF0(param1);
    v3 = ov14_02222D34(param1, v0);

    ov14_0222254C(param1, v3, &v4, &v5, v1);

    if (v4 == v5) {
        ov14_02222D24(param1, v2);
    }
}

static void ov14_0222254C (UnkStruct_ov16_0224B9DC * param0, int param1, int * param2, int * param3, int param4)
{
    switch (param4) {
    case 0x0:
        param2[0] = param0->unk_2D40[param0->unk_354.unk_7B].unk_4C;
        param3[0] = param0->unk_2D40[param1].unk_4C;
        break;
    case 0x1:
        param2[0] = param0->unk_2D40[param0->unk_354.unk_7B].unk_02;
        param3[0] = param0->unk_2D40[param1].unk_02;
        break;
    case 0x2:
        param2[0] = param0->unk_2D40[param0->unk_354.unk_7B].unk_04;
        param3[0] = param0->unk_2D40[param1].unk_04;
        break;
    case 0x4:
        param2[0] = param0->unk_2D40[param0->unk_354.unk_7B].unk_08;
        param3[0] = param0->unk_2D40[param1].unk_08;
        break;
    case 0x5:
        param2[0] = param0->unk_2D40[param0->unk_354.unk_7B].unk_0A;
        param3[0] = param0->unk_2D40[param1].unk_0A;
        break;
    case 0x3:
        param2[0] = param0->unk_2D40[param0->unk_354.unk_7B].unk_06;
        param3[0] = param0->unk_2D40[param1].unk_06;
        break;
    default:
        GF_ASSERT(0);
        break;
    }
}

static void ov14_02222648 (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    int v0 = 0, v1, v2;
    s32 v3;
    s32 v4[4];
    int v5;
    u8 v6[6];
    int v7;

    ov14_02222D24(param1, 1);

    v5 = ov14_02222CF0(param1);
    v1 = 0;

    while (Unk_ov14_0222EE90[v1] != 0xffff) {
        if (param1->unk_354.unk_8A[param1->unk_354.unk_02].unk_00 == Unk_ov14_0222EE90[v1]) {
            break;
        }

        v1++;
    }

    v2 = 0;

    while (Unk_ov14_0222EE78[v2] != 0xffff) {
        if (param1->unk_354.unk_8A[param1->unk_354.unk_02].unk_00 == Unk_ov14_0222EE78[v2]) {
            break;
        }

        v2++;
    }

    if ((Unk_ov14_0222EE78[v2] != 0xffff) || ((param1->unk_354.unk_8A[param1->unk_354.unk_02].unk_03 > 1) && (Unk_ov14_0222EE90[v1] == 0xffff))) {
        v7 = param1->unk_354.unk_7B;

        for (v1 = 0; v1 < 2; v1++) {
            for (v0 = 0; v0 < 6; v0++) {
                v6[v0] = ov16_02252060(param1, v7, 10 + v0, NULL);
            }

            ov14_02222D7C(param0, param1, v7, &param1->unk_2D40[v7].unk_0C[0], &v4[0], param1->unk_2D40[v7].unk_78, &v6[0], ov16_02255A4C(param1, v7), param1->unk_2D40[v7].unk_88.unk_04_19, v5);

            v7 = ov16_0223E258(param0, param1->unk_354.unk_7B);

            if (v1 == 0) {
                v3 = v4[param1->unk_354.unk_01];
            }

            for (v0 = 0; v0 < 4; v0++) {
                if (v4[v0] > v3) {
                    break;
                }
            }

            if (v0 == 4) {
                param1->unk_354.unk_08 = 2;
            } else {
                param1->unk_354.unk_08 = 1;
                break;
            }
        }
    } else {
        param1->unk_354.unk_08 = 0;
    }
}

static void ov14_022227A4 (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    int v0;
    int v1;
    int v2;

    ov14_02222D24(param1, 1);

    v0 = ov14_02222CF0(param1);
    v1 = ov14_02222CF0(param1);

    GF_ASSERT(v0 != 1);
    GF_ASSERT(v0 != 0);

    v2 = ov14_02222D34(param1, v0);

    if (param1->unk_3108 & sub_020787CC(v2)) {
        ov14_02222D24(param1, v1);
    }
}

static void ov14_022227F4 (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    int v0;
    int v1;
    int v2;

    ov14_02222D24(param1, 1);

    v0 = ov14_02222CF0(param1);
    v1 = ov14_02222CF0(param1);

    GF_ASSERT(v0 != 1);
    GF_ASSERT(v0 != 0);

    v2 = ov14_02222D34(param1, v0);

    if ((param1->unk_3108 & sub_020787CC(v2)) == 0) {
        ov14_02222D24(param1, v1);
    }
}

static void ov14_02222844 (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    u8 v0;
    int v1;

    ov14_02222D24(param1, 1);

    v1 = ov14_02222CF0(param1);
    v0 = ov14_02222D34(param1, v1);

    param1->unk_354.unk_08 = param1->unk_2D40[v0].unk_7E_0;
}

static void ov14_0222287C (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    u8 v0;
    int v1;

    ov14_02222D24(param1, 1);

    v1 = ov14_02222CF0(param1);
    v0 = ov14_02222D34(param1, v1);

    if (param1->unk_2D40[v0].unk_88.unk_0C < param1->unk_150) {
        param1->unk_354.unk_08 = 0;
    } else {
        param1->unk_354.unk_08 = 1;
    }
}

static void ov14_022228C8 (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    u8 v0;
    int v1;

    ov14_02222D24(param1, 1);

    v1 = ov14_02222CF0(param1);
    v0 = ov14_02222D34(param1, v1);

    param1->unk_354.unk_08 = param1->unk_2D40[v0].unk_88.unk_00_21;
}

static void ov14_02222900 (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    ov14_02222D24(param1, 1);
    param1->unk_354.unk_08 = param0->unk_2C;
}

static void ov14_02222918 (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    u8 v0;
    int v1;

    ov14_02222D24(param1, 1);

    v1 = ov14_02222CF0(param1);
    v0 = ov14_02222D34(param1, v1);

    param1->unk_354.unk_08 = param1->unk_3124[v0];
}

static void ov14_0222294C (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    ov14_02222D24(param1, 1);
    param1->unk_354.unk_08 = param1->unk_354.unk_8A[param1->unk_354.unk_08].unk_04;
}

static void ov14_0222296C (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    ov14_02222D24(param1, 1);
    param1->unk_354.unk_08 = param1->unk_354.unk_8A[param1->unk_354.unk_08].unk_03;
}

static void ov14_0222298C (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    ov14_02222D24(param1, 1);
    param1->unk_354.unk_08 = param1->unk_354.unk_8A[param1->unk_354.unk_08].unk_00;
}

static void ov14_022229AC (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    u8 v0;
    int v1;

    ov14_02222D24(param1, 1);

    v1 = ov14_02222CF0(param1);
    v0 = ov14_02222D34(param1, v1);

    if ((param1->unk_305C[v0] != 182) && (param1->unk_305C[v0] != 197) && (param1->unk_305C[v0] != 203)) {
        param1->unk_354.unk_08 = 0;
    } else {
        param1->unk_354.unk_08 = param1->unk_2D40[v0].unk_88.unk_00_11;
    }
}

static void ov14_02222A08 (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    int v0;

    ov14_02222D24(param1, 1);
    v0 = ov14_02222CF0(param1);
    ov14_02222C28(param0, param1, v0);
}

static void ov14_02222A28 (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    int v0;

    ov14_02222D24(param1, 1);
    v0 = ov14_02222CF0(param1);
    ov14_02222D24(param1, v0);
}

static void ov14_02222A44 (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    ov14_02222D24(param1, 1);

    if (ov14_02222C60(param0, param1) == 1) {
        return;
    }

    param1->unk_354.unk_10 |= 0x1;
}

static void ov14_02222A6C (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    int v0;
    int v1;

    ov14_02222D24(param1, 1);

    v0 = ov14_02222CF0(param1);
    v1 = ov14_02222CF0(param1);

    switch (v0) {
    case 0x0:
        if (param1->unk_2D40[param1->unk_354.unk_7B].unk_34 > param1->unk_2D40[param1->unk_354.unk_7C].unk_34) {
            ov14_02222D24(param1, v1);
        }
        break;
    case 0x1:
        if (param1->unk_2D40[param1->unk_354.unk_7B].unk_34 < param1->unk_2D40[param1->unk_354.unk_7C].unk_34) {
            ov14_02222D24(param1, v1);
        }
        break;
    case 0x2:
        if (param1->unk_2D40[param1->unk_354.unk_7B].unk_34 == param1->unk_2D40[param1->unk_354.unk_7C].unk_34) {
            ov14_02222D24(param1, v1);
        }
        break;
    default:
        break;
    }
}

static void ov14_02222B10 (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    int v0;

    ov14_02222D24(param1, 1);
    v0 = ov14_02222CF0(param1);

    if (param1->unk_2D40[param1->unk_354.unk_7C].unk_88.unk_00_8) {
        ov14_02222D24(param1, v0);
    }
}

static void ov14_02222B48 (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    int v0;

    ov14_02222D24(param1, 1);

    v0 = ov14_02222CF0(param1);

    if (param1->unk_2D40[param1->unk_354.unk_7C].unk_88.unk_00_8 == 0) {
        ov14_02222D24(param1, v0);
    }
}

static void ov14_02222B80 (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    int v0;

    ov14_02222D24(param1, 1);

    v0 = ov14_02222CF0(param1);

    if ((param1->unk_354.unk_7B & 1) == (param1->unk_354.unk_7C & 1)) {
        ov14_02222D24(param1, v0);
    }
}

static void ov14_02222BB4 (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    u8 v0;
    int v1;
    int v2;

    ov14_02222D24(param1, 1);

    v1 = ov14_02222CF0(param1);
    v2 = ov14_02222CF0(param1);
    v0 = ov14_02222D34(param1, v1);

    if (param1->unk_2D40[v0].unk_88.unk_00_31) {
        ov14_02222D24(param1, v2);
    }
}

static void ov14_02222BF8 (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    u8 v0;
    int v1;

    ov14_02222D24(param1, 1);

    v1 = ov14_02222CF0(param1);
    v0 = ov14_02222D34(param1, v1);

    param1->unk_354.unk_08 = ov16_02255A4C(param1, v0);
}

static void ov14_02222C28 (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1, int param2)
{
    param1->unk_354.unk_58[param1->unk_354.unk_78++] = param1->unk_2138;
    ov14_02222D24(param1, param2);

    GF_ASSERT(param1->unk_354.unk_78 <= 8);
}

static BOOL ov14_02222C60 (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    if (param1->unk_354.unk_78) {
        param1->unk_354.unk_78--;
        param1->unk_2138 = param1->unk_354.unk_58[param1->unk_354.unk_78];
        return 1;
    } else {
        return 0;
    }
}

static void ov14_02222C88 (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1)
{
    int v0;

    for (v0 = 0; v0 < 4; v0++) {
        if (param1->unk_354.unk_1C[param1->unk_354.unk_7C][v0] == param1->unk_307C[param1->unk_354.unk_7C]) {
            break;
        }

        if (param1->unk_354.unk_1C[param1->unk_354.unk_7C][v0] == 0) {
            param1->unk_354.unk_1C[param1->unk_354.unk_7C][v0] = param1->unk_307C[param1->unk_354.unk_7C];
            break;
        }
    }
}

static int ov14_02222CF0 (UnkStruct_ov16_0224B9DC * param0)
{
    int v0;

    v0 = param0->unk_2134[param0->unk_2138];
    param0->unk_2138++;

    return v0;
}

static int ov14_02222D10 (UnkStruct_ov16_0224B9DC * param0, int param1)
{
    return param0->unk_2134[param0->unk_2138 + param1];
}

static void ov14_02222D24 (UnkStruct_ov16_0224B9DC * param0, int param1)
{
    param0->unk_2138 += param1;
}

static u8 ov14_02222D34 (UnkStruct_ov16_0224B9DC * param0, u8 param1)
{
    u8 v0;

    switch (param1) {
    case 1:
        v0 = param0->unk_354.unk_7B;
        break;
    case 0:
    default:
        v0 = param0->unk_354.unk_7C;
        break;
    case 3:
        v0 = param0->unk_354.unk_7B ^ 2;
        break;
    case 2:
        v0 = param0->unk_354.unk_7C ^ 2;
        break;
    }

    return v0;
}

static s32 ov14_02222D7C (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1, int param2, u16 * param3, s32 * param4, u16 param5, u8 * param6, int param7, int param8, int param9)
{
    int v0, v1;
    int v2;
    int v3;
    int v4, v5;
    u32 v6;
    s32 v7;
    u8 v8;

    v7 = 0;

    for (v0 = 0; v0 < 4; v0++) {
        v1 = 0;

        while (Unk_ov14_0222EE90[v1] != 0xffff) {
            if (param1->unk_354.unk_8A[param3[v0]].unk_00 == Unk_ov14_0222EE90[v1]) {
                break;
            }

            v1++;
        }

        v2 = 0;

        while (Unk_ov14_0222EE78[v2] != 0xffff) {
            if (param1->unk_354.unk_8A[param3[v0]].unk_00 == Unk_ov14_0222EE78[v2]) {
                break;
            }

            v2++;
        }

        if ((Unk_ov14_0222EE78[v2] != 0xffff) || ((param3[v0] != 0) && (Unk_ov14_0222EE90[v1] == 0xffff) && (param1->unk_354.unk_8A[param3[v0]].unk_03 > 1))) {
            if (param9 == 1) {
                v8 = param1->unk_354.unk_18[v0];
            } else {
                v8 = 100;
            }

            param4[v0] = ov14_02222E84(param0, param1, param3[v0], param5, param6, param2, param7, param8, v8);
        } else {
            param4[v0] = 0;
        }
    }

    for (v0 = 0; v0 < 4; v0++) {
        if (v7 < param4[v0]) {
            v7 = param4[v0];
        }
    }

    return v7;
}

static const u16 Unk_ov14_0222EE60[][2] = {
    {0x64, 0x14},
    {0xFA, 0x28},
    {0x1F4, 0x3C},
    {0x3E8, 0x50},
    {0x7D0, 0x64},
    {0xFFFF, 0xFFFF}
};

static s32 ov14_02222E84 (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1, u16 param2, u16 param3, u8 * param4, int param5, int param6, int param7, u8 param8)
{
    int v0;
    int v1;
    int v2;
    int v3;
    u32 v4;
    s32 v5;

    v0 = ov16_0223E208(param0, param1->unk_354.unk_7C);
    v5 = 0;
    v1 = 0;
    v2 = 0;
    v4 = 0;

    switch (param2) {
    case 363:
        if ((param6 != 103) && (param7 == 0)) {
            v1 = ov16_0225B0FC(param1, param3, 11);

            if (v1) {
                v2 = ov16_0225B0FC(param1, param3, 12);
            } else {
                v2 = 0;
            }
        }
        break;
    case 449:
        if ((param6 != 103) && (param7 == 0)) {
            v1 = 0;

            switch (ov16_0225B0FC(param1, param3, 1)) {
            case 131:
                v2 = 1;
                break;
            case 134:
                v2 = 2;
                break;
            case 132:
                v2 = 3;
                break;
            case 133:
                v2 = 4;
                break;
            case 137:
                v2 = 5;
                break;
            case 136:
                v2 = 6;
                break;
            case 138:
                v2 = 7;
                break;
            case 141:
                v2 = 8;
                break;
            case 126:
                v2 = 10;
                break;
            case 127:
                v2 = 11;
                break;
            case 129:
                v2 = 12;
                break;
            case 128:
                v2 = 13;
                break;
            case 135:
                v2 = 14;
                break;
            case 130:
                v2 = 15;
                break;
            case 139:
                v2 = 16;
                break;
            case 140:
                v2 = 17;
                break;
            default:
                v2 = 0;
                break;
            }
        }
        break;
    case 237:
        v1 = ((param4[0] & 2) >> 1) | ((param4[1] & 2) >> 0) | ((param4[2] & 2) << 1) | ((param4[3] & 2) << 2) | ((param4[4] & 2) << 3) | ((param4[5] & 2) << 4);
        v2 = ((param4[0] & 1) >> 0) | ((param4[1] & 1) << 1) | ((param4[2] & 1) << 2) | ((param4[3] & 1) << 3) | ((param4[4] & 1) << 4) | ((param4[5] & 1) << 5);
        v1 = v1 * 40 / 63 + 30;
        v2 = (v2 * 15 / 63) + 1;

        if (v2 >= 9) {
            v2++;
        }
        break;
    case 360:
        v1 = 1 + 25 * param1->unk_21F0[param1->unk_354.unk_7C] / param1->unk_21F0[param5];

        if (v1 > 150) {
            v1 = 150;
        }

        v2 = 0;
        break;
    case 82:
        v5 = 40;
        break;
    case 69:
    case 101:
        v5 = param1->unk_2D40[param5].unk_34;
        break;
    case 149:
        v5 = param1->unk_2D40[param5].unk_34 * (ov16_0223F4BC(param0) % 11 + 5) / 10;
        break;
    case 216:
        v1 = param1->unk_2D40[param5].unk_35 * 10 / 25;
        v2 = 0;
        break;
    case 218:
        v1 = (255 - param1->unk_2D40[param5].unk_35) * 10 / 25;
        v2 = 0;
        break;
    case 222:
        v1 = ov16_0223F4BC(param0) % 100;

        if (v1 < 5) {
            v1 = 10;
        } else if (v1 < 15) {
            v1 = 30;
        } else if (v1 < 35) {
            v1 = 50;
        } else if (v1 < 65) {
            v1 = 70;
        } else if (v1 < 85) {
            v1 = 90;
        } else if (v1 < 95) {
            v1 = 110;
        } else {
            v1 = 150;
        }

        v2 = 0;
        break;
    case 49:
        v5 = 20;
        break;
    case 67:
    case 447:
    {
        int v6;

        v6 = 0;

        while (Unk_ov14_0222EE60[v6][0] != 0xffff) {
            if (Unk_ov14_0222EE60[v6][0] >= param1->unk_2D40[param1->unk_354.unk_7C].unk_20) {
                break;
            }

            v6++;
        }

        if (Unk_ov14_0222EE60[v6][0] != 0xffff) {
            v1 = Unk_ov14_0222EE60[v6][1];
        } else {
            v1 = 120;
        }
    }
    break;
    default:
        v1 = 0;
        v2 = 0;
        break;
    }

    if (v5 == 0) {
        v5 = ov16_0225A280(param0, param1, param2, param1->unk_1BC[v0], param1->unk_180, v1, v2, param5, param1->unk_354.unk_7C, 1);
    } else {
        param1->unk_213C |= 0x800;
    }

    v5 = ov16_02254FA8(param0, param1, param2, v2, param5, param1->unk_354.unk_7C, v5, &v4);
    param1->unk_213C &= (0x800 ^ 0xffffffff);

    if (v4 & (0x8 | 0x800 | 0x100000 | 0x40000)) {
        v5 = 0;
    } else {
        v5 = ov16_022563F8(v5 * param8, 100);
    }

    return v5;
}

static int ov14_0222327C (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1, int param2, int param3)
{
    int v0;

    switch (param3) {
    case 363:
        v0 = ov16_02258B2C(param1, param2);
        break;
    case 449:
        switch (ov16_02258AB8(param1, param2)) {
        case 131:
            v0 = 1;
            break;
        case 134:
            v0 = 2;
            break;
        case 132:
            v0 = 3;
            break;
        case 133:
            v0 = 4;
            break;
        case 137:
            v0 = 5;
            break;
        case 136:
            v0 = 6;
            break;
        case 138:
            v0 = 7;
            break;
        case 141:
            v0 = 8;
            break;
        case 126:
            v0 = 10;
            break;
        case 127:
            v0 = 11;
            break;
        case 129:
            v0 = 12;
            break;
        case 128:
            v0 = 13;
            break;
        case 135:
            v0 = 14;
            break;
        case 130:
            v0 = 15;
            break;
        case 139:
            v0 = 16;
            break;
        case 140:
            v0 = 17;
            break;
        default:
            v0 = 0;
            break;
        }
        break;
    case 237:
        v0 = ((param1->unk_2D40[param2].unk_14_0 & 1) >> 0) | ((param1->unk_2D40[param2].unk_14_5 & 1) << 1) | ((param1->unk_2D40[param2].unk_14_10 & 1) << 2) | ((param1->unk_2D40[param2].unk_14_15 & 1) << 3) | ((param1->unk_2D40[param2].unk_14_20 & 1) << 4) | ((param1->unk_2D40[param2].unk_14_25 & 1) << 5);
        v0 = (v0 * 15 / 63) + 1;

        if (v0 >= 9) {
            v0++;
        }
        break;
    case 311:
        if ((ov16_022555A4(param0, param1, 8, 0, 13) == 0) && (ov16_022555A4(param0, param1, 8, 0, 76) == 0)) {
            if (param1->unk_180 & (0x3 | 0xc | 0x30 | 0xc0 | 0x8000)) {
                if (param1->unk_180 & 0x3) {
                    v0 = 11;
                }

                if (param1->unk_180 & 0xc) {
                    v0 = 5;
                }

                if (param1->unk_180 & 0x30) {
                    v0 = 10;
                }

                if (param1->unk_180 & 0xc0) {
                    v0 = 15;
                }
            }
        }
        break;
    default:
        v0 = 0;
        break;
    }

    return v0;
}

static BOOL ov14_022233F4 (UnkStruct_ov16_0224B9DC * param0, int param1)
{
    if ((param0->unk_2D40[param1].unk_80 & 0x20) && (param0->unk_2D40[param1].unk_88.unk_00_13 == 0)) {
        param0->unk_21A4[param1] = 6;
        return 1;
    }

    return 0;
}

static BOOL ov14_0222342C (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1, int param2)
{
    int v0, v1;
    u16 v2;
    int v3;
    u32 v4;
    Pokemon * v5;

    if (ov16_0223DF0C(param0) & 0x2) {
        return 0;
    }

    if (param1->unk_2D40[param2 ^ 1].unk_27 == 25) {
        for (v0 = 0; v0 < 4; v0++) {
            v2 = param1->unk_2D40[param2].unk_0C[v0];
            v3 = ov14_0222327C(param0, param1, param2, v2);

            if (v2) {
                v4 = 0;
                ov16_02254FA8(param0, param1, v2, v3, param2, param2 ^ 1, 0, &v4);

                if (v4 & 0x2) {
                    return 0;
                }
            }
        }

        for (v0 = 0; v0 < ov16_0223DF60(param0, param2); v0++) {
            v5 = ov16_0223DFAC(param0, param2, v0);

            if ((GetMonData(v5, MON_DATA_163, NULL) != 0) && (GetMonData(v5, MON_DATA_SPECIES_EGG, NULL) != 0) && (GetMonData(v5, MON_DATA_SPECIES_EGG, NULL) != 494) && (v0 != param1->unk_219C[param2])) {
                for (v1 = 0; v1 < 4; v1++) {
                    v2 = GetMonData(v5, MON_DATA_MOVE1 + v1, NULL);
                    v3 = ov16_0225BE3C(param0, param1, v5, v2);

                    if (v2) {
                        v4 = 0;
                        ov16_022552D4(param1, v2, v3, GetMonData(v5, MON_DATA_10, NULL), ov16_02255A4C(param1, param2 ^ 1), ov16_02258AB8(param1, param2 ^ 1), ov16_02252060(param1, param2 ^ 1, 27, NULL), ov16_02252060(param1, param2 ^ 1, 28, NULL), &v4);

                        if (v4 & 0x2) {
                            if ((ov16_0223F4BC(param0) % 3) < 2) {
                                param1->unk_21A4[param2] = v0;
                                return 1;
                            }
                        }
                    }
                }
            }
        }
    }

    return 0;
}

static BOOL ov14_022235F0 (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1, int param2)
{
    int v0, v1;
    u8 v2, v3;
    u8 v4, v5;
    u16 v6;
    int v7;
    u32 v8;
    int v9, v10;
    int v11;
    Pokemon * v12;

    if (ov16_0223DF0C(param0) & 0x2) {
        v2 = 0;
        v3 = 2;
    } else {
        v2 = 0;
        v3 = 0;
    }

    v11 = 0;

    for (v0 = 0; v0 < 4; v0++) {
        v6 = param1->unk_2D40[param2].unk_0C[v0];
        v7 = ov14_0222327C(param0, param1, param2, v6);

        if ((v6) && (param1->unk_354.unk_8A[v6].unk_03)) {
            v11++;
            v8 = 0;

            if (param1->unk_2D40[v2].unk_4C) {
                ov16_02254FA8(param0, param1, v6, v7, param2, v2, 0, &v8);
            }

            if ((v8 & 0x8) == 0) {
                return 0;
            }

            v8 = 0;

            if (param1->unk_2D40[v3].unk_4C) {
                ov16_02254FA8(param0, param1, v6, v7, param2, v3, 0, &v8);
            }

            if ((v8 & 0x8) == 0) {
                return 0;
            }
        }
    }

    if (v11 < 2) {
        return 0;
    }

    v4 = param2;

    if ((ov16_0223DF0C(param0) & 0x10) || (ov16_0223DF0C(param0) & 0x8)) {
        v5 = v4;
    } else {
        v5 = ov16_0223E258(param0, param2);
    }

    v9 = 0;
    v10 = ov16_0223DF60(param0, param2);

    for (v0 = v9; v0 < v10; v0++) {
        v12 = ov16_0223DFAC(param0, param2, v0);

        if ((GetMonData(v12, MON_DATA_163, NULL) != 0) && (GetMonData(v12, MON_DATA_SPECIES_EGG, NULL) != 0) && (GetMonData(v12, MON_DATA_SPECIES_EGG, NULL) != 494) && (v0 != param1->unk_219C[v4]) && (v0 != param1->unk_219C[v5]) && (v0 != param1->unk_21A4[v4]) && (v0 != param1->unk_21A4[v5])) {
            for (v1 = 0; v1 < 4; v1++) {
                v6 = GetMonData(v12, MON_DATA_MOVE1 + v1, NULL);
                v7 = ov16_0225BE3C(param0, param1, v12, v6);

                if ((v6) && (param1->unk_354.unk_8A[v6].unk_03)) {
                    v8 = 0;

                    if (param1->unk_2D40[v2].unk_4C) {
                        ov16_022552D4(param1, v6, v7, GetMonData(v12, MON_DATA_10, NULL), ov16_02255A4C(param1, v2), ov16_02258AB8(param1, v2), ov16_02252060(param1, v2, 27, NULL), ov16_02252060(param1, v2, 28, NULL), &v8);
                    }

                    if (v8 & 0x2) {
                        if ((ov16_0223F4BC(param0) % 3) < 2) {
                            param1->unk_21A4[param2] = v0;
                            return 1;
                        }
                    }

                    v8 = 0;

                    if (param1->unk_2D40[v3].unk_4C) {
                        ov16_022552D4(param1, v6, v7, GetMonData(v12, MON_DATA_10, NULL), ov16_02255A4C(param1, v3), ov16_02258AB8(param1, v3), ov16_02252060(param1, v3, 27, NULL), ov16_02252060(param1, v3, 28, NULL), &v8);
                    }

                    if (v8 & 0x2) {
                        if ((ov16_0223F4BC(param0) % 3) < 2) {
                            param1->unk_21A4[param2] = v0;
                            return 1;
                        }
                    }
                }
            }
        }
    }

    for (v0 = v9; v0 < v10; v0++) {
        v12 = ov16_0223DFAC(param0, param2, v0);

        if ((GetMonData(v12, MON_DATA_163, NULL) != 0) && (GetMonData(v12, MON_DATA_SPECIES_EGG, NULL) != 0) && (GetMonData(v12, MON_DATA_SPECIES_EGG, NULL) != 494) && (v0 != param1->unk_219C[v4]) && (v0 != param1->unk_219C[v5]) && (v0 != param1->unk_21A4[v4]) && (v0 != param1->unk_21A4[v5])) {
            for (v1 = 0; v1 < 4; v1++) {
                v6 = GetMonData(v12, MON_DATA_MOVE1 + v1, NULL);
                v7 = ov16_0225BE3C(param0, param1, v12, v6);

                if ((v6) && (param1->unk_354.unk_8A[v6].unk_03)) {
                    v8 = 0;

                    if (param1->unk_2D40[v2].unk_4C) {
                        ov16_022552D4(param1, v6, v7, GetMonData(v12, MON_DATA_10, NULL), ov16_02255A4C(param1, v2), ov16_02258AB8(param1, v2), ov16_02252060(param1, v2, 27, NULL), ov16_02252060(param1, v2, 28, NULL), &v8);
                    }

                    if (v8 == 0) {
                        if ((ov16_0223F4BC(param0) % 2) == 0) {
                            param1->unk_21A4[param2] = v0;
                            return 1;
                        }
                    }

                    v8 = 0;

                    if (param1->unk_2D40[v3].unk_4C) {
                        ov16_022552D4(param1, v6, v7, GetMonData(v12, MON_DATA_10, NULL), ov16_02255A4C(param1, v3), ov16_02258AB8(param1, v3), ov16_02252060(param1, v3, 27, NULL), ov16_02252060(param1, v3, 28, NULL), &v8);
                    }

                    if (v8 == 0) {
                        if ((ov16_0223F4BC(param0) % 2) == 0) {
                            param1->unk_21A4[param2] = v0;
                            return 1;
                        }
                    }
                }
            }
        }
    }

    return 0;
}

static BOOL ov14_02223B34 (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1, int param2, u8 param3)
{
    int v0;
    u32 v1;
    u8 v2;
    u8 v3;
    u16 v4;
    int v5;

    v3 = ov16_0223E1F8(param0, param2) ^ 1;
    v2 = ov16_0223E1C4(param0, v3);

    if ((param1->unk_3108 & sub_020787CC(v2)) == 0) {
        for (v0 = 0; v0 < 4; v0++) {
            v4 = param1->unk_2D40[param2].unk_0C[v0];
            v5 = ov14_0222327C(param0, param1, param2, v4);

            if (v4) {
                v1 = 0;
                ov16_02254FA8(param0, param1, v4, v5, param2, v2, 0, &v1);

                if (v1 & 0x2) {
                    if (param3) {
                        return 1;
                    } else {
                        if (ov16_0223F4BC(param0) % 10 != 0) {
                            return 1;
                        }
                    }
                }
            }
        }
    }

    if ((ov16_0223DF0C(param0) & 0x2) == 0) {
        return 0;
    }

    v2 = ov16_0223E258(param0, v2);

    if ((param1->unk_3108 & sub_020787CC(v2)) == 0) {
        for (v0 = 0; v0 < 4; v0++) {
            v4 = param1->unk_2D40[param2].unk_0C[v0];
            v5 = ov14_0222327C(param0, param1, param2, v4);

            if (v4) {
                v1 = 0;
                ov16_02254FA8(param0, param1, v4, v5, param2, v2, 0, &v1);

                if (v1 & 0x2) {
                    if (param3) {
                        return 1;
                    } else {
                        if (ov16_0223F4BC(param0) % 10 != 0) {
                            return 1;
                        }
                    }
                }
            }
        }
    }

    return 0;
}

static BOOL ov14_02223C8C (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1, int param2)
{
    int v0;
    u8 v1, v2;
    u8 v3;
    u8 v4;
    u8 v5;
    int v6, v7;
    Pokemon * v8;

    if ((ov14_02223B34(param0, param1, param2, 1)) && (ov16_0223F4BC(param0) % 3 != 0)) {
        return 0;
    }

    if (param1->unk_3064[param2] == 0) {
        return 0;
    }

    if (param1->unk_354.unk_8A[param1->unk_3064[param2]].unk_03 == 0) {
        return 0;
    }

    v3 = param1->unk_354.unk_8A[param1->unk_3064[param2]].unk_04;

    if (v3 == 10) {
        v5 = 18;
    } else if (v3 == 11) {
        v5 = 11;
    } else if (v3 == 13) {
        v5 = 10;
    } else {
        return 0;
    }

    if (ov16_02255A4C(param1, param2) == v5) {
        return 0;
    }

    v1 = param2;

    if ((ov16_0223DF0C(param0) & 0x10) || (ov16_0223DF0C(param0) & 0x8)) {
        v2 = v1;
    } else {
        v2 = ov16_0223E258(param0, param2);
    }

    v6 = 0;
    v7 = ov16_0223DF60(param0, param2);

    for (v0 = v6; v0 < v7; v0++) {
        v8 = ov16_0223DFAC(param0, param2, v0);

        if ((GetMonData(v8, MON_DATA_163, NULL) != 0) && (GetMonData(v8, MON_DATA_SPECIES_EGG, NULL) != 0) && (GetMonData(v8, MON_DATA_SPECIES_EGG, NULL) != 494) && (v0 != param1->unk_219C[v1]) && (v0 != param1->unk_219C[v2]) && (v0 != param1->unk_21A4[v1]) && (v0 != param1->unk_21A4[v2])) {
            v4 = GetMonData(v8, MON_DATA_10, NULL);

            if ((v5 == v4) && (ov16_0223F4BC(param0) & 1)) {
                param1->unk_21A4[param2] = v0;
                return 1;
            }
        }
    }

    return 0;
}

static BOOL ov14_02223E10 (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1, int param2, u32 param3, u8 param4)
{
    int v0, v1;
    u8 v2, v3;
    u16 v4;
    int v5;
    u32 v6;
    int v7, v8;
    Pokemon * v9;

    if ((param1->unk_3064[param2] == 0) || (param1->unk_306C[param2] == 0xff)) {
        return 0;
    }

    if (param1->unk_354.unk_8A[param1->unk_3064[param2]].unk_03 == 0) {
        return 0;
    }

    v2 = param2;

    if ((ov16_0223DF0C(param0) & 0x10) || (ov16_0223DF0C(param0) & 0x8)) {
        v3 = v2;
    } else {
        v3 = ov16_0223E258(param0, param2);
    }

    v7 = 0;
    v8 = ov16_0223DF60(param0, param2);

    for (v0 = v7; v0 < v8; v0++) {
        v9 = ov16_0223DFAC(param0, param2, v0);

        if ((GetMonData(v9, MON_DATA_163, NULL) != 0) && (GetMonData(v9, MON_DATA_SPECIES_EGG, NULL) != 0) && (GetMonData(v9, MON_DATA_SPECIES_EGG, NULL) != 494) && (v0 != param1->unk_219C[v2]) && (v0 != param1->unk_219C[v3]) && (v0 != param1->unk_21A4[v2]) && (v0 != param1->unk_21A4[v3])) {
            v6 = 0;
            v5 = ov14_0222327C(param0, param1, param1->unk_306C[param2], param1->unk_3064[param2]);

            ov16_022552D4(param1, param1->unk_3064[param2], v5, ov16_02255A4C(param1, param1->unk_306C[param2]), GetMonData(v9, MON_DATA_10, NULL), ov16_0225B0FC(param1, GetMonData(v9, MON_DATA_HELD_ITEM, NULL), 1), GetMonData(v9, MON_DATA_177, NULL), GetMonData(v9, MON_DATA_178, NULL), &v6);

            if (v6 & param3) {
                for (v1 = 0; v1 < 4; v1++) {
                    v4 = GetMonData(v9, MON_DATA_MOVE1 + v1, NULL);
                    v5 = ov16_0225BE3C(param0, param1, v9, v4);

                    if (v4) {
                        v6 = 0;
                        ov16_022552D4(param1, v4, v5, GetMonData(v9, MON_DATA_10, NULL), ov16_02255A4C(param1, param1->unk_306C[param2]), ov16_02258AB8(param1, param1->unk_306C[param2]), ov16_02252060(param1, param1->unk_306C[param2], 27, NULL), ov16_02252060(param1, param1->unk_306C[param2], 28, NULL), &v6);

                        if (v6 & 0x2) {
                            if ((ov16_0223F4BC(param0) % param4) == 0) {
                                param1->unk_21A4[param2] = v0;
                                return 1;
                            }
                        }
                    }
                }
            }
        }
    }

    return 0;
}

static BOOL ov14_02224070 (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1, int param2)
{
    if (((param1->unk_2D40[param2].unk_6C & 0x7) == 0) || (ov16_02255A4C(param1, param2) != 30) || (param1->unk_2D40[param2].unk_4C < (param1->unk_2D40[param2].unk_50 / 2))) {
        return 0;
    }

    if (param1->unk_3064[param2] == 0) {
        if (ov16_0223F4BC(param0) & 1) {
            param1->unk_21A4[param2] = 6;
            return 1;
        }
    }

    if (param1->unk_354.unk_8A[param1->unk_3064[param2]].unk_03 == 0) {
        if (ov16_0223F4BC(param0) & 1) {
            param1->unk_21A4[param2] = 6;
            return 1;
        }
    }

    if (ov14_02223E10(param0, param1, param2, 0x8, 1)) {
        return 1;
    }

    if (ov14_02223E10(param0, param1, param2, 0x4, 1)) {
        return 1;
    }

    if (ov16_0223F4BC(param0) & 1) {
        param1->unk_21A4[param2] = 6;
        return 1;
    }

    return 0;
}

static BOOL ov14_0222416C (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1, int param2)
{
    int v0;
    u8 v1;

    v1 = 0;

    for (v0 = 0x0; v0 < 0x8; v0++) {
        if (param1->unk_2D40[param2].unk_18[v0] > 6) {
            v1 += param1->unk_2D40[param2].unk_18[v0] - 6;
        }
    }

    return v1 >= 4;
}

static BOOL ov14_022241A4 (UnkStruct_0207ADB4 * param0, UnkStruct_ov16_0224B9DC * param1, int param2)
{
    int v0;
    int v1;
    u8 v2, v3, v4;
    int v5, v6;
    Pokemon * v7;

    if ((param1->unk_2D40[param2].unk_70 & (0xe000 | 0x4000000)) || (param1->unk_2D40[param2].unk_80 & 0x400) || (ov16_022555A4(param0, param1, 2, param2, 23)) || (ov16_022555A4(param0, param1, 2, param2, 71)) || ((ov16_022555A4(param0, param1, 6, param2, 42) && ((ov16_02252060(param1, param2, 27, NULL) == 8) || ((ov16_02252060(param1, param2, 28, NULL) == 8)))))) {
        return 0;
    }

    v1 = 0;
    v2 = param2;

    if ((ov16_0223DF0C(param0) & 0x10) || (ov16_0223DF0C(param0) & 0x8)) {
        v3 = v2;
    } else {
        v3 = ov16_0223E258(param0, param2);
    }

    v5 = 0;
    v6 = ov16_0223DF60(param0, param2);

    for (v0 = v5; v0 < v6; v0++) {
        v7 = ov16_0223DFAC(param0, param2, v0);

        if ((GetMonData(v7, MON_DATA_163, NULL) != 0) && (GetMonData(v7, MON_DATA_SPECIES_EGG, NULL) != 0) && (GetMonData(v7, MON_DATA_SPECIES_EGG, NULL) != 494) && (v0 != param1->unk_219C[v2]) && (v0 != param1->unk_219C[v3]) && (v0 != param1->unk_21A4[v2]) && (v0 != param1->unk_21A4[v3])) {
            v1++;
        }
    }

    if (v1) {
        if (ov14_022233F4(param1, param2)) {
            return 1;
        }

        if (ov14_0222342C(param0, param1, param2)) {
            return 1;
        }

        if (ov14_022235F0(param0, param1, param2)) {
            return 1;
        }

        if (ov14_02223C8C(param0, param1, param2)) {
            return 1;
        }

        if (ov14_02224070(param0, param1, param2)) {
            return 1;
        }

        if (ov14_02223B34(param0, param1, param2, 0)) {
            return 0;
        }

        if (ov14_0222416C(param0, param1, param2)) {
            return 0;
        }

        if (ov14_02223E10(param0, param1, param2, 0x8, 2)) {
            return 1;
        }

        if (ov14_02223E10(param0, param1, param2, 0x4, 3)) {
            return 1;
        }
    }

    return 0;
}

int ov14_022243BC (UnkStruct_0207ADB4 * param0, int param1)
{
    int v0;
    u8 v1, v2;
    u32 v3;
    int v4, v5;
    Pokemon * v6;
    UnkStruct_ov16_0224B9DC * v7;

    v7 = param0->unk_30;
    v3 = ov16_0223DF0C(param0);

    if ((v3 & 0x1) || ((ov16_0223E208(param0, param1) == 0))) {
        if (ov14_022241A4(param0, v7, param1)) {
            if (v7->unk_21A4[param1] == 6) {
                if ((v0 = ov16_0225BA88(param0, param1)) == 6) {
                    v1 = param1;

                    if ((v3 & 0x10) || (v3 & 0x8)) {
                        v2 = v1;
                    } else {
                        v2 = ov16_0223E258(param0, param1);
                    }

                    v4 = 0;
                    v5 = ov16_0223DF60(param0, param1);

                    for (v0 = v4; v0 < v5; v0++) {
                        v6 = ov16_0223DFAC(param0, param1, v0);

                        if ((GetMonData(v6, MON_DATA_163, NULL) != 0) && (v0 != v7->unk_219C[v1]) && (v0 != v7->unk_219C[v2]) && (v0 != v7->unk_21A4[v1]) && (v0 != v7->unk_21A4[v2])) {
                            break;
                        }
                    }
                }

                v7->unk_21A4[param1] = v0;
            }

            return 3;
        }

        if (ov14_022244B0(param0, param1)) {
            return 2;
        }
    }

    return 1;
}

BOOL ov14_022244B0 (UnkStruct_0207ADB4 * param0, int param1)
{
    int v0;
    u8 v1 = 0;
    u16 v2;
    u8 v3;
    BOOL v4;
    u8 * v5;
    Party * v6;
    Pokemon * v7;
    UnkStruct_ov16_0224B9DC * v8;

    v8 = param0->unk_30;
    v8->unk_354.unk_7F[param1 >> 1] = 0;

    v4 = 0;

    if (((param0->unk_2C & ((0x2 | 0x1) | 0x8 | 0x40)) == ((0x2 | 0x1) | 0x8 | 0x40)) && (ov16_0223E1F8(param0, param1) == 4)) {
        return v4;
    }

    if (v8->unk_2D40[param1].unk_80 & 0x4000000) {
        return v4;
    }

    v6 = ov16_0223DF20(param0, param1);

    for (v0 = 0; v0 < Party_GetCurrentCount(v6); v0++) {
        v7 = Party_GetPokemonBySlotIndex(v6, v0);

        if ((GetMonData(v7, MON_DATA_163, NULL) != 0) && (GetMonData(v7, MON_DATA_SPECIES_EGG, NULL) != 0) && (GetMonData(v7, MON_DATA_SPECIES_EGG, NULL) != 494)) {
            v1++;
        }
    }

    for (v0 = 0; v0 < 4; v0++) {
        if ((v0 == 0) || (v1 <= v8->unk_354.unk_79[param1 >> 1] - v0 + 1)) {
            v2 = v8->unk_354.unk_48[param1 >> 1][v0];

            if (v2 == 0) {
                continue;
            }

            if (v2 == 23) {
                if ((v8->unk_2D40[param1].unk_4C < (v8->unk_2D40[param1].unk_50 / 4)) && (v8->unk_2D40[param1].unk_4C)) {
                    v8->unk_354.unk_7D[param1 >> 1] = 0;
                    v4 = 1;
                }
            } else if (ov16_0225B0FC(v8, v2, 38)) {
                v3 = ov16_0225B0FC(v8, v2, 54);

                if (v3) {
                    if ((v8->unk_2D40[param1].unk_4C) && ((v8->unk_2D40[param1].unk_4C < (v8->unk_2D40[param1].unk_50 / 4)) || ((v8->unk_2D40[param1].unk_50 - v8->unk_2D40[param1].unk_4C) > v3))) {
                        v8->unk_354.unk_7D[param1 >> 1] = 1;
                        v4 = 1;
                    }
                }
            } else if (ov16_0225B0FC(v8, v2, 15)) {
                if (v8->unk_2D40[param1].unk_6C & 0x7) {
                    v8->unk_354.unk_7F[param1 >> 1] |= sub_020787CC(5);
                    v8->unk_354.unk_7D[param1 >> 1] = 2;
                    v4 = 1;
                }
            } else if (ov16_0225B0FC(v8, v2, 16)) {
                if ((v8->unk_2D40[param1].unk_6C & 0x8) || (v8->unk_2D40[param1].unk_6C & 0x80)) {
                    v8->unk_354.unk_7F[param1 >> 1] |= sub_020787CC(4);
                    v8->unk_354.unk_7D[param1 >> 1] = 2;
                    v4 = 1;
                }
            } else if (ov16_0225B0FC(v8, v2, 17)) {
                if (v8->unk_2D40[param1].unk_6C & 0x10) {
                    v8->unk_354.unk_7F[param1 >> 1] |= sub_020787CC(3);
                    v8->unk_354.unk_7D[param1 >> 1] = 2;
                    v4 = 1;
                }
            } else if (ov16_0225B0FC(v8, v2, 18)) {
                if (v8->unk_2D40[param1].unk_6C & 0x20) {
                    v8->unk_354.unk_7F[param1 >> 1] |= sub_020787CC(2);
                    v8->unk_354.unk_7D[param1 >> 1] = 2;
                    v4 = 1;
                }
            } else if (ov16_0225B0FC(v8, v2, 19)) {
                if (v8->unk_2D40[param1].unk_6C & 0x40) {
                    v8->unk_354.unk_7F[param1 >> 1] |= sub_020787CC(1);
                    v8->unk_354.unk_7D[param1 >> 1] = 2;
                    v4 = 1;
                }
            } else if (ov16_0225B0FC(v8, v2, 20)) {
                if (v8->unk_2D40[param1].unk_70 & 0x7) {
                    v8->unk_354.unk_7F[param1 >> 1] |= sub_020787CC(0);
                    v8->unk_354.unk_7D[param1 >> 1] = 2;
                    v4 = 1;
                }
            } else if ((v8->unk_2D40[param1].unk_88.unk_0C - v8->unk_150) >= 0) {
                if (ov16_0225B0FC(v8, v2, 27)) {
                    v8->unk_354.unk_7F[param1 >> 1] = 0x1;
                    v8->unk_354.unk_7D[param1 >> 1] = 3;
                    v4 = 1;
                } else if (ov16_0225B0FC(v8, v2, 28)) {
                    v8->unk_354.unk_7F[param1 >> 1] = 0x2;
                    v8->unk_354.unk_7D[param1 >> 1] = 3;
                    v4 = 1;
                } else if (ov16_0225B0FC(v8, v2, 29)) {
                    v8->unk_354.unk_7F[param1 >> 1] = 0x4;
                    v8->unk_354.unk_7D[param1 >> 1] = 3;
                    v4 = 1;
                } else if (ov16_0225B0FC(v8, v2, 30)) {
                    v8->unk_354.unk_7F[param1 >> 1] = 0x5;
                    v8->unk_354.unk_7D[param1 >> 1] = 3;
                    v4 = 1;
                } else if (ov16_0225B0FC(v8, v2, 31)) {
                    v8->unk_354.unk_7F[param1 >> 1] = 0x3;
                    v8->unk_354.unk_7D[param1 >> 1] = 3;
                    v4 = 1;
                } else if (ov16_0225B0FC(v8, v2, 32)) {
                    v8->unk_354.unk_7F[param1 >> 1] = 0x6;
                    v8->unk_354.unk_7D[param1 >> 1] = 3;
                    v4 = 1;
                } else if ((ov16_0225B0FC(v8, v2, 22)) && ((v8->unk_1BC[1] & 0x40) == 0)) {
                    v8->unk_354.unk_7D[param1 >> 1] = 4;
                    v4 = 1;
                }
            } else {
                v8->unk_354.unk_7D[param1 >> 1] = 5;
            }

            if (v4 == 1) {
                v8->unk_354.unk_82[param1 >> 1] = v2;
                v8->unk_354.unk_48[param1 >> 1][v0] = 0;
            }
        }
    }

    return v4;
}
