

#include "huaweicloud/kvs/v1/model/KvBlobData.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




KvBlobData::KvBlobData()
{
    primaryKeyIsSet_ = false;
    totalBytes_ = 0;
    totalBytesIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    len_ = 0;
    lenIsSet_ = false;
    blobdataIsSet_ = false;
    xattrIsSet_ = false;
}

KvBlobData::~KvBlobData() = default;

void KvBlobData::validate()
{
}

bool KvBlobData::toBson(Builder &builder) const
{

    if (primaryKeyIsSet_ && !bson_append(builder, "PrimaryKey", primaryKey_)) {
        return false;
    }
    if (totalBytesIsSet_ && !bson_append(builder, "TotalBytes", totalBytes_)) {
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
    if (xattrIsSet_ && !bson_append(builder, "Xattr", xattr_)) {
        return false;
    }

    return true;
}

bool KvBlobData::fromBson(const Viewer &viewer)
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
        
        if (key == "TotalBytes") {
            if (!bson_get(it, totalBytes_)) {
                return false;
            }
            totalBytesIsSet_ = true;
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

Document KvBlobData::getPrimaryKey() const
{
    return primaryKey_;
}

void KvBlobData::setPrimaryKey(const Document& value)
{
    primaryKey_ = value;
    primaryKeyIsSet_ = true;
}

bool KvBlobData::primaryKeyIsSet() const
{
    return primaryKeyIsSet_;
}

void KvBlobData::unsetprimaryKey()
{
    primaryKeyIsSet_ = false;
}

int32_t KvBlobData::getTotalBytes() const
{
    return totalBytes_;
}

void KvBlobData::setTotalBytes(int32_t value)
{
    totalBytes_ = value;
    totalBytesIsSet_ = true;
}

bool KvBlobData::totalBytesIsSet() const
{
    return totalBytesIsSet_;
}

void KvBlobData::unsettotalBytes()
{
    totalBytesIsSet_ = false;
}

int32_t KvBlobData::getOffset() const
{
    return offset_;
}

void KvBlobData::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool KvBlobData::offsetIsSet() const
{
    return offsetIsSet_;
}

void KvBlobData::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t KvBlobData::getLen() const
{
    return len_;
}

void KvBlobData::setLen(int32_t value)
{
    len_ = value;
    lenIsSet_ = true;
}

bool KvBlobData::lenIsSet() const
{
    return lenIsSet_;
}

void KvBlobData::unsetlen()
{
    lenIsSet_ = false;
}

BsonBinary KvBlobData::getBlobdata() const
{
    return blobdata_;
}

void KvBlobData::setBlobdata(const BsonBinary& value)
{
    blobdata_ = value;
    blobdataIsSet_ = true;
}

bool KvBlobData::blobdataIsSet() const
{
    return blobdataIsSet_;
}

void KvBlobData::unsetblobdata()
{
    blobdataIsSet_ = false;
}

BsonBinary KvBlobData::getXattr() const
{
    return xattr_;
}

void KvBlobData::setXattr(const BsonBinary& value)
{
    xattr_ = value;
    xattrIsSet_ = true;
}

bool KvBlobData::xattrIsSet() const
{
    return xattrIsSet_;
}

void KvBlobData::unsetxattr()
{
    xattrIsSet_ = false;
}

}
}
}
}
}


