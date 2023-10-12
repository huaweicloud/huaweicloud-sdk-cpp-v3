

#include "huaweicloud/kvs/v1/model/MultiFieldExpr.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




MultiFieldExpr::MultiFieldExpr()
{
    logic_ = "";
    logicIsSet_ = false;
    arrayIsSet_ = false;
}

MultiFieldExpr::~MultiFieldExpr() = default;

void MultiFieldExpr::validate()
{
}

bool MultiFieldExpr::toBson(Builder &builder) const
{

    if (logicIsSet_ && !bson_append(builder, "Logic", logic_)) {
        return false;
    }
    if (arrayIsSet_ && !bson_append(builder, "Array", array_)) {
        return false;
    }

    return true;
}

bool MultiFieldExpr::fromBson(const Viewer &viewer)
{

    Viewer::Iterator it = viewer.begin();
    while (it != viewer.end()) {
        const std::string &key = it->key();
        
        if (key == "Logic") {
            if (!bson_get(it, logic_)) {
                return false;
            }
            logicIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "Array") {
            if (!bson_get(it, array_)) {
                return false;
            }
            arrayIsSet_ = true;
            ++it;
            continue;
        }
        
        ++it;
    }

    return true;
}

std::string MultiFieldExpr::getLogic() const
{
    return logic_;
}

void MultiFieldExpr::setLogic(const std::string& value)
{
    logic_ = value;
    logicIsSet_ = true;
}

bool MultiFieldExpr::logicIsSet() const
{
    return logicIsSet_;
}

void MultiFieldExpr::unsetlogic()
{
    logicIsSet_ = false;
}

std::vector<SingleFieldExpr>& MultiFieldExpr::getArray()
{
    return array_;
}

void MultiFieldExpr::setArray(const std::vector<SingleFieldExpr>& value)
{
    array_ = value;
    arrayIsSet_ = true;
}

bool MultiFieldExpr::arrayIsSet() const
{
    return arrayIsSet_;
}

void MultiFieldExpr::unsetarray()
{
    arrayIsSet_ = false;
}

}
}
}
}
}


