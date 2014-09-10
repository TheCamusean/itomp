#ifndef COMMON_H_
#define COMMON_H_

#include <Eigen/Dense>
#include <Eigen/StdVector>
#include <map>
#include <string>
#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <sstream>
#include <stddef.h>
#include <math.h>

#include <boost/shared_ptr.hpp>
#include <boost/scoped_ptr.hpp>
#include <boost/make_shared.hpp>

#include <Eigen/Core>

#include <itomp_cio_planner/util/itomp_debug.h>

#define ITOMP_DEFINE_SHARED_POINTERS(C) \
    typedef boost::shared_ptr<C> C##Ptr; \
    typedef boost::shared_ptr<const C> C##ConstPtr;

#define ITOMP_FORWARD_DECL(C) \
    class C; \
    ITOMP_DEFINE_SHARED_POINTERS(C)

inline int safeDoubleToInt(double a)
{
  return (int) (a + 1E-7);
}

#endif
