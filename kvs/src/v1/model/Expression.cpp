

#include "huaweicloud/kvs/v1/model/Expression.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




Expression::Expression()
{
    singleKvExpressionIsSet_ = false;
    singleFieldExpressionIsSet_ = false;
    multiFieldExpressionIsSet_ = false;
}

Expression::~Expression() = default;

void Expression::validate()
{
}

bool Expression::toBson(Builder &builder) const
{

    if (singleKvExpressionIsSet_ && !bson_append(builder, "single_kv_expression", singleKvExpression_)) {
        return false;
    }
    if (singleFieldExpressionIsSet_ && !bson_append(builder, "single_field_expression", singleFieldExpression_)) {
        return false;
    }
    if (multiFieldExpressionIsSet_ && !bson_append(builder, "multi_field_expression", multiFieldExpression_)) {
        return false;
    }

    return true;
}

bool Expression::fromBson(const Viewer &viewer)
{

    Viewer::Iterator it = viewer.begin();
    while (it != viewer.end()) {
        const std::string &key = it->key();
        
        if (key == "single_kv_expression") {
            if (!bson_get(it, singleKvExpression_)) {
                return false;
            }
            singleKvExpressionIsSet_ = true;
            ++it;
            continue;
        }
        
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

Single_kv_expression Expression::getSingleKvExpression() const
{
    return singleKvExpression_;
}

void Expression::setSingleKvExpression(const Single_kv_expression& value)
{
    singleKvExpression_ = value;
    singleKvExpressionIsSet_ = true;
}

bool Expression::singleKvExpressionIsSet() const
{
    return singleKvExpressionIsSet_;
}

void Expression::unsetsingleKvExpression()
{
    singleKvExpressionIsSet_ = false;
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

}
}
}
}
}


