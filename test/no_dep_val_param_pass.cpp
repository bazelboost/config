
//  (C) Copyright Boost.org 1999. Permission to copy, use, modify, sell and
//  distribute this software is granted provided this copyright notice appears
//  in all copies. This software is provided "as is" without express or implied
//  warranty, and with no claim as to its suitability for any purpose.

// Test file for macro BOOST_NO_DEPENDENT_TYPES_IN_TEMPLATE_VALUE_PARAMETERS
// This file should compile, if it does not then
// BOOST_NO_DEPENDENT_TYPES_IN_TEMPLATE_VALUE_PARAMETERS needs to be defined.
// see boost_BOOST_NO_DEPENDENT_TYPES_IN_TEMPLATE_VALUE_PARAMETERS.cxx for more details

// Do not edit this file, it was generated automatically by
// ../tools/generate from boost_no_dep_val_param.cxx on
// Mon Jul 16 11:45:27  2001

#include <boost/config.hpp>
#include <boost/test/cpp_main.cpp>
#include "test.hpp"

#ifndef BOOST_NO_DEPENDENT_TYPES_IN_TEMPLATE_VALUE_PARAMETERS
#include "boost_no_dep_val_param.cxx"
#else
namespace boost_no_dependent_types_in_template_value_parameters = empty_boost;
#endif

int cpp_main( int, char *[] )
{
	return boost_no_dependent_types_in_template_value_parameters::test();
}	
	
