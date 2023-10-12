

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
    kvDocIsSet_ = false;
}

RenameKvResponse::~RenameKvResponse() = default;

void RenameKvResponse::validate()
{
}

bool RenameKvResponse::toBson(Builder &builder) const
{

    if (oldPrimaryKeyIsSet_ && !bson_append(builder, "OldPrimaryKey", oldPrimaryKey_)) {
        return false;
    }
    if (kvBlobAttrIsSet_ && !bson_append(builder, "KvBlobAttr", kvBlobAttr_)) {
        return false;
    }
    if (kvDocIsSet_ && !bson_append(builder, "KvDoc", kvDoc_)) {
        return false;
    }

    return true;
}

bool RenameKvResponse::fromBson(const Viewer &viewer)
{

    Viewer::Iterator it = viewer.begin();
    while (it != viewer.end()) {
        const std::string &key = it->key();
        
        if (key == "OldPrimaryKey") {
            if (!bson_get(it, oldPrimaryKey_)) {
                return false;
            }
            oldPrimaryKeyIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "KvBlobAttr") {
            if (!bson_get(it, kvBlobAttr_)) {
                return false;
            }
            kvBlobAttrIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "KvDoc") {
            if (!bson_get(it, kvDoc_)) {
                return false;
            }
            kvDocIsSet_ = true;
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

KvBlobAttr RenameKvResponse::getKvBlobAttr() const
{
    return kvBlobAttr_;
}

void RenameKvResponse::setKvBlobAttr(const KvBlobAttr& value)
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

Document RenameKvResponse::getKvDoc() const
{
    return kvDoc_;
}

void RenameKvResponse::setKvDoc(const Document& value)
{
    kvDoc_ = value;
    kvDocIsSet_ = true;
}

bool RenameKvResponse::kvDocIsSet() const
{
    return kvDocIsSet_;
}

void RenameKvResponse::unsetkvDoc()
{
    kvDocIsSet_ = false;
}

}
}
}
}
}


