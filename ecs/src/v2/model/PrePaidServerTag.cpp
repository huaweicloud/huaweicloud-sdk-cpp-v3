

#include "huaweicloud/ecs/v2/model/PrePaidServerTag.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




PrePaidServerTag::PrePaidServerTag()
{
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

PrePaidServerTag::~PrePaidServerTag() = default;

void PrePaidServerTag::validate()
{
}

web::json::value PrePaidServerTag::toJson() const
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
bool PrePaidServerTag::fromJson(const web::json::value& val)
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


std::string PrePaidServerTag::getKey() const
{
    return key_;
}

void PrePaidServerTag::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool PrePaidServerTag::keyIsSet() const
{
    return keyIsSet_;
}

void PrePaidServerTag::unsetkey()
{
    keyIsSet_ = false;
}

std::string PrePaidServerTag::getValue() const
{
    return value_;
}

void PrePaidServerTag::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool PrePaidServerTag::valueIsSet() const
{
    return valueIsSet_;
}

void PrePaidServerTag::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


