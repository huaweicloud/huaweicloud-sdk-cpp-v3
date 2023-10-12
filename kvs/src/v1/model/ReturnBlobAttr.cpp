

#include "huaweicloud/kvs/v1/model/ReturnBlobAttr.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




ReturnBlobAttr::ReturnBlobAttr()
{
    returnAttr_ = false;
    returnAttrIsSet_ = false;
}

ReturnBlobAttr::~ReturnBlobAttr() = default;

void ReturnBlobAttr::validate()
{
}

bool ReturnBlobAttr::toBson(Builder &builder) const
{

    if (returnAttrIsSet_ && !bson_append(builder, "ReturnAttr", returnAttr_)) {
        return false;
    }

    return true;
}

bool ReturnBlobAttr::fromBson(const Viewer &viewer)
{

    Viewer::Iterator it = viewer.begin();
    while (it != viewer.end()) {
        const std::string &key = it->key();
        
        if (key == "ReturnAttr") {
            if (!bson_get(it, returnAttr_)) {
                return false;
            }
            returnAttrIsSet_ = true;
            ++it;
            continue;
        }
        
        ++it;
    }

    return true;
}

bool ReturnBlobAttr::isReturnAttr() const
{
    return returnAttr_;
}

void ReturnBlobAttr::setReturnAttr(bool value)
{
    returnAttr_ = value;
    returnAttrIsSet_ = true;
}

bool ReturnBlobAttr::returnAttrIsSet() const
{
    return returnAttrIsSet_;
}

void ReturnBlobAttr::unsetreturnAttr()
{
    returnAttrIsSet_ = false;
}

}
}
}
}
}


