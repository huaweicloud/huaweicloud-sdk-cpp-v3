

#include "huaweicloud/kvs/v1/model/KvOperIds.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




KvOperIds::KvOperIds()
{
    putKvIdsIsSet_ = false;
    deleteKvIdsIsSet_ = false;
}

KvOperIds::~KvOperIds() = default;

void KvOperIds::validate()
{
}

bool KvOperIds::toBson(Builder &builder) const
{

    if (putKvIdsIsSet_ && !bson_append(builder, "PutKvIds", putKvIds_)) {
        return false;
    }
    if (deleteKvIdsIsSet_ && !bson_append(builder, "DeleteKvIds", deleteKvIds_)) {
        return false;
    }

    return true;
}

bool KvOperIds::fromBson(const Viewer &viewer)
{

    Viewer::Iterator it = viewer.begin();
    while (it != viewer.end()) {
        const std::string &key = it->key();
        
        if (key == "PutKvIds") {
            if (!bson_get(it, putKvIds_)) {
                return false;
            }
            putKvIdsIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "DeleteKvIds") {
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

std::vector<int32_t>& KvOperIds::getPutKvIds()
{
    return putKvIds_;
}

void KvOperIds::setPutKvIds(std::vector<int32_t> value)
{
    putKvIds_ = value;
    putKvIdsIsSet_ = true;
}

bool KvOperIds::putKvIdsIsSet() const
{
    return putKvIdsIsSet_;
}

void KvOperIds::unsetputKvIds()
{
    putKvIdsIsSet_ = false;
}

std::vector<int32_t>& KvOperIds::getDeleteKvIds()
{
    return deleteKvIds_;
}

void KvOperIds::setDeleteKvIds(std::vector<int32_t> value)
{
    deleteKvIds_ = value;
    deleteKvIdsIsSet_ = true;
}

bool KvOperIds::deleteKvIdsIsSet() const
{
    return deleteKvIdsIsSet_;
}

void KvOperIds::unsetdeleteKvIds()
{
    deleteKvIdsIsSet_ = false;
}

}
}
}
}
}


