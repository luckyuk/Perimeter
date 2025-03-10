
//  (C) Copyright John Maddock 2000. 
//  Use, modification and distribution are subject to the 
//  Boost Software License, Version 1.0. (See accompanying file 
//  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#include "test.hpp"
#include "check_integral_constant.hpp"
#ifdef TEST_STD
#  include <type_traits>
#else
#  include <boost/type_traits/has_trivial_assign.hpp>
#endif

TT_TEST_BEGIN(has_trivial_assign)

BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<bool>::value, true);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<bool const>::value, false);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<bool volatile>::value, false);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<bool const volatile>::value, false);

BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<signed char>::value, true);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<signed char const>::value, false);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<signed char volatile>::value, false);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<signed char const volatile>::value, false);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<unsigned char>::value, true);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<char>::value, true);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<unsigned char const>::value, false);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<char const>::value, false);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<unsigned char volatile>::value, false);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<char volatile>::value, false);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<unsigned char const volatile>::value, false);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<char const volatile>::value, false);

BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<unsigned short>::value, true);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<short>::value, true);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<unsigned short const>::value, false);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<short const>::value, false);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<unsigned short volatile>::value, false);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<short volatile>::value, false);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<unsigned short const volatile>::value, false);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<short const volatile>::value, false);

BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<unsigned int>::value, true);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<int>::value, true);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<unsigned int const>::value, false);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<int const>::value, false);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<unsigned int volatile>::value, false);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<int volatile>::value, false);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<unsigned int const volatile>::value, false);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<int const volatile>::value, false);

BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<unsigned long>::value, true);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<long>::value, true);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<unsigned long const>::value, false);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<long const>::value, false);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<unsigned long volatile>::value, false);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<long volatile>::value, false);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<unsigned long const volatile>::value, false);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<long const volatile>::value, false);

#ifdef BOOST_HAS_LONG_LONG

BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<unsigned long long>::value, true);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<long long>::value, true);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<unsigned long long const>::value, false);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<long long const>::value, false);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<unsigned long long volatile>::value, false);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<long long volatile>::value, false);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<unsigned long long const volatile>::value, false);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<long long const volatile>::value, false);

#endif

#ifdef BOOST_HAS_MS_INT64

BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<unsigned __int8>::value, true);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<__int8>::value, true);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<unsigned __int8 const>::value, false);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<__int8 const>::value, false);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<unsigned __int8 volatile>::value, false);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<__int8 volatile>::value, false);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<unsigned __int8 const volatile>::value, false);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<__int8 const volatile>::value, false);

BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<unsigned __int16>::value, true);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<__int16>::value, true);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<unsigned __int16 const>::value, false);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<__int16 const>::value, false);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<unsigned __int16 volatile>::value, false);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<__int16 volatile>::value, false);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<unsigned __int16 const volatile>::value, false);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<__int16 const volatile>::value, false);

BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<unsigned __int32>::value, true);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<__int32>::value, true);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<unsigned __int32 const>::value, false);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<__int32 const>::value, false);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<unsigned __int32 volatile>::value, false);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<__int32 volatile>::value, false);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<unsigned __int32 const volatile>::value, false);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<__int32 const volatile>::value, false);

BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<unsigned __int64>::value, true);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<__int64>::value, true);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<unsigned __int64 const>::value, false);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<__int64 const>::value, false);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<unsigned __int64 volatile>::value, false);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<__int64 volatile>::value, false);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<unsigned __int64 const volatile>::value, false);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<__int64 const volatile>::value, false);

#endif

BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<float>::value, true);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<float const>::value, false);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<float volatile>::value, false);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<float const volatile>::value, false);

BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<double>::value, true);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<double const>::value, false);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<double volatile>::value, false);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<double const volatile>::value, false);

BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<long double>::value, true);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<long double const>::value, false);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<long double volatile>::value, false);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<long double const volatile>::value, false);


BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<int>::value, true);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<void*>::value, true);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<int*const>::value, false);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<f1>::value, true);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<f2>::value, true);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<f3>::value, true);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<mf1>::value, true);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<mf2>::value, true);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<mf3>::value, true);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<mp>::value, true);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<cmf>::value, true);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<enum_UDT>::value, true);

BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<int&>::value, false);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<const int&>::value, false);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<int[2]>::value, true);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<int[3][2]>::value, true);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<int[2][4][5][6][3]>::value, true);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<UDT>::value, false);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<empty_UDT>::value, false);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<void>::value, true);
// cases we would like to succeed but can't implement in the language:
BOOST_CHECK_SOFT_INTEGRAL_CONSTANT(::tt::has_trivial_assign<empty_POD_UDT>::value, true, false);
BOOST_CHECK_SOFT_INTEGRAL_CONSTANT(::tt::has_trivial_assign<POD_UDT>::value, true, false);
BOOST_CHECK_SOFT_INTEGRAL_CONSTANT(::tt::has_trivial_assign<POD_union_UDT>::value, true, false);
BOOST_CHECK_SOFT_INTEGRAL_CONSTANT(::tt::has_trivial_assign<empty_POD_union_UDT>::value, true, false);

BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_trivial_assign<test_abc1>::value, false);

TT_TEST_END



