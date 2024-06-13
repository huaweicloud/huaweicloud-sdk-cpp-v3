

#include "huaweicloud/kvs/v1/model/Expression.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




Expression::Expression()
{
    singleFieldExpressionIsSet_ = false;
}

Expression::~Expression() = default;

void Expression::validate()
{
}

bool Expression::toBson(Builder &builder) const
{

    if (singleFieldExpressionIsSet_ && !bson_append(builder, "single_field_expression", singleFieldExpression_)) {
        return false;
    }

    return true;
}

bool Expression::fromBson(const Viewer &viewer)
{

    Viewer::Iterator it = viewer.begin();
    while (it != viewer.end()) {
        const std::string &key = it->key();
        
        if (key == "single_field_expression") {
            if (!bson_get(it, singleFieldExpression_)) {
                return false;
            }
            singleFieldExpressionIsSet_ = true;
            ++it;
            continue;
        }
        
        ++it;
    }

    return true;
}

Single_field_expression Expression::getSingleFieldExpression() const
{
    return singleFieldExpression_;
}

void Expression::setSingleFieldExpression(const Single_field_expression& value)
{
    singleFieldExpression_ = value;
    singleFieldExpressionIsSet_ = true;
}

bool Expression::singleFieldExpressionIsSet() const
{
    return singleFieldExpressionIsSet_;
}

void Expression::unsetsingleFieldExpression()
{
    singleFieldExpressionIsSet_ = false;
}

}
}
}
}
}


