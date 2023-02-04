#include "val_releasable.h"

#include <val/val_instance.h>

void ValReleasable::release(ValInstance *p_val_instance) {
    if (!p_val_instance->block_await) {
        p_val_instance->await_frame();
    }
}