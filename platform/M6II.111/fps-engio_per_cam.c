#include "dryos.h"
#include "fps-engio_per_cam.h"

int get_fps_register_a(void)
{
    extern int _get_fps_register_a(void);
    return _get_fps_register_a();
}

int get_fps_register_a_default(void)
{
    // See 200D for longer comments
    return 1122 << 16;
}

int get_fps_register_b(void)
{
    extern int _get_fps_register_b(void);
    return _get_fps_register_b();
}
