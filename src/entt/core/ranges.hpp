#ifndef ENTT_CORE_RANGES_HPP
#define ENTT_CORE_RANGES_HPP

#include "../stl/version.hpp"

#if defined(__cpp_lib_ranges)
#    include "../stl/ranges.hpp"
#    include "iterator.hpp"

template<class... Args>
inline constexpr bool entt::stl::ranges::enable_borrowed_range<entt::iterable_adaptor<Args...>>{true};

template<class... Args>
inline constexpr bool entt::stl::ranges::enable_view<entt::iterable_adaptor<Args...>>{true};

#endif

#endif
