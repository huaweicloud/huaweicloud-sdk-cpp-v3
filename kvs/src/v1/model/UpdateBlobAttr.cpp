

#include "huaweicloud/kvs/v1/model/UpdateBlobAttr.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




UpdateBlobAttr::UpdateBlobAttr()
{
    xattrIsSet_ = false;
}

UpdateBlobAttr::~UpdateBlobAttr() = default;

void UpdateBlobAttr::validate()
{
}

bool UpdateBlobAttr::toBson(Builder &builder) const
{

    if (xattrIsSet_ && !bson_append(builder, "Xattr", xattr_)) {
        return false;
    }

    return true;
}

bool UpdateBlobAttr::fromBson(const Viewer &viewer)
{

    Viewer::Iterator it = viewer.begin();
    while (it != viewer.end()) {
        const std::string &key = it->key();
        
        if (key == "Xattr") {
            if (!bson_get(it, xattr_)) {
                return false;
            }
            xattrIsSet_ = true;
            ++it;
            continue;
        }
        
        ++it;
    }

    return true;
}

BsonBinary UpdateBlobAttr::getXattr() const
{
    return xattr_;
}

void UpdateBlobAttr::setXattr(const BsonBinary& value)
{
    xattr_ = value;
    xattrIsSet_ = true;
}

bool UpdateBlobAttr::xattrIsSet() const
{
    return xattrIsSet_;
}

void UpdateBlobAttr::unsetxattr()
{
    xattrIsSet_ = false;
}

}
}
}
}
}


