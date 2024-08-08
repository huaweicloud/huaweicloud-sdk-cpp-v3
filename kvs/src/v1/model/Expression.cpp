

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
    multiFieldExpressionIsSet_ = false;
    composedExpressionIsSet_ = false;
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
    if (multiFieldExpressionIsSet_ && !bson_append(builder, "multi_field_expression", multiFieldExpression_)) {
        return false;
    }
    if (composedExpressionIsSet_ && !bson_append(builder, "composed_expression", composedExpression_)) {
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
        
        if (key == "multi_field_expression") {
            if (!bson_get(it, multiFieldExpression_)) {
                return false;
            }
            multiFieldExpressionIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "composed_expression") {
            if (!bson_get(it, composedExpression_)) {
                return false;
            }
            composedExpressionIsSet_ = true;
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

Multi_field_expression Expression::getMultiFieldExpression() const
{
    return multiFieldExpression_;
}

void Expression::setMultiFieldExpression(const Multi_field_expression& value)
{
    multiFieldExpression_ = value;
    multiFieldExpressionIsSet_ = true;
}

bool Expression::multiFieldExpressionIsSet() const
{
    return multiFieldExpressionIsSet_;
}

void Expression::unsetmultiFieldExpression()
{
    multiFieldExpressionIsSet_ = false;
}

Composed_expression Expression::getComposedExpression() const
{
    return composedExpression_;
}

void Expression::setComposedExpression(const Composed_expression& value)
{
    composedExpression_ = value;
    composedExpressionIsSet_ = true;
}

bool Expression::composedExpressionIsSet() const
{
    return composedExpressionIsSet_;
}

void Expression::unsetcomposedExpression()
{
    composedExpressionIsSet_ = false;
}

}
}
}
}
}


