

#include "huaweicloud/kvs/v1/model/Oper_item.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




Oper_item::Oper_item()
{
    putKvIsSet_ = false;
    deleteKvIsSet_ = false;
}

Oper_item::~Oper_item() = default;

void Oper_item::validate()
{
}

bool Oper_item::toBson(Builder &builder) const
{

    if (putKvIsSet_ && !bson_append(builder, "put_kv", putKv_)) {
        return false;
    }
    if (deleteKvIsSet_ && !bson_append(builder, "delete_kv", deleteKv_)) {
        return false;
    }

    return true;
}

bool Oper_item::fromBson(const Viewer &viewer)
{

    Viewer::Iterator it = viewer.begin();
    while (it != viewer.end()) {
        const std::string &key = it->key();
        
        if (key == "put_kv") {
            if (!bson_get(it, putKv_)) {
                return false;
            }
            putKvIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "delete_kv") {
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

Put_kv Oper_item::getPutKv() const
{
    return putKv_;
}

void Oper_item::setPutKv(const Put_kv& value)
{
    putKv_ = value;
    putKvIsSet_ = true;
}

bool Oper_item::putKvIsSet() const
{
    return putKvIsSet_;
}

void Oper_item::unsetputKv()
{
    putKvIsSet_ = false;
}

Delete_kv Oper_item::getDeleteKv() const
{
    return deleteKv_;
}

void Oper_item::setDeleteKv(const Delete_kv& value)
{
    deleteKv_ = value;
    deleteKvIsSet_ = true;
}

bool Oper_item::deleteKvIsSet() const
{
    return deleteKvIsSet_;
}

void Oper_item::unsetdeleteKv()
{
    deleteKvIsSet_ = false;
}

}
}
}
}
}


