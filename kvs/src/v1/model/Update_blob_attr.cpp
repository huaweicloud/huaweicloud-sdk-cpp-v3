

#include "huaweicloud/kvs/v1/model/Update_blob_attr.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




Update_blob_attr::Update_blob_attr()
{
    xattrIsSet_ = false;
}

Update_blob_attr::~Update_blob_attr() = default;

void Update_blob_attr::validate()
{
}

bool Update_blob_attr::toBson(Builder &builder) const
{

    if (xattrIsSet_ && !bson_append(builder, "xattr", xattr_)) {
        return false;
    }

    return true;
}

bool Update_blob_attr::fromBson(const Viewer &viewer)
{

    Viewer::Iterator it = viewer.begin();
    while (it != viewer.end()) {
        const std::string &key = it->key();
        
        if (key == "xattr") {
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

BsonBinary Update_blob_attr::getXattr() const
{
    return xattr_;
}

void Update_blob_attr::setXattr(const BsonBinary& value)
{
    xattr_ = value;
    xattrIsSet_ = true;
}

bool Update_blob_attr::xattrIsSet() const
{
    return xattrIsSet_;
}

void Update_blob_attr::unsetxattr()
{
    xattrIsSet_ = false;
}

}
}
}
}
}


