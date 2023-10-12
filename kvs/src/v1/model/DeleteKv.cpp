

#include "huaweicloud/kvs/v1/model/DeleteKv.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




DeleteKv::DeleteKv()
{
    operId_ = 0;
    operIdIsSet_ = false;
    primaryKeyIsSet_ = false;
}

DeleteKv::~DeleteKv() = default;

void DeleteKv::validate()
{
}

bool DeleteKv::toBson(Builder &builder) const
{

    if (operIdIsSet_ && !bson_append(builder, "OperId", operId_)) {
        return false;
    }
    if (primaryKeyIsSet_ && !bson_append(builder, "PrimaryKey", primaryKey_)) {
        return false;
    }

    return true;
}

bool DeleteKv::fromBson(const Viewer &viewer)
{

    Viewer::Iterator it = viewer.begin();
    while (it != viewer.end()) {
        const std::string &key = it->key();
        
        if (key == "OperId") {
            if (!bson_get(it, operId_)) {
                return false;
            }
            operIdIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "PrimaryKey") {
            if (!bson_get(it, primaryKey_)) {
                return false;
            }
            primaryKeyIsSet_ = true;
            ++it;
            continue;
        }
        
        ++it;
    }

    return true;
}

int32_t DeleteKv::getOperId() const
{
    return operId_;
}

void DeleteKv::setOperId(int32_t value)
{
    operId_ = value;
    operIdIsSet_ = true;
}

bool DeleteKv::operIdIsSet() const
{
    return operIdIsSet_;
}

void DeleteKv::unsetoperId()
{
    operIdIsSet_ = false;
}

Document DeleteKv::getPrimaryKey() const
{
    return primaryKey_;
}

void DeleteKv::setPrimaryKey(const Document& value)
{
    primaryKey_ = value;
    primaryKeyIsSet_ = true;
}

bool DeleteKv::primaryKeyIsSet() const
{
    return primaryKeyIsSet_;
}

void DeleteKv::unsetprimaryKey()
{
    primaryKeyIsSet_ = false;
}

}
}
}
}
}


