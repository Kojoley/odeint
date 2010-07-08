/*
 boost header: BOOST_NUMERIC_ODEINT/algebra_dispatcher.hpp

 Copyright 2009 Karsten Ahnert
 Copyright 2009 Mario Mulansky
 Copyright 2009 Andre Bergner

 Distributed under the Boost Software License, Version 1.0.
 (See accompanying file LICENSE_1_0.txt or
 copy at http://www.boost.org/LICENSE_1_0.txt)
*/

#ifndef BOOST_BOOST_NUMERIC_ODEINT_ALGEBRA_DISPATCHER_HPP_INCLUDED
#define BOOST_BOOST_NUMERIC_ODEINT_ALGEBRA_DISPATCHER_HPP_INCLUDED

namespace boost {
namespace numeric {
namespace odeint {


/*
 * ToDo : Implement
 */
template< class Container , class Time >
struct algebra_dispatcher
{
	typedef Container container_type;
	typedef Time time_type;

	typedef standard_algebra< container_type > type;
};


} // odeint
} // numeric
} // boost


#endif //BOOST_BOOST_NUMERIC_ODEINT_ALGEBRA_DISPATCHER_HPP_INCLUDED
