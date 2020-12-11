#include <ultra64.h>

u8 D_16003FE0[] = "Non";
u8 D_16003FE4[] = "UPDATE_CHARS";
u8 D_16003FF4[] = "DRAW_CHARS";
u8 D_16004000[] = "UPDATE_DBOBJ";
u8 D_16004010[] = "DRAW_DBOBJ";
u8 D_1600401C[] = "TASK";
u8 D_16004024[] = "Task Exec";
u8 D_16004030[] = "Effects";
u8 D_16004038[] = "Update_frontend";
u8 D_16004048[] = "Draw_frontend";
u8 D_16004058[] = "Main-UpdateOncePerView";
u8 D_16004070[] = "Gfx-lockup";
u8 D_1600407C[] = "Maincode-lockup";
u8 D_1600408C[] = "Deliberate Lockup (Tm)";
u8 D_160040A4[] = "Scheduler";
u8 D_160040B0[] = "Audio timer";
u8 D_160040BC[] = "SCHEDULER_CPU_LOCKUP";
u8 D_160040D4[] = "NOT_ENOUGH_CUTSCENE_BITS";
u8 D_160040F0[] = "DODOWNLOAD_DATA_BIGGER_THAN_MEMORY_BUFFER";
u8 D_1600411C[] = "DODOWNLOAD_COMPRESSED_DATA_BIGGER_THAN_MEMORY_BUFFER";
u8 D_16004154[] = "DODOWNLOAD_SIZE_MISMATCH";
u8 D_16004170[] = "ZERO_SIZE_LEVEL_INFO_DOWNLOAD";
u8 D_16004190[] = "DB_OBJECT_INIT_NOT_ENOUGH_SPACE";

u8 D_160041B0[] = "NOT_ENOUGH_MEMORY_FOR_VISIBLE_TRI";
u8 D_160041D4[] = "MOVE_THINGY_ON_OBJECT";
u8 D_160041EC[] = "OUT_OF_MEMORY_DOWNLOADING_CHARACTER_TO_HEAP";
u8 D_16004218[] = "OUT_OF_MEMORY_DOWNLOADING_ANIMATION_TABLES";
u8 D_16004244[] = "OUT_OF_MEMORY_DOWNLOADING_CHARACTER_INFO_TABLES";
u8 D_16004274[] = "LIGHTING_HARDWARE_TOO_MANY_LIGHTS";
u8 D_16004298[] = "LIGHTING_HARDWARE_WRONG_NUMBER_OF_LIGHTS";

u8 D_160042C4[] = "TOO_MANY_CHARACTERS_TO_DECOMPRESS";
u8 D_160042E8[] = "LAST_DISPLAY_LIST_NOT_FREED";
u8 D_16004304[] = "HEAP_RAN_OUT_OF_MEMORY";
u8 D_1600431C[] = "HEAP_BLOCK_ERROR";
u8 D_16004330[] = "HEAP_SIZE_WRONG";

u8 D_16004340[] = "HEAP_ERROR";
u8 D_1600434C[] = "INVALID_TEXTURE_NUMBER";
u8 D_16004364[] = "TASK_OUT_OF_GLIST";
u8 D_16004378[] = "TASK_OUT_OF_SAFETY_BUFFER_GLIST";
u8 D_16004398[] = "TASK_TOO_MANY_COMMANDS_FOR_GLIST_SAFETY_BUFFER";
u8 D_160043C8[] = "DB_HITPOLY_INIT INC MAX TRI SPACE";
u8 D_160043EC[] = "DB_HITPOLY_INIT INC MAX TREE SPACE";

u8 D_16004400[] = "HITS.C OUT OF RANGE APD";
u8 D_16004418[] = "HEAP_LOW_PRI_TOO_MUCH";
u8 D_16004430[] = "SC STACK OVERFLOW";
u8 D_16004444[] = "WETCHARACTER MATRIX INDEX ORA";
u8 D_16004464[] = "CHARACTERNODE MATRIX INDEX ORA";
u8 D_16004484[] = "CHARACTER FIRE CONKER MATRIX";

u8 D_160044A4[] = "ABI LIST ERROR (see Mike)";
u8 D_160044C0[] = "AUDIO CACHE DMA NOT DONE (Mike)";
u8 D_160044E0[] = "AUDIO CACHE DMA START FAILED (Mike)";
u8 D_16004514[] = "EFFECTS STACK OVERFLOW (Andy)";
u8 D_16004534[] = "EFFECTS STACK UNDERFLOW (Andy)";
u8 D_16004554[] = "AUDIO STACK OVERFLOW (Mike)";

u8 D_16004570[] = "MALLOC FREE MISMATCH";
u8 D_16004588[] = "CHAREFFECT CORRUPTION";
u8 D_160045A0[] = "GFX LIST CHECK (Andy)";
u8 D_160045B8[] = "Interupt";
u8 D_160045C4[] = "TLB Modification";
u8 D_160045D8[] = "TLB Refill (l/i)";
u8 D_160045EC[] = "TLB Refill (s)";
u8 D_160045F8[] = "Addr Error (l/i)";
u8 D_16004610[] = "Addr Error (s)";
u8 D_16004620[] = "Bus Error (i)";
u8 D_16004630[] = "Bus Error (data)";
u8 D_16004644[] = "Syscall";
u8 D_1600464C[] = "Brk Point";
u8 D_16004658[] = "Reserved Inst";
u8 D_16004668[] = "Cpr     unusable";
u8 D_1600467C[] = "Arithmetic ovflo";
u8 D_16004690[] = "Trap";
u8 D_16004698[] = "---";
u8 D_1600469C[] = "Floating point";
u8 D_160046AC[] = "PRESS BUTTON";
u8 D_160046BC[] = "REGISTERS";
u8 D_160046C8[] = "STACK";
u8 D_160046D0[] = "MAIN MENU";
u8 D_160046DC[] = "CONTINUE";
u8 D_160046E8[] = "HOSTDEBUG";
u8 D_160046F4[] = "RETRY CODE";
u8 D_16004700[] = "Version";
u8 D_16004708[] = "Built";
u8 D_16004710[] = "Dec 19 2000";
u8 D_1600471C[] = "09:57:42";
u8 D_16004728[] = "Pc";
u8 D_1600472C[] = "Cause";
u8 D_16004734[] = "Sr";
u8 D_16004738[] = "Badvadr";
u8 D_16004740[] = "Thread";
u8 D_16004748[] = "Lockup_Now";
u8 D_16004754[] = "Inexact op";
u8 D_16004760[] = "Underflow";
u8 D_1600476C[] = "Overflow";
u8 D_16004778[] = "Div by 0";
u8 D_16004784[] = "Invalid op";
u8 D_16004790[] = "Unimplemented op";
u8 D_1600479C[] = "Fpcsr:";
u8 D_160047A4[] = "fp";
u8 D_160047A8[] = "STACK-VIEW";
u8 D_160047B4[] = ":";
u8 D_160047B8[] = "             ";
// u8 D_160047C4[] = "\0\0\0";
u8 D_160047D0[] = "NaN";
u8 D_160047D4[] = "%s%s%f";
// u8 D_160047DC[] = "NaN";
// u8 D_160047E0[] = "%s%s%f";
