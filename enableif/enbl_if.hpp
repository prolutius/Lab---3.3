#pragma once
#include <type_traits>

namespace enbl_if
{
	template<bool ebl, typename _if = void>
	struct enable_if {};

	template <typename _if>
	struct enable_if<true, _if>
	{
		using Type = _if;
	};
}

template<typename A>
typename enbl_if::enable_if<std::is_floating_point<A>::value, A>::Type tenth(A value)
{
	return static_cast<int>((value - static_cast<int>(value)) * 10);
}

template<typename A>
typename enbl_if::enable_if<std::is_integral<A>::value, A>::Type tenth(A value)
{
	return 0;
}

template<typename A>
typename enbl_if::enable_if<std::is_floating_point<A>::value, A>::Type rounding(A value)
{
	return static_cast<int>(value);
}

template<typename A>
typename enbl_if::enable_if<std::is_integral<A>::value, A>::Type rounding(A value)
{
	return value;
}

template<typename A>
typename enbl_if::enable_if<std::is_signed<A>::value, A>::Type minus(A value)
{
	return -value;
}

template<typename A>
typename enbl_if::enable_if<!std::is_signed<A>::value, A>::Type minus(A value)
{
	return value;
}