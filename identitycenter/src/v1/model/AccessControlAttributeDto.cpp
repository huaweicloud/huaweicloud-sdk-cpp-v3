

#include "huaweicloud/identitycenter/v1/model/AccessControlAttributeDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




AccessControlAttributeDto::AccessControlAttributeDto()
{
    key_ = "";
    keyIsSet_ = false;
    valueIsSet_ = false;
}

AccessControlAttributeDto::~AccessControlAttributeDto() = default;

void AccessControlAttributeDto::validate()
{
}

web::json::value AccessControlAttributeDto::toJson() const
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
bool AccessControlAttributeDto::fromJson(const web::json::value& val)
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
            AccessControlAttributeValueDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
        }
    }
    return ok;
}


std::string AccessControlAttributeDto::getKey() const
{
    return key_;
}

void AccessControlAttributeDto::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool AccessControlAttributeDto::keyIsSet() const
{
    return keyIsSet_;
}

void AccessControlAttributeDto::unsetkey()
{
    keyIsSet_ = false;
}

AccessControlAttributeValueDto AccessControlAttributeDto::getValue() const
{
    return value_;
}

void AccessControlAttributeDto::setValue(const AccessControlAttributeValueDto& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool AccessControlAttributeDto::valueIsSet() const
{
    return valueIsSet_;
}

void AccessControlAttributeDto::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


