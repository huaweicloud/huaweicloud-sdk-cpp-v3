

#include "huaweicloud/modelarts/v1/model/UserTags.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




UserTags::UserTags()
{
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

UserTags::~UserTags() = default;

void UserTags::validate()
{
}

web::json::value UserTags::toJson() const
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
bool UserTags::fromJson(const web::json::value& val)
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


std::string UserTags::getKey() const
{
    return key_;
}

void UserTags::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool UserTags::keyIsSet() const
{
    return keyIsSet_;
}

void UserTags::unsetkey()
{
    keyIsSet_ = false;
}

std::string UserTags::getValue() const
{
    return value_;
}

void UserTags::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool UserTags::valueIsSet() const
{
    return valueIsSet_;
}

void UserTags::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


