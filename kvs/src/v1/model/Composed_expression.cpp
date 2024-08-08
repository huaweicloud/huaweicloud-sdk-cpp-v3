

#include "huaweicloud/kvs/v1/model/Composed_expression.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




Composed_expression::Composed_expression()
{
    logic_ = "";
    logicIsSet_ = false;
    expressionsIsSet_ = false;
}

Composed_expression::~Composed_expression() = default;

void Composed_expression::validate()
{
}

bool Composed_expression::toBson(Builder &builder) const
{

    if (logicIsSet_ && !bson_append(builder, "logic", logic_)) {
        return false;
    }
    if (expressionsIsSet_ && !bson_append(builder, "expressions", expressions_)) {
        return false;
    }

    return true;
}

bool Composed_expression::fromBson(const Viewer &viewer)
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

std::string Composed_expression::getLogic() const
{
    return logic_;
}

void Composed_expression::setLogic(const std::string& value)
{
    logic_ = value;
    logicIsSet_ = true;
}

bool Composed_expression::logicIsSet() const
{
    return logicIsSet_;
}

void Composed_expression::unsetlogic()
{
    logicIsSet_ = false;
}

std::vector<Expression>& Composed_expression::getExpressions()
{
    return expressions_;
}

void Composed_expression::setExpressions(const std::vector<Expression>& value)
{
    expressions_ = value;
    expressionsIsSet_ = true;
}

bool Composed_expression::expressionsIsSet() const
{
    return expressionsIsSet_;
}

void Composed_expression::unsetexpressions()
{
    expressionsIsSet_ = false;
}

}
}
}
}
}


