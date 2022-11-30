

#include "huaweicloud/sdrs/v1/model/MatchParams.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




MatchParams::MatchParams()
{
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

MatchParams::~MatchParams() = default;

void MatchParams::validate()
{
}

web::json::value MatchParams::toJson() const
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

bool MatchParams::fromJson(const web::json::value& val)
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


std::string MatchParams::getKey() const
{
    return key_;
}

void MatchParams::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool MatchParams::keyIsSet() const
{
    return keyIsSet_;
}

void MatchParams::unsetkey()
{
    keyIsSet_ = false;
}

std::string MatchParams::getValue() const
{
    return value_;
}

void MatchParams::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool MatchParams::valueIsSet() const
{
    return valueIsSet_;
}

void MatchParams::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


