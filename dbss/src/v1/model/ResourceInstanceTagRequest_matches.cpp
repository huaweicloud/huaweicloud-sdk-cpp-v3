

#include "huaweicloud/dbss/v1/model/ResourceInstanceTagRequest_matches.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ResourceInstanceTagRequest_matches::ResourceInstanceTagRequest_matches()
{
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

ResourceInstanceTagRequest_matches::~ResourceInstanceTagRequest_matches() = default;

void ResourceInstanceTagRequest_matches::validate()
{
}

web::json::value ResourceInstanceTagRequest_matches::toJson() const
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
bool ResourceInstanceTagRequest_matches::fromJson(const web::json::value& val)
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


std::string ResourceInstanceTagRequest_matches::getKey() const
{
    return key_;
}

void ResourceInstanceTagRequest_matches::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool ResourceInstanceTagRequest_matches::keyIsSet() const
{
    return keyIsSet_;
}

void ResourceInstanceTagRequest_matches::unsetkey()
{
    keyIsSet_ = false;
}

std::string ResourceInstanceTagRequest_matches::getValue() const
{
    return value_;
}

void ResourceInstanceTagRequest_matches::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool ResourceInstanceTagRequest_matches::valueIsSet() const
{
    return valueIsSet_;
}

void ResourceInstanceTagRequest_matches::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


