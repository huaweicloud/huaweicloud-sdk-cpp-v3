

#include "huaweicloud/kvs/v1/model/Kv_blob_data.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




Kv_blob_data::Kv_blob_data()
{
    primaryKeyIsSet_ = false;
    totalBytes_ = 0;
    totalBytesIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    len_ = 0;
    lenIsSet_ = false;
    blobDataIsSet_ = false;
    xattrIsSet_ = false;
}

Kv_blob_data::~Kv_blob_data() = default;

void Kv_blob_data::validate()
{
}

bool Kv_blob_data::toBson(Builder &builder) const
{

    if (primaryKeyIsSet_ && !bson_append(builder, "primary_key", primaryKey_)) {
        return false;
    }
    if (totalBytesIsSet_ && !bson_append(builder, "total_bytes", totalBytes_)) {
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
    if (xattrIsSet_ && !bson_append(builder, "xattr", xattr_)) {
        return false;
    }

    return true;
}

bool Kv_blob_data::fromBson(const Viewer &viewer)
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
        
        if (key == "total_bytes") {
            if (!bson_get(it, totalBytes_)) {
                return false;
            }
            totalBytesIsSet_ = true;
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

Document Kv_blob_data::getPrimaryKey() const
{
    return primaryKey_;
}

void Kv_blob_data::setPrimaryKey(const Document& value)
{
    primaryKey_ = value;
    primaryKeyIsSet_ = true;
}

bool Kv_blob_data::primaryKeyIsSet() const
{
    return primaryKeyIsSet_;
}

void Kv_blob_data::unsetprimaryKey()
{
    primaryKeyIsSet_ = false;
}

int32_t Kv_blob_data::getTotalBytes() const
{
    return totalBytes_;
}

void Kv_blob_data::setTotalBytes(int32_t value)
{
    totalBytes_ = value;
    totalBytesIsSet_ = true;
}

bool Kv_blob_data::totalBytesIsSet() const
{
    return totalBytesIsSet_;
}

void Kv_blob_data::unsettotalBytes()
{
    totalBytesIsSet_ = false;
}

int32_t Kv_blob_data::getOffset() const
{
    return offset_;
}

void Kv_blob_data::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool Kv_blob_data::offsetIsSet() const
{
    return offsetIsSet_;
}

void Kv_blob_data::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t Kv_blob_data::getLen() const
{
    return len_;
}

void Kv_blob_data::setLen(int32_t value)
{
    len_ = value;
    lenIsSet_ = true;
}

bool Kv_blob_data::lenIsSet() const
{
    return lenIsSet_;
}

void Kv_blob_data::unsetlen()
{
    lenIsSet_ = false;
}

BsonBinary Kv_blob_data::getBlobData() const
{
    return blobData_;
}

void Kv_blob_data::setBlobData(const BsonBinary& value)
{
    blobData_ = value;
    blobDataIsSet_ = true;
}

bool Kv_blob_data::blobDataIsSet() const
{
    return blobDataIsSet_;
}

void Kv_blob_data::unsetblobData()
{
    blobDataIsSet_ = false;
}

BsonBinary Kv_blob_data::getXattr() const
{
    return xattr_;
}

void Kv_blob_data::setXattr(const BsonBinary& value)
{
    xattr_ = value;
    xattrIsSet_ = true;
}

bool Kv_blob_data::xattrIsSet() const
{
    return xattrIsSet_;
}

void Kv_blob_data::unsetxattr()
{
    xattrIsSet_ = false;
}

}
}
}
}
}


