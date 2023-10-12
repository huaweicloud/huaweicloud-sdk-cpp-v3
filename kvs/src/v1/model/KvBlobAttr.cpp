

#include "huaweicloud/kvs/v1/model/KvBlobAttr.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




KvBlobAttr::KvBlobAttr()
{
    primaryKeyIsSet_ = false;
    xattrIsSet_ = false;
}

KvBlobAttr::~KvBlobAttr() = default;

void KvBlobAttr::validate()
{
}

bool KvBlobAttr::toBson(Builder &builder) const
{

    if (primaryKeyIsSet_ && !bson_append(builder, "PrimaryKey", primaryKey_)) {
        return false;
    }
    if (xattrIsSet_ && !bson_append(builder, "Xattr", xattr_)) {
        return false;
    }

    return true;
}

bool KvBlobAttr::fromBson(const Viewer &viewer)
{

    Viewer::Iterator it = viewer.begin();
    while (it != viewer.end()) {
        const std::string &key = it->key();
        
        if (key == "PrimaryKey") {
            if (!bson_get(it, primaryKey_)) {
                return false;
            }
            primaryKeyIsSet_ = true;
            ++it;
            continue;
        }
        
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

Document KvBlobAttr::getPrimaryKey() const
{
    return primaryKey_;
}

void KvBlobAttr::setPrimaryKey(const Document& value)
{
    primaryKey_ = value;
    primaryKeyIsSet_ = true;
}

bool KvBlobAttr::primaryKeyIsSet() const
{
    return primaryKeyIsSet_;
}

void KvBlobAttr::unsetprimaryKey()
{
    primaryKeyIsSet_ = false;
}

BsonBinary KvBlobAttr::getXattr() const
{
    return xattr_;
}

void KvBlobAttr::setXattr(const BsonBinary& value)
{
    xattr_ = value;
    xattrIsSet_ = true;
}

bool KvBlobAttr::xattrIsSet() const
{
    return xattrIsSet_;
}

void KvBlobAttr::unsetxattr()
{
    xattrIsSet_ = false;
}

}
}
}
}
}


