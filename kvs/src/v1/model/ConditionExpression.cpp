

#include "huaweicloud/kvs/v1/model/ConditionExpression.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




ConditionExpression::ConditionExpression()
{
    singleFieldExprIsSet_ = false;
    multiFieldExprIsSet_ = false;
    singleKvExprIsSet_ = false;
}

ConditionExpression::~ConditionExpression() = default;

void ConditionExpression::validate()
{
}

bool ConditionExpression::toBson(Builder &builder) const
{

    if (singleFieldExprIsSet_ && !bson_append(builder, "SingleFieldExpr", singleFieldExpr_)) {
        return false;
    }
    if (multiFieldExprIsSet_ && !bson_append(builder, "MultiFieldExpr", multiFieldExpr_)) {
        return false;
    }
    if (singleKvExprIsSet_ && !bson_append(builder, "SingleKvExpr", singleKvExpr_)) {
        return false;
    }

    return true;
}

bool ConditionExpression::fromBson(const Viewer &viewer)
{

    Viewer::Iterator it = viewer.begin();
    while (it != viewer.end()) {
        const std::string &key = it->key();
        
        if (key == "SingleFieldExpr") {
            if (!bson_get(it, singleFieldExpr_)) {
                return false;
            }
            singleFieldExprIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "MultiFieldExpr") {
            if (!bson_get(it, multiFieldExpr_)) {
                return false;
            }
            multiFieldExprIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "SingleKvExpr") {
            if (!bson_get(it, singleKvExpr_)) {
                return false;
            }
            singleKvExprIsSet_ = true;
            ++it;
            continue;
        }
        
        ++it;
    }

    return true;
}

SingleFieldExpr ConditionExpression::getSingleFieldExpr() const
{
    return singleFieldExpr_;
}

void ConditionExpression::setSingleFieldExpr(const SingleFieldExpr& value)
{
    singleFieldExpr_ = value;
    singleFieldExprIsSet_ = true;
}

bool ConditionExpression::singleFieldExprIsSet() const
{
    return singleFieldExprIsSet_;
}

void ConditionExpression::unsetsingleFieldExpr()
{
    singleFieldExprIsSet_ = false;
}

MultiFieldExpr ConditionExpression::getMultiFieldExpr() const
{
    return multiFieldExpr_;
}

void ConditionExpression::setMultiFieldExpr(const MultiFieldExpr& value)
{
    multiFieldExpr_ = value;
    multiFieldExprIsSet_ = true;
}

bool ConditionExpression::multiFieldExprIsSet() const
{
    return multiFieldExprIsSet_;
}

void ConditionExpression::unsetmultiFieldExpr()
{
    multiFieldExprIsSet_ = false;
}

SingleKvExpr ConditionExpression::getSingleKvExpr() const
{
    return singleKvExpr_;
}

void ConditionExpression::setSingleKvExpr(const SingleKvExpr& value)
{
    singleKvExpr_ = value;
    singleKvExprIsSet_ = true;
}

bool ConditionExpression::singleKvExprIsSet() const
{
    return singleKvExprIsSet_;
}

void ConditionExpression::unsetsingleKvExpr()
{
    singleKvExprIsSet_ = false;
}

}
}
}
}
}


