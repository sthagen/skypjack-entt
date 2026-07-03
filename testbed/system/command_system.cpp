#include <component/input_listener_component.h>
#include <component/velocity_component.h>
#include <entt/entity/registry.hpp>
#include <system/command_system.h>

namespace testbed {

void command_system(entt::registry &registry) {
    for([[maybe_unused]] auto [entt, input, vel]: registry.view<input_listener_component, velocity_component>().each()) {
        switch(input.command) {
        case input_listener_component::type::UP:
            vel.dy = -1.0f;
            break;
        case input_listener_component::type::DOWN:
            vel.dy = 1.0f;
            break;
        case input_listener_component::type::LEFT:
            vel.dx = -1.0f;
            break;
        case input_listener_component::type::RIGHT:
            vel.dx = 1.0f;
            break;
        case input_listener_component::type::NONE:
            vel.dx = vel.dy = 0.0f;
            break;
        }
    }
}

} // namespace testbed
