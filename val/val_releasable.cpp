#include "val_releasable.hpp"

#include <val/val_instance.hpp>

namespace val {
    void ValReleasable::release(ValInstance *p_val_instance) {
        if (!p_val_instance->block_await) {
            p_val_instance->await_frame();
        }
    }
}