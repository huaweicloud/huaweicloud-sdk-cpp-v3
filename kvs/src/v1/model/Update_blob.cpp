

#include "huaweicloud/kvs/v1/model/Update_blob.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




Update_blob::Update_blob()
{
    xattrIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    len_ = 0;
    lenIsSet_ = false;
    blobDataIsSet_ = false;
}

Update_blob::~Update_blob() = default;

void Update_blob::validate()
{
}

bool Update_blob::toBson(Builder &builder) const
{

    if (xattrIsSet_ && !bson_append(builder, "xattr", xattr_)) {
        return false;
    }
    if (offsetIsSet_ && !bson_append(builder, "offset", offset_)) {
        return false;
    }
    if (lenIsSet_ && !bson_append(builder, "len", len_)) {
        return false;
    }
    if (blobDataIsSet_ && !bson_append(builder, "blob_data", blobData_)) {
        return false;
    }

    return true;
}

bool Update_blob::fromBson(const Viewer &viewer)
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
        
        if (key == "offset") {
            if (!bson_get(it, offset_)) {
                return false;
            }
            offsetIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "len") {
            if (!bson_get(it, len_)) {
                return false;
            }
            lenIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "blob_data") {
            if (!bson_get(it, blobData_)) {
                return false;
            }
            blobDataIsSet_ = true;
            ++it;
            continue;
        }
        
        ++it;
    }

    return true;
}

BsonBinary Update_blob::getXattr() const
{
    return xattr_;
}

void Update_blob::setXattr(const BsonBinary& value)
{
    xattr_ = value;
    xattrIsSet_ = true;
}

bool Update_blob::xattrIsSet() const
{
    return xattrIsSet_;
}

void Update_blob::unsetxattr()
{
    xattrIsSet_ = false;
}

int32_t Update_blob::getOffset() const
{
    return offset_;
}

void Update_blob::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool Update_blob::offsetIsSet() const
{
    return offsetIsSet_;
}

void Update_blob::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t Update_blob::getLen() const
{
    return len_;
}

void Update_blob::setLen(int32_t value)
{
    len_ = value;
    lenIsSet_ = true;
}

bool Update_blob::lenIsSet() const
{
    return lenIsSet_;
}

void Update_blob::unsetlen()
{
    lenIsSet_ = false;
}

BsonBinary Update_blob::getBlobData() const
{
    return blobData_;
}

void Update_blob::setBlobData(const BsonBinary& value)
{
    blobData_ = value;
    blobDataIsSet_ = true;
}

bool Update_blob::blobDataIsSet() const
{
    return blobDataIsSet_;
}

void Update_blob::unsetblobData()
{
    blobDataIsSet_ = false;
}

}
}
}
}
}


