
#ifndef PARAMETERS_H
#define PARAMETERS_H

#include <string>

// Interface to an class which knows about parameters.
class parameters {
  public:
    virtual ~parameters() {}

    // Get the value of a parameter.  If parameter is not known, the
    // default value is returned.
    virtual std::string get_parameter(const std::string& key,
				      const std::string& deflt = "") = 0;
};

#endif

