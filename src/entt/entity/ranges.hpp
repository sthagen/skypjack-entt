#ifndef ENTT_ENTITY_RANGES_HPP
#define ENTT_ENTITY_RANGES_HPP

#include "../stl/version.hpp"

#if defined(__cpp_lib_ranges)
#    include "../stl/ranges.hpp"
#    include "fwd.hpp"

template<class... Args>
inline constexpr bool entt::stl::ranges::enable_borrowed_range<entt::basic_view<Args...>>{true};

template<class... Args>
inline constexpr bool entt::stl::ranges::enable_borrowed_range<entt::basic_group<Args...>>{true};

template<class... Args>
inline constexpr bool entt::stl::ranges::enable_view<entt::basic_view<Args...>>{true};

template<class... Args>
inline constexpr bool entt::stl::ranges::enable_view<entt::basic_group<Args...>>{true};

#endif

#endif
