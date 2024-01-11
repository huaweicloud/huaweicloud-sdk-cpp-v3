

#include "huaweicloud/kvs/v1/model/Kv_blob_attr.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




Kv_blob_attr::Kv_blob_attr()
{
    primaryKeyIsSet_ = false;
    xattrIsSet_ = false;
}

Kv_blob_attr::~Kv_blob_attr() = default;

void Kv_blob_attr::validate()
{
}

bool Kv_blob_attr::toBson(Builder &builder) const
{

    if (primaryKeyIsSet_ && !bson_append(builder, "primary_key", primaryKey_)) {
        return false;
    }
    if (xattrIsSet_ && !bson_append(builder, "xattr", xattr_)) {
        return false;
    }

    return true;
}

bool Kv_blob_attr::fromBson(const Viewer &viewer)
{

    Viewer::Iterator it = viewer.begin();
    while (it != viewer.end()) {
        const std::string &key = it->key();
        
        if (key == "primary_key") {
            if (!bson_get(it, primaryKey_)) {
                return false;
            }
            primaryKeyIsSet_ = true;
            ++it;
            continue;
        }
        
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

Document Kv_blob_attr::getPrimaryKey() const
{
    return primaryKey_;
}

void Kv_blob_attr::setPrimaryKey(const Document& value)
{
    primaryKey_ = value;
    primaryKeyIsSet_ = true;
}

bool Kv_blob_attr::primaryKeyIsSet() const
{
    return primaryKeyIsSet_;
}

void Kv_blob_attr::unsetprimaryKey()
{
    primaryKeyIsSet_ = false;
}

BsonBinary Kv_blob_attr::getXattr() const
{
    return xattr_;
}

void Kv_blob_attr::setXattr(const BsonBinary& value)
{
    xattr_ = value;
    xattrIsSet_ = true;
}

bool Kv_blob_attr::xattrIsSet() const
{
    return xattrIsSet_;
}

void Kv_blob_attr::unsetxattr()
{
    xattrIsSet_ = false;
}

}
}
}
}
}


