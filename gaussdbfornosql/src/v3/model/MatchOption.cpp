

#include "huaweicloud/gaussdbfornosql/v3/model/MatchOption.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




MatchOption::MatchOption()
{
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

MatchOption::~MatchOption() = default;

void MatchOption::validate()
{
}

web::json::value MatchOption::toJson() const
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
bool MatchOption::fromJson(const web::json::value& val)
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


std::string MatchOption::getKey() const
{
    return key_;
}

void MatchOption::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool MatchOption::keyIsSet() const
{
    return keyIsSet_;
}

void MatchOption::unsetkey()
{
    keyIsSet_ = false;
}

std::string MatchOption::getValue() const
{
    return value_;
}

void MatchOption::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool MatchOption::valueIsSet() const
{
    return valueIsSet_;
}

void MatchOption::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


