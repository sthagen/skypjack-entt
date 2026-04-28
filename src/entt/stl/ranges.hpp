#ifndef ENTT_STL_RANGES_HPP
#define ENTT_STL_RANGES_HPP

#include "../stl/version.hpp"

#if defined(__cpp_lib_ranges)
#    include <ranges>

/*! @cond ENTT_INTERNAL */
namespace entt::stl::ranges {

// nothing to import (yet)

} // namespace entt::stl::ranges

#    define ENTT_STL_RANGES std::ranges

/*! @endcond */

#endif

#endif
