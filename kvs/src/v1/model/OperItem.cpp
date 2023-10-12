

#include "huaweicloud/kvs/v1/model/OperItem.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




OperItem::OperItem()
{
    putKvIsSet_ = false;
    deleteKvIsSet_ = false;
}

OperItem::~OperItem() = default;

void OperItem::validate()
{
}

bool OperItem::toBson(Builder &builder) const
{

    if (putKvIsSet_ && !bson_append(builder, "PutKv", putKv_)) {
        return false;
    }
    if (deleteKvIsSet_ && !bson_append(builder, "DeleteKv", deleteKv_)) {
        return false;
    }

    return true;
}

bool OperItem::fromBson(const Viewer &viewer)
{

    Viewer::Iterator it = viewer.begin();
    while (it != viewer.end()) {
        const std::string &key = it->key();
        
        if (key == "PutKv") {
            if (!bson_get(it, putKv_)) {
                return false;
            }
            putKvIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "DeleteKv") {
            if (!bson_get(it, deleteKv_)) {
                return false;
            }
            deleteKvIsSet_ = true;
            ++it;
            continue;
        }
        
        ++it;
    }

    return true;
}

PutKv OperItem::getPutKv() const
{
    return putKv_;
}

void OperItem::setPutKv(const PutKv& value)
{
    putKv_ = value;
    putKvIsSet_ = true;
}

bool OperItem::putKvIsSet() const
{
    return putKvIsSet_;
}

void OperItem::unsetputKv()
{
    putKvIsSet_ = false;
}

DeleteKv OperItem::getDeleteKv() const
{
    return deleteKv_;
}

void OperItem::setDeleteKv(const DeleteKv& value)
{
    deleteKv_ = value;
    deleteKvIsSet_ = true;
}

bool OperItem::deleteKvIsSet() const
{
    return deleteKvIsSet_;
}

void OperItem::unsetdeleteKv()
{
    deleteKvIsSet_ = false;
}

}
}
}
}
}


