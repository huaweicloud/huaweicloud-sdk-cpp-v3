

#include "huaweicloud/kvs/v1/model/SingleKvExpr.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




SingleKvExpr::SingleKvExpr()
{
    func_ = "";
    funcIsSet_ = false;
}

SingleKvExpr::~SingleKvExpr() = default;

void SingleKvExpr::validate()
{
}

bool SingleKvExpr::toBson(Builder &builder) const
{

    if (funcIsSet_ && !bson_append(builder, "Func", func_)) {
        return false;
    }

    return true;
}

bool SingleKvExpr::fromBson(const Viewer &viewer)
{

    Viewer::Iterator it = viewer.begin();
    while (it != viewer.end()) {
        const std::string &key = it->key();
        
        if (key == "Func") {
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

std::string SingleKvExpr::getFunc() const
{
    return func_;
}

void SingleKvExpr::setFunc(const std::string& value)
{
    func_ = value;
    funcIsSet_ = true;
}

bool SingleKvExpr::funcIsSet() const
{
    return funcIsSet_;
}

void SingleKvExpr::unsetfunc()
{
    funcIsSet_ = false;
}

}
}
}
}
}


