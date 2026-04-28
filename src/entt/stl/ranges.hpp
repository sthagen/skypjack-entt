#ifndef ENTT_STL_RANGES_HPP
#define ENTT_STL_RANGES_HPP

#include "../stl/version.hpp"

#if defined(__cpp_lib_ranges)
#    include <ranges>

/*! @cond ENTT_INTERNAL */
namespace entt::stl::ranges {

using std::ranges::enable_borrowed_range;
using std::ranges::enable_view;

} // namespace entt::stl::ranges
/*! @endcond */

#endif

#endif
