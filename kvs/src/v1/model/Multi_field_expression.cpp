

#include "huaweicloud/kvs/v1/model/Multi_field_expression.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




Multi_field_expression::Multi_field_expression()
{
    logic_ = "";
    logicIsSet_ = false;
    expressionsIsSet_ = false;
}

Multi_field_expression::~Multi_field_expression() = default;

void Multi_field_expression::validate()
{
}

bool Multi_field_expression::toBson(Builder &builder) const
{

    if (logicIsSet_ && !bson_append(builder, "logic", logic_)) {
        return false;
    }
    if (expressionsIsSet_ && !bson_append(builder, "expressions", expressions_)) {
        return false;
    }

    return true;
}

bool Multi_field_expression::fromBson(const Viewer &viewer)
{

    Viewer::Iterator it = viewer.begin();
    while (it != viewer.end()) {
        const std::string &key = it->key();
        
        if (key == "logic") {
            if (!bson_get(it, logic_)) {
                return false;
            }
            logicIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "expressions") {
            if (!bson_get(it, expressions_)) {
                return false;
            }
            expressionsIsSet_ = true;
            ++it;
            continue;
        }
        
        ++it;
    }

    return true;
}

std::string Multi_field_expression::getLogic() const
{
    return logic_;
}

void Multi_field_expression::setLogic(const std::string& value)
{
    logic_ = value;
    logicIsSet_ = true;
}

bool Multi_field_expression::logicIsSet() const
{
    return logicIsSet_;
}

void Multi_field_expression::unsetlogic()
{
    logicIsSet_ = false;
}

std::vector<Single_field_expression>& Multi_field_expression::getExpressions()
{
    return expressions_;
}

void Multi_field_expression::setExpressions(const std::vector<Single_field_expression>& value)
{
    expressions_ = value;
    expressionsIsSet_ = true;
}

bool Multi_field_expression::expressionsIsSet() const
{
    return expressionsIsSet_;
}

void Multi_field_expression::unsetexpressions()
{
    expressionsIsSet_ = false;
}

}
}
}
}
}


