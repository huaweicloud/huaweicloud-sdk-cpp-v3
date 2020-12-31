

#include "huaweicloud/eip/model/ResourceTagResp.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




ResourceTagResp::ResourceTagResp()
{
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

ResourceTagResp::~ResourceTagResp() = default;

void ResourceTagResp::validate()
{
}

web::json::value ResourceTagResp::toJson() const
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

bool ResourceTagResp::fromJson(const web::json::value& val)
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


std::string ResourceTagResp::getKey() const
{
    return key_;
}

void ResourceTagResp::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool ResourceTagResp::keyIsSet() const
{
    return keyIsSet_;
}

void ResourceTagResp::unsetkey()
{
    keyIsSet_ = false;
}

std::string ResourceTagResp::getValue() const
{
    return value_;
}

void ResourceTagResp::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool ResourceTagResp::valueIsSet() const
{
    return valueIsSet_;
}

void ResourceTagResp::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


