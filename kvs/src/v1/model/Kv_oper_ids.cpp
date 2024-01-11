

#include "huaweicloud/kvs/v1/model/Kv_oper_ids.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




Kv_oper_ids::Kv_oper_ids()
{
    putKvIdsIsSet_ = false;
    deleteKvIdsIsSet_ = false;
}

Kv_oper_ids::~Kv_oper_ids() = default;

void Kv_oper_ids::validate()
{
}

bool Kv_oper_ids::toBson(Builder &builder) const
{

    if (putKvIdsIsSet_ && !bson_append(builder, "put_kv_ids", putKvIds_)) {
        return false;
    }
    if (deleteKvIdsIsSet_ && !bson_append(builder, "delete_kv_ids", deleteKvIds_)) {
        return false;
    }

    return true;
}

bool Kv_oper_ids::fromBson(const Viewer &viewer)
{

    Viewer::Iterator it = viewer.begin();
    while (it != viewer.end()) {
        const std::string &key = it->key();
        
        if (key == "put_kv_ids") {
            if (!bson_get(it, putKvIds_)) {
                return false;
            }
            putKvIdsIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "delete_kv_ids") {
            if (!bson_get(it, deleteKvIds_)) {
                return false;
            }
            deleteKvIdsIsSet_ = true;
            ++it;
            continue;
        }
        
        ++it;
    }

    return true;
}

std::vector<int32_t>& Kv_oper_ids::getPutKvIds()
{
    return putKvIds_;
}

void Kv_oper_ids::setPutKvIds(std::vector<int32_t> value)
{
    putKvIds_ = value;
    putKvIdsIsSet_ = true;
}

bool Kv_oper_ids::putKvIdsIsSet() const
{
    return putKvIdsIsSet_;
}

void Kv_oper_ids::unsetputKvIds()
{
    putKvIdsIsSet_ = false;
}

std::vector<int32_t>& Kv_oper_ids::getDeleteKvIds()
{
    return deleteKvIds_;
}

void Kv_oper_ids::setDeleteKvIds(std::vector<int32_t> value)
{
    deleteKvIds_ = value;
    deleteKvIdsIsSet_ = true;
}

bool Kv_oper_ids::deleteKvIdsIsSet() const
{
    return deleteKvIdsIsSet_;
}

void Kv_oper_ids::unsetdeleteKvIds()
{
    deleteKvIdsIsSet_ = false;
}

}
}
}
}
}


