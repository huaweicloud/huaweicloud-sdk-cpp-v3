

#include "huaweicloud/kvs/v1/model/Ttl_specification.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




Ttl_specification::Ttl_specification()
{
    enable_ = false;
    enableIsSet_ = false;
    expireAfterSeconds_ = 0;
    expireAfterSecondsIsSet_ = false;
    fieldName_ = "";
    fieldNameIsSet_ = false;
}

Ttl_specification::~Ttl_specification() = default;

void Ttl_specification::validate()
{
}

bool Ttl_specification::toBson(Builder &builder) const
{

    if (enableIsSet_ && !bson_append(builder, "enable", enable_)) {
        return false;
    }
    if (expireAfterSecondsIsSet_ && !bson_append(builder, "expire_after_seconds", expireAfterSeconds_)) {
        return false;
    }
    if (fieldNameIsSet_ && !bson_append(builder, "field_name", fieldName_)) {
        return false;
    }

    return true;
}

bool Ttl_specification::fromBson(const Viewer &viewer)
{

    Viewer::Iterator it = viewer.begin();
    while (it != viewer.end()) {
        const std::string &key = it->key();
        
        if (key == "enable") {
            if (!bson_get(it, enable_)) {
                return false;
            }
            enableIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "expire_after_seconds") {
            if (!bson_get(it, expireAfterSeconds_)) {
                return false;
            }
            expireAfterSecondsIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "field_name") {
            if (!bson_get(it, fieldName_)) {
                return false;
            }
            fieldNameIsSet_ = true;
            ++it;
            continue;
        }
        
        ++it;
    }

    return true;
}

bool Ttl_specification::isEnable() const
{
    return enable_;
}

void Ttl_specification::setEnable(bool value)
{
    enable_ = value;
    enableIsSet_ = true;
}

bool Ttl_specification::enableIsSet() const
{
    return enableIsSet_;
}

void Ttl_specification::unsetenable()
{
    enableIsSet_ = false;
}

int32_t Ttl_specification::getExpireAfterSeconds() const
{
    return expireAfterSeconds_;
}

void Ttl_specification::setExpireAfterSeconds(int32_t value)
{
    expireAfterSeconds_ = value;
    expireAfterSecondsIsSet_ = true;
}

bool Ttl_specification::expireAfterSecondsIsSet() const
{
    return expireAfterSecondsIsSet_;
}

void Ttl_specification::unsetexpireAfterSeconds()
{
    expireAfterSecondsIsSet_ = false;
}

std::string Ttl_specification::getFieldName() const
{
    return fieldName_;
}

void Ttl_specification::setFieldName(const std::string& value)
{
    fieldName_ = value;
    fieldNameIsSet_ = true;
}

bool Ttl_specification::fieldNameIsSet() const
{
    return fieldNameIsSet_;
}

void Ttl_specification::unsetfieldName()
{
    fieldNameIsSet_ = false;
}

}
}
}
}
}


