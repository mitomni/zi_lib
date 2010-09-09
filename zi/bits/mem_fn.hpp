/*
 * AUTHORS:
 *   Aleksandar Zlateski <zlateski@mit.edu>
 *
 * Do not share without authors permission.
 */

#ifndef ZI_BITS_MEM_FN_HPP
#define ZI_BITS_MEM_FN_HPP 1

#include <zi/config/config.hpp>

#ifdef __GXX_EXPERIMENTAL_CXX0X__
#  include <functional>
#  define ZI_MEM_FN_NAMESPACE ::std
#else
#  if defined( ZI_USE_TR1 ) || defined( ZI_NO_BOOST )
#    include <tr1/functional>
#    define ZI_MEM_FN_NAMESPACE ::std::tr1
#  else
#    include <boost/mem_fn.hpp>
#    define ZI_MEM_FN_NAMESPACE ::boost
#  endif
#endif

namespace zi {

using ZI_MEM_FN_NAMESPACE::mem_fn;

} // namespace zi

#undef ZI_MEM_FN_NAMESPACE
#endif
