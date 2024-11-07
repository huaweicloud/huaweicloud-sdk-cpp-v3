

#include "huaweicloud/kvs/v1/model/Ttl_options.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




Ttl_options::Ttl_options()
{
    ttlSwitch_ = false;
    ttlSwitchIsSet_ = false;
    expireAfterSeconds_ = 0;
    expireAfterSecondsIsSet_ = false;
    ttlFieldName_ = "";
    ttlFieldNameIsSet_ = false;
}

Ttl_options::~Ttl_options() = default;

void Ttl_options::validate()
{
}

bool Ttl_options::toBson(Builder &builder) const
{

    if (ttlSwitchIsSet_ && !bson_append(builder, "ttl_switch", ttlSwitch_)) {
        return false;
    }
    if (expireAfterSecondsIsSet_ && !bson_append(builder, "expire_after_seconds", expireAfterSeconds_)) {
        return false;
    }
    if (ttlFieldNameIsSet_ && !bson_append(builder, "ttl_field_name", ttlFieldName_)) {
        return false;
    }

    return true;
}

bool Ttl_options::fromBson(const Viewer &viewer)
{

    Viewer::Iterator it = viewer.begin();
    while (it != viewer.end()) {
        const std::string &key = it->key();
        
        if (key == "ttl_switch") {
            if (!bson_get(it, ttlSwitch_)) {
                return false;
            }
            ttlSwitchIsSet_ = true;
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
        
        if (key == "ttl_field_name") {
            if (!bson_get(it, ttlFieldName_)) {
                return false;
            }
            ttlFieldNameIsSet_ = true;
            ++it;
            continue;
        }
        
        ++it;
    }

    return true;
}

bool Ttl_options::isTtlSwitch() const
{
    return ttlSwitch_;
}

void Ttl_options::setTtlSwitch(bool value)
{
    ttlSwitch_ = value;
    ttlSwitchIsSet_ = true;
}

bool Ttl_options::ttlSwitchIsSet() const
{
    return ttlSwitchIsSet_;
}

void Ttl_options::unsetttlSwitch()
{
    ttlSwitchIsSet_ = false;
}

int32_t Ttl_options::getExpireAfterSeconds() const
{
    return expireAfterSeconds_;
}

void Ttl_options::setExpireAfterSeconds(int32_t value)
{
    expireAfterSeconds_ = value;
    expireAfterSecondsIsSet_ = true;
}

bool Ttl_options::expireAfterSecondsIsSet() const
{
    return expireAfterSecondsIsSet_;
}

void Ttl_options::unsetexpireAfterSeconds()
{
    expireAfterSecondsIsSet_ = false;
}

std::string Ttl_options::getTtlFieldName() const
{
    return ttlFieldName_;
}

void Ttl_options::setTtlFieldName(const std::string& value)
{
    ttlFieldName_ = value;
    ttlFieldNameIsSet_ = true;
}

bool Ttl_options::ttlFieldNameIsSet() const
{
    return ttlFieldNameIsSet_;
}

void Ttl_options::unsetttlFieldName()
{
    ttlFieldNameIsSet_ = false;
}

}
}
}
}
}


