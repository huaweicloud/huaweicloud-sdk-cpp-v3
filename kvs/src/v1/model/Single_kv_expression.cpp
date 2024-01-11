

#include "huaweicloud/kvs/v1/model/Single_kv_expression.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




Single_kv_expression::Single_kv_expression()
{
    func_ = "";
    funcIsSet_ = false;
}

Single_kv_expression::~Single_kv_expression() = default;

void Single_kv_expression::validate()
{
}

bool Single_kv_expression::toBson(Builder &builder) const
{

    if (funcIsSet_ && !bson_append(builder, "func", func_)) {
        return false;
    }

    return true;
}

bool Single_kv_expression::fromBson(const Viewer &viewer)
{

    Viewer::Iterator it = viewer.begin();
    while (it != viewer.end()) {
        const std::string &key = it->key();
        
        if (key == "func") {
            if (!bson_get(it, func_)) {
                return false;
            }
            funcIsSet_ = true;
            ++it;
            continue;
        }
        
        ++it;
    }

    return true;
}

std::string Single_kv_expression::getFunc() const
{
    return func_;
}

void Single_kv_expression::setFunc(const std::string& value)
{
    func_ = value;
    funcIsSet_ = true;
}

bool Single_kv_expression::funcIsSet() const
{
    return funcIsSet_;
}

void Single_kv_expression::unsetfunc()
{
    funcIsSet_ = false;
}

}
}
}
}
}


