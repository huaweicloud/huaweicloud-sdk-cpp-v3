

#include "huaweicloud/kvs/v1/model/Condition_expression.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




Condition_expression::Condition_expression()
{
    singleFieldExpressionIsSet_ = false;
    multiFieldExpressionIsSet_ = false;
}

Condition_expression::~Condition_expression() = default;

void Condition_expression::validate()
{
}

bool Condition_expression::toBson(Builder &builder) const
{

    if (singleFieldExpressionIsSet_ && !bson_append(builder, "single_field_expression", singleFieldExpression_)) {
        return false;
    }
    if (multiFieldExpressionIsSet_ && !bson_append(builder, "multi_field_expression", multiFieldExpression_)) {
        return false;
    }

    return true;
}

bool Condition_expression::fromBson(const Viewer &viewer)
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
        
        ++it;
    }

    return true;
}

Single_field_expression Condition_expression::getSingleFieldExpression() const
{
    return singleFieldExpression_;
}

void Condition_expression::setSingleFieldExpression(const Single_field_expression& value)
{
    singleFieldExpression_ = value;
    singleFieldExpressionIsSet_ = true;
}

bool Condition_expression::singleFieldExpressionIsSet() const
{
    return singleFieldExpressionIsSet_;
}

void Condition_expression::unsetsingleFieldExpression()
{
    singleFieldExpressionIsSet_ = false;
}

Multi_field_expression Condition_expression::getMultiFieldExpression() const
{
    return multiFieldExpression_;
}

void Condition_expression::setMultiFieldExpression(const Multi_field_expression& value)
{
    multiFieldExpression_ = value;
    multiFieldExpressionIsSet_ = true;
}

bool Condition_expression::multiFieldExpressionIsSet() const
{
    return multiFieldExpressionIsSet_;
}

void Condition_expression::unsetmultiFieldExpression()
{
    multiFieldExpressionIsSet_ = false;
}

}
}
}
}
}


