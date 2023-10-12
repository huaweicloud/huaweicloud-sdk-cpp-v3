

#include "huaweicloud/gaussdbfornosql/v3/model/InstanceTagResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




InstanceTagResult::InstanceTagResult()
{
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

InstanceTagResult::~InstanceTagResult() = default;

void InstanceTagResult::validate()
{
}

web::json::value InstanceTagResult::toJson() const
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
bool InstanceTagResult::fromJson(const web::json::value& val)
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


std::string InstanceTagResult::getKey() const
{
    return key_;
}

void InstanceTagResult::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool InstanceTagResult::keyIsSet() const
{
    return keyIsSet_;
}

void InstanceTagResult::unsetkey()
{
    keyIsSet_ = false;
}

std::string InstanceTagResult::getValue() const
{
    return value_;
}

void InstanceTagResult::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool InstanceTagResult::valueIsSet() const
{
    return valueIsSet_;
}

void InstanceTagResult::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


