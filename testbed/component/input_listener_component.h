#pragma once

namespace testbed {

struct input_listener_component {
    enum class type {
        NONE,
        UP,
        DOWN,
        LEFT,
        RIGHT
    };

    type command{type::NONE};
};

} // namespace testbed
