

#include "huaweicloud/kvs/v1/model/UpdateBlob.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




UpdateBlob::UpdateBlob()
{
    xattrIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    len_ = 0;
    lenIsSet_ = false;
    blobdata_ = 0;
    blobdataIsSet_ = false;
}

UpdateBlob::~UpdateBlob() = default;

void UpdateBlob::validate()
{
}

bool UpdateBlob::toBson(Builder &builder) const
{

    if (xattrIsSet_ && !bson_append(builder, "Xattr", xattr_)) {
        return false;
    }
    if (offsetIsSet_ && !bson_append(builder, "Offset", offset_)) {
        return false;
    }
    if (lenIsSet_ && !bson_append(builder, "Len", len_)) {
        return false;
    }
    if (blobdataIsSet_ && !bson_append(builder, "Blobdata", blobdata_)) {
        return false;
    }

    return true;
}

bool UpdateBlob::fromBson(const Viewer &viewer)
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
        
        if (key == "Offset") {
            if (!bson_get(it, offset_)) {
                return false;
            }
            offsetIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "Len") {
            if (!bson_get(it, len_)) {
                return false;
            }
            lenIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "Blobdata") {
            if (!bson_get(it, blobdata_)) {
                return false;
            }
            blobdataIsSet_ = true;
            ++it;
            continue;
        }
        
        ++it;
    }

    return true;
}

BsonBinary UpdateBlob::getXattr() const
{
    return xattr_;
}

void UpdateBlob::setXattr(const BsonBinary& value)
{
    xattr_ = value;
    xattrIsSet_ = true;
}

bool UpdateBlob::xattrIsSet() const
{
    return xattrIsSet_;
}

void UpdateBlob::unsetxattr()
{
    xattrIsSet_ = false;
}

int32_t UpdateBlob::getOffset() const
{
    return offset_;
}

void UpdateBlob::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool UpdateBlob::offsetIsSet() const
{
    return offsetIsSet_;
}

void UpdateBlob::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t UpdateBlob::getLen() const
{
    return len_;
}

void UpdateBlob::setLen(int32_t value)
{
    len_ = value;
    lenIsSet_ = true;
}

bool UpdateBlob::lenIsSet() const
{
    return lenIsSet_;
}

void UpdateBlob::unsetlen()
{
    lenIsSet_ = false;
}

int32_t UpdateBlob::getBlobdata() const
{
    return blobdata_;
}

void UpdateBlob::setBlobdata(int32_t value)
{
    blobdata_ = value;
    blobdataIsSet_ = true;
}

bool UpdateBlob::blobdataIsSet() const
{
    return blobdataIsSet_;
}

void UpdateBlob::unsetblobdata()
{
    blobdataIsSet_ = false;
}

}
}
}
}
}


