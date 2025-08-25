

#include "huaweicloud/cce/v3/model/AutopilotResourceTag.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




AutopilotResourceTag::AutopilotResourceTag()
{
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

AutopilotResourceTag::~AutopilotResourceTag() = default;

void AutopilotResourceTag::validate()
{
}

web::json::value AutopilotResourceTag::toJson() const
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
bool AutopilotResourceTag::fromJson(const web::json::value& val)
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


std::string AutopilotResourceTag::getKey() const
{
    return key_;
}

void AutopilotResourceTag::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool AutopilotResourceTag::keyIsSet() const
{
    return keyIsSet_;
}

void AutopilotResourceTag::unsetkey()
{
    keyIsSet_ = false;
}

std::string AutopilotResourceTag::getValue() const
{
    return value_;
}

void AutopilotResourceTag::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool AutopilotResourceTag::valueIsSet() const
{
    return valueIsSet_;
}

void AutopilotResourceTag::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


