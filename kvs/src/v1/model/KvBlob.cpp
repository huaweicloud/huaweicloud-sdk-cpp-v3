

#include "huaweicloud/kvs/v1/model/KvBlob.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




KvBlob::KvBlob()
{
    primaryKeyIsSet_ = false;
    xblobIsSet_ = false;
    xattrIsSet_ = false;
}

KvBlob::~KvBlob() = default;

void KvBlob::validate()
{
}

bool KvBlob::toBson(Builder &builder) const
{

    if (primaryKeyIsSet_ && !bson_append(builder, "PrimaryKey", primaryKey_)) {
        return false;
    }
    if (xblobIsSet_ && !bson_append(builder, "Xblob", xblob_)) {
        return false;
    }
    if (xattrIsSet_ && !bson_append(builder, "Xattr", xattr_)) {
        return false;
    }

    return true;
}

bool KvBlob::fromBson(const Viewer &viewer)
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
        
        if (key == "Xblob") {
            if (!bson_get(it, xblob_)) {
                return false;
            }
            xblobIsSet_ = true;
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

Document KvBlob::getPrimaryKey() const
{
    return primaryKey_;
}

void KvBlob::setPrimaryKey(const Document& value)
{
    primaryKey_ = value;
    primaryKeyIsSet_ = true;
}

bool KvBlob::primaryKeyIsSet() const
{
    return primaryKeyIsSet_;
}

void KvBlob::unsetprimaryKey()
{
    primaryKeyIsSet_ = false;
}

BsonBinary KvBlob::getXblob() const
{
    return xblob_;
}

void KvBlob::setXblob(const BsonBinary& value)
{
    xblob_ = value;
    xblobIsSet_ = true;
}

bool KvBlob::xblobIsSet() const
{
    return xblobIsSet_;
}

void KvBlob::unsetxblob()
{
    xblobIsSet_ = false;
}

BsonBinary KvBlob::getXattr() const
{
    return xattr_;
}

void KvBlob::setXattr(const BsonBinary& value)
{
    xattr_ = value;
    xattrIsSet_ = true;
}

bool KvBlob::xattrIsSet() const
{
    return xattrIsSet_;
}

void KvBlob::unsetxattr()
{
    xattrIsSet_ = false;
}

}
}
}
}
}


