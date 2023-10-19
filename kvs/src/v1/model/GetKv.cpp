

#include "huaweicloud/kvs/v1/model/GetKv.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




GetKv::GetKv()
{
    operId_ = 0;
    operIdIsSet_ = false;
    primaryKeyIsSet_ = false;
}

GetKv::~GetKv() = default;

void GetKv::validate()
{
}

bool GetKv::toBson(Builder &builder) const
{

    if (operIdIsSet_ && !bson_append(builder, "OperId", operId_)) {
        return false;
    }
    if (primaryKeyIsSet_ && !bson_append(builder, "PrimaryKey", primaryKey_)) {
        return false;
    }

    return true;
}

bool GetKv::fromBson(const Viewer &viewer)
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

int32_t GetKv::getOperId() const
{
    return operId_;
}

void GetKv::setOperId(int32_t value)
{
    operId_ = value;
    operIdIsSet_ = true;
}

bool GetKv::operIdIsSet() const
{
    return operIdIsSet_;
}

void GetKv::unsetoperId()
{
    operIdIsSet_ = false;
}

Document GetKv::getPrimaryKey() const
{
    return primaryKey_;
}

void GetKv::setPrimaryKey(const Document& value)
{
    primaryKey_ = value;
    primaryKeyIsSet_ = true;
}

bool GetKv::primaryKeyIsSet() const
{
    return primaryKeyIsSet_;
}

void GetKv::unsetprimaryKey()
{
    primaryKeyIsSet_ = false;
}

}
}
}
}
}


