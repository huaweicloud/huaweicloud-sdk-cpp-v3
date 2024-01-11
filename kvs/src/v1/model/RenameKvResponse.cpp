

#include "huaweicloud/kvs/v1/model/RenameKvResponse.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




RenameKvResponse::RenameKvResponse()
{
    oldPrimaryKeyIsSet_ = false;
    kvBlobAttrIsSet_ = false;
}

RenameKvResponse::~RenameKvResponse() = default;

void RenameKvResponse::validate()
{
}

bool RenameKvResponse::toBson(Builder &builder) const
{

    if (oldPrimaryKeyIsSet_ && !bson_append(builder, "old_primary_key", oldPrimaryKey_)) {
        return false;
    }
    if (kvBlobAttrIsSet_ && !bson_append(builder, "kv_blob_attr", kvBlobAttr_)) {
        return false;
    }

    return true;
}

bool RenameKvResponse::fromBson(const Viewer &viewer)
{

    Viewer::Iterator it = viewer.begin();
    while (it != viewer.end()) {
        const std::string &key = it->key();
        
        if (key == "old_primary_key") {
            if (!bson_get(it, oldPrimaryKey_)) {
                return false;
            }
            oldPrimaryKeyIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "kv_blob_attr") {
            if (!bson_get(it, kvBlobAttr_)) {
                return false;
            }
            kvBlobAttrIsSet_ = true;
            ++it;
            continue;
        }
        
        ++it;
    }

    return true;
}

Document RenameKvResponse::getOldPrimaryKey() const
{
    return oldPrimaryKey_;
}

void RenameKvResponse::setOldPrimaryKey(const Document& value)
{
    oldPrimaryKey_ = value;
    oldPrimaryKeyIsSet_ = true;
}

bool RenameKvResponse::oldPrimaryKeyIsSet() const
{
    return oldPrimaryKeyIsSet_;
}

void RenameKvResponse::unsetoldPrimaryKey()
{
    oldPrimaryKeyIsSet_ = false;
}

Kv_blob_attr RenameKvResponse::getKvBlobAttr() const
{
    return kvBlobAttr_;
}

void RenameKvResponse::setKvBlobAttr(const Kv_blob_attr& value)
{
    kvBlobAttr_ = value;
    kvBlobAttrIsSet_ = true;
}

bool RenameKvResponse::kvBlobAttrIsSet() const
{
    return kvBlobAttrIsSet_;
}

void RenameKvResponse::unsetkvBlobAttr()
{
    kvBlobAttrIsSet_ = false;
}

}
}
}
}
}


