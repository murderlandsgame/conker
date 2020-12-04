#ifndef VARIABLES_H
#define VARIABLES_H

#include "structs.h"


/* defined */

// 0x0002C200
extern f32 D_8002C200;
extern f32 D_8002C204;

// 0x0002C210
extern f32 D_8002C210;
extern f32 D_8002C214;
extern f32 D_8002C218;

// 0x0002C220
extern f32 D_8002C220;
extern f32 D_8002C224;
extern f32 D_8002C228;
extern f32 D_8002C22C;
// 0x0002C230
extern f32 D_8002C230;
extern f32 D_8002C234;
extern f32 D_8002C238;
// 0x0002C450
extern f32 D_8002C450;
extern f32 D_8002C454;
extern f32 D_8002C458;
// 0x0002C750
extern f32 D_8002C750;
// 0x0002C760
extern f32 D_8002C760;
extern f32 D_8002C764;
// 0x0002C770
extern f32 PI;
extern f32 D_8002C774;
extern f32 D_8002C778;
extern f32 D_8002C77C;
// 0x0002C780
extern f32 D_8002C780;
extern f32 D_8002C784;
// 0x0002C790
extern f32 D_8002C790;
// 0x0002C810
extern f32 D_8002C814;
// 0x0002C820
extern f32 D_8002C820;
// 0x0002C830
extern f32 D_8002C830;
extern f32 D_8002C834;
extern f32 D_8002C838;
// 0x0002C840
extern f64 D_8002C840; // double
extern f32 D_8002C848;

extern u32 D_80042450[512]; // chunk0 offsets

extern char D_8002C6B0[];
extern char D_8002C6DC[];

/* undefined */

extern OSThread *__osRunningThread;

// TODO: fix vram / whatever is preventing referencing function addresses by name
extern s32  D_100010F8;
extern s32 *D_10001194;
extern s32 *D_10002070;

extern s32 *D_10002E50;
extern s32 *D_100049E0;
extern s32 *D_100052A0;
extern s32  D_1000EE70;
extern s32  D_1000EF40;

extern s32  D_10009400;
extern s32  D_100097CC;
extern s32  D_10009980;
extern s32  D_10009B2C;
extern s32  D_10009B4C;
extern s32  D_10009B90;
extern s32  D_10009CBC;
extern s32  D_10009FFC;
extern s32  D_10012560;
extern s32  D_10012E04;
extern s32  D_10012F94;
extern s32  D_100131D8;
extern s32  D_10013598;
extern s32  D_1001E530;
extern s32 *D_10023850;
extern s32 *D_10023930;
extern s32  D_10026B10;
extern s32  D_100291A0;
extern s32  D_100290D0;
extern s32 *D_1002AAD0;
extern s32  D_1FC007FC;

extern struct14 *D_100071D0;


/* 80000000 */

extern s32  D_80000000;
extern s32  D_80000004;
extern s32  D_80000008;
extern s32  D_8000000C;

extern struct14 *D_80000080;
extern struct14 *D_80000100;
extern struct14 *D_80000180;

extern s32  D_80000300;
extern s32  D_80000308;
extern s32  D_8000030C;
extern u32  D_80000310;
extern s32  D_8000031C[16]; // 64 bytes

/* 80020000 */

extern u8   D_8002AAE0;
extern u8   D_8002AAE4;
extern s32  D_8002AAE8[2]; // framebuffer
extern u8   D_8002AB40;
extern OSViMode *D_8002AB90;
extern OSViMode *D_8002ABE0;
extern s32  D_8002AC30;
extern struct58 *D_8002AC50; // contains pointer to framebuffer
extern u8   D_8002AC54;
extern struct58 *D_8002AC58;
extern u8   D_8002AC5C;
extern s8   D_8002AC6C;
extern u8   D_8002AE40;
extern u32  D_8002AE44;
extern s32  D_8002AE48;
extern s32  D_8002AE4C;
extern s32  D_8002AE54;
extern s32  D_8003E368;
extern s32  D_8003E370;
extern s32  D_8003E388;
extern struct50 *D_8003E390[];
extern OSThread *D_8003E3A0;
extern s32  D_8003E640;

extern OSMesgQueue *D_8003E608;
extern OSMesg      *D_8003E620;
extern OSMesgQueue *D_8003E5D0;
extern OSMesg      *D_8003E5E8;
extern OSMesgQueue *D_80041298;
extern OSMesg      *D_800412B0;
extern OSMesgQueue *D_800416F0;
extern OSMesg      *D_80041708;

extern struct151* D_800417B0[];
extern u8 D_800418AC[];

extern u8 D_800419A0;
extern struct137 D_800419A8[12]; // 1200 bytes

extern s32  D_80044B20; // 253952 bytes, bunch of structs?
extern s32  D_8002B070;
extern struct138 D_8002B074[];
extern struct07  *D_8002BA40;
extern struct07  *D_8002BA44;
extern struct31 *D_8002BA20;
extern struct31 *D_8002BA24;
extern struct31 *D_8002BA28;
extern s16  D_8002BA30;
extern s32  D_8002BA2C;
extern s64  D_8002BD10;
extern s32  D_8002BD14;
extern s32  D_8002BD18;
extern s32  D_8002BD20; // init ok?
extern s32  D_8002BD60;

extern s32  D_8002D4B0;
extern s32 *D_8002D8B0;
extern s16  D_8002BC10[];
extern s16  D_8002BD0E[];

extern s32 D_8002B9D4;
extern s32 D_8002B9F4;

/* 80030000 */
extern OSThread *D_80031AE0;
extern OSThread *D_800318B0;

extern s32  D_80032B3F;
extern s32  D_8003333F;

extern s32  D_800354F8;
extern u32  *D_800354FC; // contains chunk0 offsets
extern s16  D_80035500;
extern OSThread *D_80035910;

extern s32 D_800364C4;
extern OSMesgQueue *D_80036B40;
extern OSMesg      *D_80036B58;
extern struct00 *D_80036B60;
extern s32  D_80036B70;
extern s32  D_80036B78;
extern s32  D_80036B80;
extern s32  D_80036B88;
extern s32  D_80036B8C;
extern s32  D_80036B90;
extern s32  D_80036B98;

extern u32  D_80038070;
extern u16  D_80038074;
extern u8   D_80038080;
extern u32  D_80038090;
extern u32  D_80038094;
extern u32  D_80038098;
extern u32  D_8003809C;
extern f32  D_800380A0;
extern f32  D_800380A4;
extern struct54 *D_800380B0;
extern struct54 *D_800380B4;
extern struct54 *D_800380B8;
extern struct54 *D_800380BC;

extern s32  D_800380C0;
extern s32  D_800380C4;
extern s32  D_800380C8;
extern s32  D_800380CC;
extern s32  D_800380D0;
extern s32  D_800380E0;
extern s32  D_800388B0;

extern OSMesg *gMessage0;
extern OSMesgQueue *gMessageQueue0;

extern OSMesg *gMessages[3];
extern OSMesgQueue gMessageQueue[3];

extern s32 D_80038904;
extern OSIoMesg D_80038950[];

extern OSMesgQueue *D_8003B1E8;
extern OSMesgQueue *D_8003B200;
extern OSMesgQueue *D_8003B218;

extern OSMesgQueue *D_8003B230;
extern s32  D_8003B234;
extern u8 D_8003B238;
extern u8 D_8003B239;
extern u8 D_8003B23A;
extern OSMesg      *D_8003B240;

// extern s32 *D_8003B264;
extern OSThread    *D_8003B6A0;
extern OSMesg      *D_8003B660;
extern OSMesg      *D_8003B670;
extern OSMesg      *D_8003B680;

extern OSMesgQueue *D_8003B9D0;
extern OSMesg      *D_8003B9E8;
extern OSThread    *D_8003B9F0;

extern u64 D_8003BC20;
extern u32 D_8003BC24;

extern u8  D_8003A570;
extern u8  D_8003A571;
extern u8  D_8003A572;
extern u8  D_8003A573;
extern u8  D_8003A574;
extern u8  D_8003A575;
extern u8  D_8003A580;
extern u8  D_8003A581;
extern u8  D_8003A582;
extern u8  D_8003A583;
extern u8  D_8003A584;
extern u8  D_8003A588;
extern u8  D_8003A5C8;

extern s32  D_8003BC30;
extern s32  D_8003BD30;
extern s32  D_8003BE30;
extern u8   D_8003BE50[];
extern u32  D_8003BE70;
extern u32  D_8003BE74;
extern s16  D_8003BE78;
extern s32  D_8003BE7C;

extern s32  D_8003C8E0;
extern struct26 *D_8003C900[];
extern struct14 *D_8003CD40;
extern struct108 D_8003CD48[];
extern s16  D_8003C910[];
extern u32  D_803F5000;
extern u32  D_803FE000;
extern u32  D_807F5000;
extern u32  D_807FE000;

extern s32  D_8003CA3C;
extern s32  D_8003CA48[];
extern struct149 D_8003CA58[];
extern s32  D_8003C90C;

/* 80040000 */
extern s32  D_80040000;
extern struct147 D_800406A0;
extern struct54 *D_800406A4;
extern struct54 *D_800406B0;
extern u8   D_800406B8;
extern u32  D_80040AC8;  // 1200 byte struct?
extern struct147 D_80040F78;
extern u8   D_80040F84;
extern s32  D_80040F88;
extern s32  D_80040F8C;
extern s32  D_80040F90;
extern struct146 D_80040F98[];
extern s32  D_80041F04;
extern s32  D_80041F08;
extern s32  D_80041F0C;
extern struct49 *D_80041F10[];
extern u32  D_80041F50;
extern s32  D_80041F54;
extern s32  D_80041F56;
extern f32  D_80041F58;
extern s32  D_80041F5C;
extern u8   D_80041F60;
extern u8   D_80041F61;
extern s8   D_80041FD8;
extern u8   D_80041FD9;
extern s32  D_80041FDC;
extern struct15 D_80041FE0[];
extern s32  D_80041FEC[];

extern f32  D_8002C200;
extern struct120 D_8002C240[];
extern f32  D_8002C3F8; // rodata
extern f32  D_8002C3FC; // rodata

extern s32  D_80042760;
extern s32  D_80042770;
extern s32  D_80042774;
extern s32  D_80042778;
extern s32  D_8004277C;
extern s32  D_800427A0;
extern s32  D_800427B0;
extern s16  D_800427F4;
extern struct120 D_800425E0[];
extern struct124 *D_80042800;
extern s32  D_80042804;
extern u16  D_800428B8[];
extern u8   D_800428C0;
extern u8   D_800428C1;
extern u8   D_800428C2;
extern u8  D_800428C4[];
extern u8  D_800428C6[];
extern u8  D_800428C8[];
extern s32  D_800428E0;
extern s32 *D_800428F8;

extern s32 D_80043B40[]; // 4064

/* 80080000 */
extern s32  D_80082B20;
extern u8   D_80082B40[];
extern u8   D_80082BB4;
extern u8   D_80082BC0;
extern void (*D_80082BFC[])(s32 arg0);
extern void (*D_80082D60[])(void);
extern void (*D_80082D90[])(void);
extern u8   D_80084064;
extern s32  D_80084300;
extern s32  D_800848B0;
extern s32  D_80082FA0;
extern s32  D_80082FA4;
extern void (*D_800844B0[])(s32 arg0);
extern void (*D_80082EA0[])(void);
extern void (*D_80082ECC[])(void);
extern void (*D_80082F40[])(void);

extern s8  D_80087260;
extern s8  D_8008726C;

extern struct115 D_8008B4A8[];
extern struct115 D_8008B4D0[];
extern struct115 D_8008B4D4[];

extern s32  D_8008FD90;
extern s32  D_8008FD94;
extern s8   D_8008FDA8;
extern u16  D_8008FDBC;
/* 800B0000 */
extern u8   D_800BE358[8];
extern s8   D_800BE3D8;
extern s8   D_800BE3D9;
extern s8   D_800BE3DA;
extern s8   D_800BE3DB;
extern s16  D_800BE3DC;
extern u8   D_800BE3DE;
extern u8   D_800BE3DF;
extern u8   D_800BE3E0;
extern s32  D_800BE3E8;
extern u8   D_800BE3EC;
extern struct162 *D_800BE3F8;

/* 800E0000 */
extern s32  D_800E0C20;
extern s32  D_800E0E04;
extern struct134 *D_800E0900[]; // probably not struct134
extern s32  D_800E0930;
extern s32  D_800E0934;
extern s32  D_800E0940;
extern u8   D_800E0A10;
extern s32  D_800E9D00;
extern struct54 D_800E9D10; // probably not struct54

/* 800A0000 */
extern f32 D_800A0310;
extern f32 D_800A0314;
extern f32 D_800A35AC;
extern s32 D_800AB3C8;

/* 800B0000 */
extern s32 D_800BE2B0[]; // type?

extern s32 D_800BE2D0;
extern u8  D_800BE616;
extern s8  D_800BE618;
extern s32 D_800BE620;
extern s32 D_800BE624;
extern struct140 D_800BE628[];
extern struct156 D_800BE760[];
extern OSMesgQueue *D_800BE900;
extern u8   D_800BE938;

extern u8   D_800BE93C[];

extern u16  D_800BE720[];
extern u8   D_800BE940[];
extern u8   D_800BE944[];
extern u8   D_800BE948[];
extern f32  D_800BE950[];
extern f32  D_800BE960[];
extern f32  D_800BE970[];
extern f32  D_800BE980[];

extern OSMesg      *D_800BE990;
extern u8   D_800BE9B4;
extern u8   D_800BE9C0;
extern s32  D_800BE9C4;
extern s32  D_800BE9E0; // OSMesg
extern s32  D_800BE9E4;
extern u8   D_800BE9ED;
extern s32  D_800BE9F4;
extern s32  D_800BE9F8;

extern struct14 D_800BE730;
extern s32 D_800BE748;
extern s32 D_800BE74E;
extern s32 D_800BE754;
extern s32 D_800BE75A;
/* 800C0000 */

extern u8  D_800C35C4;
extern u8  D_800C35C5;
extern u8  D_800C35EA;
extern u8  D_800C3638;
extern s32 D_800C3654;
extern u8  D_800C3663;
extern u8  D_800C3670;
extern u8  D_800C3671;
extern u8  D_800C3681;
extern u8  D_800C3682;
extern u8  D_800C3683;
extern u8  D_800C3C88;
extern u8  D_800C3C90;
extern s32 D_800C3C94;
extern struct163 D_800C3CA0[3];
extern s8  D_800C3E78;
extern u16 D_800C3E7C;
extern s32 D_800C3E80;
extern s32 D_800C3E84;
extern s32 D_800C3EE0;
extern s32 D_800C3FC0;
extern s32 D_800C3FC4;
extern s64 D_800C3A60[];
extern struct160 D_800C6650[];
extern s32 D_800C6654;
extern struct106 D_800C6660[];
extern s32 D_800C6860[];
extern u8  D_800C68A0;
extern u8  D_800C68A1;
extern u8  D_800C4000;
extern s32 D_800CBE00;
extern u8  D_800CBD60;
extern u8  D_800CBD61;
extern u8  D_800CBD62;
extern u8  D_800CBD63;
extern s32 D_800CBD64;
extern s16 D_800CBD70;
extern s16 D_800CBD72;
extern u8  D_800CBD74;
extern u32 D_800CBD78;
extern s16 D_800CBD7C;

extern f32 D_800CBD80;

extern s32 D_800CC288;
extern struct127 D_800CC2D0[26];
extern u8  D_800CC335;
extern u8  D_800CC37D;

extern struct127 *D_800CE370;

/* other */

extern OSMesgQueue D_80041E58[3];
extern struct117 D_80041EA0[3];

extern u8 D_80087280[];
extern u32 D_80087380;

extern u64 D_800885B0;
extern s32 D_80088720;
extern s32 D_80088730;
extern s32 D_80088750;
extern vertex D_80088724;
extern u8  D_80088B60;
extern s32 D_800894B0;
extern s32 D_80089520;
extern s32 D_80089524[]; // struct arrays?
extern s32 D_80089534[];
extern s16 D_80089550;
extern void (*D_80089C44[])(void);
extern void (*D_80089C54[])(void);

extern struct32 D_8008A0B4[];
extern s32  D_8008A084[];
extern u8  D_8008CEB0;
extern u8  D_8008CD00;
extern s32 D_8008CFFC[];

/* 8009 */
extern s32 D_800902B8;
extern s32 D_800902E4;
extern s32 D_800902E8;
extern s32 D_80090320;

extern s32 D_80091C04[];
extern s32 D_80091D20[];

// is this chunk0 rodata?
extern f32 D_800959E0;
extern f32 D_800959E4;
extern f32 D_800959E8;
extern f32 D_800959EC;
extern f32 D_80095B40;
extern f32 D_80095B44;
extern f32 D_80095B48;
extern f32 D_80095B4C;
extern f32 D_80095B50;
extern f32 D_80095B54;
extern f32 D_80095B70;
extern f32 D_80095BB8;
extern f32 D_80095BBC;
extern f32 D_80095BC0;
extern f32 D_80095BC4;
extern f32 D_80095BC8;
extern f32 D_80095BCC;
extern f32 D_80095BD0;
extern f32 D_80095BD4;
extern f32 D_80095BD8;

extern s32 D_80096210;
extern f32 D_80096214;
extern f32 D_80096218;
extern f32 D_8009621C;
extern f32 D_80096560;
extern f32 D_80096570;
extern u32 D_8009667C;
extern f32 D_800968C0;

extern f32 D_80099444;
extern f32 D_80099C34;

/* 800B */

extern s32 D_800B0DC0;
extern s32 D_800B0DC4;
extern s32 D_800B0DC8;
extern u8 *D_800B0DE0;
extern s32 D_800B0DE4;
extern struct104 *D_800B0DF0;
extern struct00 *D_800B0E00;
extern s32 D_800B0E04;

extern s32 D_800B0E58;
extern s32 D_800B0E5C;
extern struct105 *D_800B0E60[];

extern s32 D_800B87A0[];

extern s32 D_800BE4A0; // struct/array of size 0x3c
extern s32 D_800BE4E0;
extern u8 D_800BE500[5]; // might be a struct?
extern s32 D_800BE570;
extern u8  D_800BE574;
extern u8  D_800BE575;
extern s32 D_800BE5D0;
extern u8  D_800BE9A0;
extern s32 D_800BE9F0;

/* 800C */

extern s16 D_800C5A90[187]; // 374 bytes, 187 shorts
extern s32 D_800C5C08[187];
extern s32 D_800C6070[187];
extern s32 D_800C6360[187];
extern u8  D_800C67F0;
extern u8  D_800C67F1;


/* 800D */
extern f32 D_800D1550;
extern s32 D_800D1580;
extern s32 D_800D1588[187];  // 748 bytes
extern struct127 *D_800D154C;
extern u16 D_800D18A0;
extern u8  D_800D18A8;

extern s32 D_800D19A0;
extern struct124 *D_800D1C90[187]; // 748 bytes, 187 pointers
extern s32 D_800D1F80[187]; // 187 bytes long
extern s32 D_800D2040[187]; // 187 bytes long

extern s32 D_800D2138;

extern s32 D_800D23C0;

extern f32 D_800D2410[];
extern s32 D_800D2448;
extern s32 D_800D244C;
extern s8  D_800D2456;
extern u8  D_800D2457;
extern u8  D_800D2458;
extern s32 D_800D245C;
extern s32 D_800D2548;

extern u8  D_800D2C68;
extern s32 D_800D2C2C;

extern s32 D_800D2E50;
extern s8  D_800D2E60[];
extern s32 D_800D2E70; // struct/array of size 0xF0
extern u8  D_800D2E41;
extern u8  D_800D2E42;
extern u8  D_800D2E43;
extern u8  D_800D2E44;
extern u8  D_800D2E45;
extern struct102 *D_800D2E4C;

extern u8  D_800D2F3C;
extern s32 D_800D2F40;
extern s32 D_800D2F48;
extern f32 D_800D2DB0;

extern struct00 *D_800D3300;
extern s32 D_800D3668;
extern s32 D_800D366C;
extern s32 D_800D3858;

extern s32 D_800D98E0;
extern u8  D_800D987C;
extern s32 D_800D99D0[8];
extern struct134 *D_800D9A20;
extern struct134 *D_800D9A24;
extern struct134 *D_800D9AA0[]; // length 3?
extern u16 D_800D9AB0[4];
extern u8  D_800D9E64;
extern s16 D_800D9F58;
extern s16 D_800D9F5C;
extern u8  D_800D9F60;

extern s32 D_800DBDD8[];
extern s32 D_800DBDE8[];
extern s32 D_800DBDF8[];

extern s32 D_800DBE18[];
extern s32 D_800DBE1C;
extern s32 D_800DBE20;
extern s32 D_800DBE24;
extern s16 D_800DBE28;
extern s16 D_800DBE2A;
extern s16 D_800DBE2C;
extern s32 D_800DBE38;
extern s32 D_800DBE3C;
extern s32 D_800DBE4C;
extern s32 D_800DBE50;
extern s32 D_800DBE5C;
extern u8  D_800DBE62;
extern u8  D_800DBE63;
extern f32 D_800DBE64;
extern s32 D_800DBEF0;
extern struct131 D_800DBEF4[];
extern u8  D_800DBF00;
extern u8  D_800DBF88;
extern s32 D_800DBF8C;
extern s32 D_800DBF90;
extern struct108 *D_800DBFF0;
extern u8  D_800DBFF4[];

extern s32  D_800DC010;
extern s32 D_800DC020;
extern struct10 *D_800DC2A0; // TODO: find correct struct
extern s32 D_800DC2B0;
extern struct112 D_800DCC10[];
extern u8  D_800DCD30;
extern u8  D_800DCD31;
extern u8  D_800DCD32;
extern u8  D_800DCD33;
extern u8  D_800DCD34;
extern u8  D_800DCD35;
extern u8  D_800DCD36;
extern u8  D_800DCD37;
extern u8  D_800DCD38;
extern u8  D_800DCD39;
extern u8  D_800DCD3A;
extern u8  D_800DCD3B;
extern u8  D_800DCD3C;
extern u8  D_800DCD3D;
extern s32 D_800DCD40;
extern s32 D_800DCD78;
extern s32 D_800DCD7C;
extern s32 D_800DCD80;
extern s32 D_800DCD84;

extern struct100 *D_800DCD24;
extern struct100 *D_800DCD28;

extern u8   D_800DCDD0;
extern s8   D_800DD190;
extern u8   D_800DD198;

extern u8   D_800DD2C0;
extern u8   D_800DD2D0;
extern u8   D_800DD2A0;
extern u8   D_800DD2A1;
extern u8   D_800DD2A2;
extern u8   D_800DD2A3;

extern u8   D_800DD404;
extern u8   D_800DD405;
extern u8   D_800DD406;
extern s32  D_800DD410[2];
extern u8   D_800DD418;
extern u16  D_800DD444;
extern s32  D_800DD460[2];
extern s32  D_800DD478; // struct/array of size 0x618 (1560)

extern s32  D_800DDA90; // struct/array of size 0xf0
extern s32  D_800DDC00;
extern s32  D_800DDC08;
extern s32  D_800DDC04;
extern s32  D_800DDD10[];
extern s32  D_800DDD0C;
extern u8   D_800DDD1C;
extern s32  D_800DDD20;
extern u8   D_800DDD61;
extern s32  D_800DDD64;

extern u16  D_800DDE08;
extern u8   D_800DDE40;
extern u8   D_800DDDAC;
extern s32  D_800DDE28;
extern s32  D_800DDDB0;
extern u8   D_800DDE1C;
extern u8   D_800DDE20;
extern f32  D_800DDDC8;
extern f32  D_800DDDD8;
extern u8   D_800DDE3C;
extern u8   D_800DDDAD;
extern s32  D_800DDE2C;
extern s32  D_800DDDB4;
extern u8   D_800DDE1D;
extern u8   D_800DDE21;
extern f32  D_800DDDCC;
extern f32  D_800DDDDC;
extern u8   D_800DDE3D;
extern u8   D_800DDDAE;
extern s32  D_800DDE30;
extern s32  D_800DDDB8;
extern u8   D_800DDE1E;
extern u8   D_800DDE22;
extern f32  D_800DDDD0;
extern f32  D_800DDDE0;
extern u8   D_800DDE3E;
extern u8   D_800DDDAF;
extern s32  D_800DDE34;
extern s32  D_800DDDBC;
extern u8   D_800DDE1F;
extern u8   D_800DDE23;
extern f32  D_800DDDD4;
extern f32  D_800DDDE4;
extern u8   D_800DDE3F;
extern s32  D_800DDE18;
extern u8   D_800DDE38;



extern s32  D_800DF7C8[];

/* other */
extern s32  D_15000000;
extern s32  D_150EA904;
extern s32  D_150EB430;
extern s32  D_15103910;
extern s32  D_15103AA0;
extern s32  D_151FA130;

/* second TLB'd section */

extern s32  D_16001B8C; // a struct
extern s32  D_16003848[];
extern u16  D_1600388C;
extern s32  D_160038A0;
extern u8   D_160038A4;
extern s32  D_16003890;
extern u8   D_16003AF4;
extern s8   D_16003B1C;
extern s8   D_16003B28;
extern s32  D_1600389C;

extern s32  D_160046AC;
extern s32  D_16004728;
extern s32  D_1600472C;
extern s32  D_16004734;
extern s32  D_16004738;
extern s32  D_16004740;
extern s32  D_16004748;
extern s32  D_160047D0;
extern s32  D_160047D4;
extern s32  D_160047DC;
extern s32  D_160047E0;

/* what is this */
extern s16 D_BC000C02;



#endif
