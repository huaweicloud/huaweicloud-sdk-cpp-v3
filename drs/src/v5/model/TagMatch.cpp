

#include "huaweicloud/drs/v5/model/TagMatch.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




TagMatch::TagMatch()
{
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

TagMatch::~TagMatch() = default;

void TagMatch::validate()
{
}

web::json::value TagMatch::toJson() const
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
bool TagMatch::fromJson(const web::json::value& val)
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


std::string TagMatch::getKey() const
{
    return key_;
}

void TagMatch::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool TagMatch::keyIsSet() const
{
    return keyIsSet_;
}

void TagMatch::unsetkey()
{
    keyIsSet_ = false;
}

std::string TagMatch::getValue() const
{
    return value_;
}

void TagMatch::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool TagMatch::valueIsSet() const
{
    return valueIsSet_;
}

void TagMatch::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


