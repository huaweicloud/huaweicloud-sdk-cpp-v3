

#include "huaweicloud/kvs/v1/model/Kv_blob.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




Kv_blob::Kv_blob()
{
    primaryKeyIsSet_ = false;
    xblobIsSet_ = false;
    xattrIsSet_ = false;
}

Kv_blob::~Kv_blob() = default;

void Kv_blob::validate()
{
}

bool Kv_blob::toBson(Builder &builder) const
{

    if (primaryKeyIsSet_ && !bson_append(builder, "primary_key", primaryKey_)) {
        return false;
    }
    if (xblobIsSet_ && !bson_append(builder, "xblob", xblob_)) {
        return false;
    }
    if (xattrIsSet_ && !bson_append(builder, "xattr", xattr_)) {
        return false;
    }

    return true;
}

bool Kv_blob::fromBson(const Viewer &viewer)
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
        
        if (key == "xblob") {
            if (!bson_get(it, xblob_)) {
                return false;
            }
            xblobIsSet_ = true;
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

Document Kv_blob::getPrimaryKey() const
{
    return primaryKey_;
}

void Kv_blob::setPrimaryKey(const Document& value)
{
    primaryKey_ = value;
    primaryKeyIsSet_ = true;
}

bool Kv_blob::primaryKeyIsSet() const
{
    return primaryKeyIsSet_;
}

void Kv_blob::unsetprimaryKey()
{
    primaryKeyIsSet_ = false;
}

BsonBinary Kv_blob::getXblob() const
{
    return xblob_;
}

void Kv_blob::setXblob(const BsonBinary& value)
{
    xblob_ = value;
    xblobIsSet_ = true;
}

bool Kv_blob::xblobIsSet() const
{
    return xblobIsSet_;
}

void Kv_blob::unsetxblob()
{
    xblobIsSet_ = false;
}

BsonBinary Kv_blob::getXattr() const
{
    return xattr_;
}

void Kv_blob::setXattr(const BsonBinary& value)
{
    xattr_ = value;
    xattrIsSet_ = true;
}

bool Kv_blob::xattrIsSet() const
{
    return xattrIsSet_;
}

void Kv_blob::unsetxattr()
{
    xattrIsSet_ = false;
}

}
}
}
}
}


