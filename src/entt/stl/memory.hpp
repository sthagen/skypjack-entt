#ifndef ENTT_STL_MEMORY_HPP
#define ENTT_STL_MEMORY_HPP

#include <memory>
#include "../config/config.h"
#include "version.hpp"

/*! @cond ENTT_INTERNAL */
namespace entt::stl {

using std::addressof;
using std::allocate_shared;
using std::allocator;
using std::allocator_arg;
using std::allocator_arg_t;
using std::allocator_traits;
using std::enable_shared_from_this;
using std::make_shared;
using std::make_unique;
using std::pointer_traits;
using std::shared_ptr;
using std::static_pointer_cast;
using std::uninitialized_fill;
using std::unique_ptr;

} // namespace entt::stl

#ifndef ENTT_FORCE_STL
#    ifdef ENTT_HAS_VERSION
#        if defined(__cpp_lib_to_address)
#            define ENTT_HAS_TO_ADDRESS

namespace entt::stl {

using std::to_address;

} // namespace entt::stl

#        endif
#    endif
#endif

#ifndef ENTT_HAS_TO_ADDRESS
#    include "type_traits.hpp"

namespace entt::stl {

template<typename Type>
constexpr Type *to_address(Type *ptr) noexcept {
    static_assert(!is_function_v<Type>, "Invalid type");
    return ptr;
}

template<typename Type>
constexpr auto to_address(const Type &ptr) noexcept {
    if constexpr(requires { pointer_traits<Type>::to_address(ptr); }) {
        return pointer_traits<Type>::to_address(ptr);
    } else {
        return to_address(ptr.operator->());
    }
}

} // namespace entt::stl

#endif
/*! @endcond */

#endif
