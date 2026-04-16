#ifndef ENTT_STL_FUNCTIONAL_HPP
#define ENTT_STL_FUNCTIONAL_HPP

#include <functional>
#include "../config/config.h"
#include "version.hpp"

/*! @cond ENTT_INTERNAL */
namespace entt::stl {

using std::function;

} // namespace entt::stl

#ifndef ENTT_FORCE_STL
#    ifdef ENTT_HAS_VERSION
#        if defined(__cpp_lib_ranges)
#            define ENTT_HAS_IDENTITY

namespace entt::stl {

using std::identity;

} // namespace entt::stl

#        endif
#    endif
#endif

#ifndef ENTT_HAS_IDENTITY
#    include "utility.hpp"

namespace entt::stl {

struct identity {
    using is_transparent = void;

    template<typename Type>
    [[nodiscard]] constexpr Type &&operator()(Type &&value) const noexcept {
        return std::forward<Type>(value);
    }
};

} // namespace entt::stl

#endif
/*! @endcond */

#endif
