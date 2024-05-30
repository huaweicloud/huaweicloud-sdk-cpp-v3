

#include "huaweicloud/organizations/v1/model/TagDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




TagDto::TagDto()
{
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

TagDto::~TagDto() = default;

void TagDto::validate()
{
}

web::json::value TagDto::toJson() const
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
bool TagDto::fromJson(const web::json::value& val)
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


std::string TagDto::getKey() const
{
    return key_;
}

void TagDto::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool TagDto::keyIsSet() const
{
    return keyIsSet_;
}

void TagDto::unsetkey()
{
    keyIsSet_ = false;
}

std::string TagDto::getValue() const
{
    return value_;
}

void TagDto::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool TagDto::valueIsSet() const
{
    return valueIsSet_;
}

void TagDto::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


