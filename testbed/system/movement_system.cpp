#include <application/context.h>
#include <component/position_component.h>
#include <component/velocity_component.h>
#include <entt/entity/registry.hpp>
#include <system/movement_system.h>

namespace testbed {

void movement_system(entt::registry &registry, const context &ctx, const double delta) {
    int width{};
    int height{};

    for(auto [entity, position, velocity]: registry.view<position_component, velocity_component>().each()) {
        position.x += (velocity.dx * delta) * (ctx.logical_width() / 10.);
        position.y += velocity.dy * delta * (ctx.logical_height() / 10.);
    }
}

} // namespace testbed
