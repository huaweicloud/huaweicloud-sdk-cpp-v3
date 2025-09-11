

#include "huaweicloud/dbss/v1/model/ResourceTagInfoBean.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ResourceTagInfoBean::ResourceTagInfoBean()
{
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

ResourceTagInfoBean::~ResourceTagInfoBean() = default;

void ResourceTagInfoBean::validate()
{
}

web::json::value ResourceTagInfoBean::toJson() const
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
bool ResourceTagInfoBean::fromJson(const web::json::value& val)
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


std::string ResourceTagInfoBean::getKey() const
{
    return key_;
}

void ResourceTagInfoBean::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool ResourceTagInfoBean::keyIsSet() const
{
    return keyIsSet_;
}

void ResourceTagInfoBean::unsetkey()
{
    keyIsSet_ = false;
}

std::string ResourceTagInfoBean::getValue() const
{
    return value_;
}

void ResourceTagInfoBean::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool ResourceTagInfoBean::valueIsSet() const
{
    return valueIsSet_;
}

void ResourceTagInfoBean::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


