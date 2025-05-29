

#include "huaweicloud/kvs/v1/model/Get_kv.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




Get_kv::Get_kv()
{
    operId_ = 0;
    operIdIsSet_ = false;
    primaryKeyIsSet_ = false;
}

Get_kv::~Get_kv() = default;

void Get_kv::validate()
{
}

bool Get_kv::toBson(Builder &builder) const
{

    if (operIdIsSet_ && !bson_append(builder, "oper_id", operId_)) {
        return false;
    }
    if (primaryKeyIsSet_ && !bson_append(builder, "primary_key", primaryKey_)) {
        return false;
    }

    return true;
}

bool Get_kv::fromBson(const Viewer &viewer)
{

    Viewer::Iterator it = viewer.begin();
    while (it != viewer.end()) {
        const std::string &key = it->key();
        
        if (key == "oper_id") {
            if (!bson_get(it, operId_)) {
                return false;
            }
            operIdIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "primary_key") {
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

int32_t Get_kv::getOperId() const
{
    return operId_;
}

void Get_kv::setOperId(int32_t value)
{
    operId_ = value;
    operIdIsSet_ = true;
}

bool Get_kv::operIdIsSet() const
{
    return operIdIsSet_;
}

void Get_kv::unsetoperId()
{
    operIdIsSet_ = false;
}

Document Get_kv::getPrimaryKey() const
{
    return primaryKey_;
}

void Get_kv::setPrimaryKey(const Document& value)
{
    primaryKey_ = value;
    primaryKeyIsSet_ = true;
}

bool Get_kv::primaryKeyIsSet() const
{
    return primaryKeyIsSet_;
}

void Get_kv::unsetprimaryKey()
{
    primaryKeyIsSet_ = false;
}

}
}
}
}
}


