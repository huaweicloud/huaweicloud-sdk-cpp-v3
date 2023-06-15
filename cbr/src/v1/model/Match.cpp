

#include "huaweicloud/cbr/v1/model/Match.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




Match::Match()
{
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

Match::~Match() = default;

void Match::validate()
{
}

web::json::value Match::toJson() const
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

bool Match::fromJson(const web::json::value& val)
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


std::string Match::getKey() const
{
    return key_;
}

void Match::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool Match::keyIsSet() const
{
    return keyIsSet_;
}

void Match::unsetkey()
{
    keyIsSet_ = false;
}

std::string Match::getValue() const
{
    return value_;
}

void Match::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool Match::valueIsSet() const
{
    return valueIsSet_;
}

void Match::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


