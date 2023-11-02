

#include "huaweicloud/dbss/v1/model/ResourceInstanceResponse_sys_tags.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ResourceInstanceResponse_sys_tags::ResourceInstanceResponse_sys_tags()
{
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

ResourceInstanceResponse_sys_tags::~ResourceInstanceResponse_sys_tags() = default;

void ResourceInstanceResponse_sys_tags::validate()
{
}

web::json::value ResourceInstanceResponse_sys_tags::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIsSet_) {
        val[utility::conversions::to_string_t("key")] = ModelBase::toJson(key_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }

    return val;
}
bool ResourceInstanceResponse_sys_tags::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
        }
    }
    return ok;
}


std::string ResourceInstanceResponse_sys_tags::getKey() const
{
    return key_;
}

void ResourceInstanceResponse_sys_tags::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool ResourceInstanceResponse_sys_tags::keyIsSet() const
{
    return keyIsSet_;
}

void ResourceInstanceResponse_sys_tags::unsetkey()
{
    keyIsSet_ = false;
}

std::string ResourceInstanceResponse_sys_tags::getValue() const
{
    return value_;
}

void ResourceInstanceResponse_sys_tags::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool ResourceInstanceResponse_sys_tags::valueIsSet() const
{
    return valueIsSet_;
}

void ResourceInstanceResponse_sys_tags::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


