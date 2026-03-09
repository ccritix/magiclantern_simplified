#ifndef _fps_engio_per_cam_h_
#define _fps_engio_per_cam_h_

// Same as SX740, M50.  Don't know an easy way to find these on D8,
// they're kind of near SysgenSsg string, don't know if that's consistent.
// The CONFIRM_CHANGES address should be used by two very small funcs,
// one setting it to 0, the other to 1.
#define FPS_REGISTER_A 0xd0406198
#define FPS_REGISTER_B 0xd04061a4
#define FPS_REGISTER_CONFIRM_CHANGES 0xd0406190

int get_fps_register_a(void);
int get_fps_register_a_default(void);
int get_fps_register_b(void);

#endif
