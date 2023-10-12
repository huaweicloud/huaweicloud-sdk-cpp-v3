

#include "huaweicloud/kvs/v1/model/KvItem.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




KvItem::KvItem()
{
    kvBlobDataIsSet_ = false;
    kvDocIsSet_ = false;
}

KvItem::~KvItem() = default;

void KvItem::validate()
{
}

bool KvItem::toBson(Builder &builder) const
{

    if (kvBlobDataIsSet_ && !bson_append(builder, "KvBlobData", kvBlobData_)) {
        return false;
    }
    if (kvDocIsSet_ && !bson_append(builder, "KvDoc", kvDoc_)) {
        return false;
    }

    return true;
}

bool KvItem::fromBson(const Viewer &viewer)
{

    Viewer::Iterator it = viewer.begin();
    while (it != viewer.end()) {
        const std::string &key = it->key();
        
        if (key == "KvBlobData") {
            if (!bson_get(it, kvBlobData_)) {
                return false;
            }
            kvBlobDataIsSet_ = true;
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

KvBlobData KvItem::getKvBlobData() const
{
    return kvBlobData_;
}

void KvItem::setKvBlobData(const KvBlobData& value)
{
    kvBlobData_ = value;
    kvBlobDataIsSet_ = true;
}

bool KvItem::kvBlobDataIsSet() const
{
    return kvBlobDataIsSet_;
}

void KvItem::unsetkvBlobData()
{
    kvBlobDataIsSet_ = false;
}

Document KvItem::getKvDoc() const
{
    return kvDoc_;
}

void KvItem::setKvDoc(const Document& value)
{
    kvDoc_ = value;
    kvDocIsSet_ = true;
}

bool KvItem::kvDocIsSet() const
{
    return kvDocIsSet_;
}

void KvItem::unsetkvDoc()
{
    kvDocIsSet_ = false;
}

}
}
}
}
}


