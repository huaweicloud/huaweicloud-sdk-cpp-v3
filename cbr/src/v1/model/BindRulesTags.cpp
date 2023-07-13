

#include "huaweicloud/cbr/v1/model/BindRulesTags.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




BindRulesTags::BindRulesTags()
{
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

BindRulesTags::~BindRulesTags() = default;

void BindRulesTags::validate()
{
}

web::json::value BindRulesTags::toJson() const
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

bool BindRulesTags::fromJson(const web::json::value& val)
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

std::string BindRulesTags::getKey() const
{
    return key_;
}

void BindRulesTags::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool BindRulesTags::keyIsSet() const
{
    return keyIsSet_;
}

void BindRulesTags::unsetkey()
{
    keyIsSet_ = false;
}

std::string BindRulesTags::getValue() const
{
    return value_;
}

void BindRulesTags::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool BindRulesTags::valueIsSet() const
{
    return valueIsSet_;
}

void BindRulesTags::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


