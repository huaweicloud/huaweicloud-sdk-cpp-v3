

#include "huaweicloud/csms/v1/model/TagMatches.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




TagMatches::TagMatches()
{
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

TagMatches::~TagMatches() = default;

void TagMatches::validate()
{
}

web::json::value TagMatches::toJson() const
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
bool TagMatches::fromJson(const web::json::value& val)
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


std::string TagMatches::getKey() const
{
    return key_;
}

void TagMatches::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool TagMatches::keyIsSet() const
{
    return keyIsSet_;
}

void TagMatches::unsetkey()
{
    keyIsSet_ = false;
}

std::string TagMatches::getValue() const
{
    return value_;
}

void TagMatches::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool TagMatches::valueIsSet() const
{
    return valueIsSet_;
}

void TagMatches::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


