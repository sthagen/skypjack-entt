#ifndef ENTT_CORE_RANGES_HPP
#define ENTT_CORE_RANGES_HPP

#include "../stl/ranges.hpp"

#ifdef ENTT_HAS_RANGES
#    include "iterator.hpp"

template<class... Args>
inline constexpr bool entt::stl::ranges::enable_borrowed_range<entt::iterable_adaptor<Args...>>{true};

template<class... Args>
inline constexpr bool entt::stl::ranges::enable_view<entt::iterable_adaptor<Args...>>{true};

#endif

#endif
