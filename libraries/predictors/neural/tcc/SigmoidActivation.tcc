////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Project:  Embedded Learning Library (ELL)
//  File:     SigmoidActivation.tcc (neural)
//  Authors:  Byron Changuion
//
////////////////////////////////////////////////////////////////////////////////////////////////////

#include "SigmoidActivation.h"

// math
#include <cmath>

namespace ell
{
namespace predictors
{
namespace neural
{
    template <typename ElementType>
    ElementType SigmoidActivation<ElementType>::Apply(const ElementType input) const
    {
        ElementType output;
        if (input >= 0.0)
        {
            double exp_value = std::exp(-input);
            output = 1.0 / (1.0 + exp_value);
        }
        else
        {
            double exp_value = std::exp(input);
            output = exp_value / (1.0 + exp_value);
        }
        return output;
    }
}
}
}
