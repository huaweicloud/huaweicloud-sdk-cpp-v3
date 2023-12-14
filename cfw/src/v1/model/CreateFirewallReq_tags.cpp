

#include "huaweicloud/cfw/v1/model/CreateFirewallReq_tags.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




CreateFirewallReq_tags::CreateFirewallReq_tags()
{
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

CreateFirewallReq_tags::~CreateFirewallReq_tags() = default;

void CreateFirewallReq_tags::validate()
{
}

web::json::value CreateFirewallReq_tags::toJson() const
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
bool CreateFirewallReq_tags::fromJson(const web::json::value& val)
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


std::string CreateFirewallReq_tags::getKey() const
{
    return key_;
}

void CreateFirewallReq_tags::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool CreateFirewallReq_tags::keyIsSet() const
{
    return keyIsSet_;
}

void CreateFirewallReq_tags::unsetkey()
{
    keyIsSet_ = false;
}

std::string CreateFirewallReq_tags::getValue() const
{
    return value_;
}

void CreateFirewallReq_tags::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool CreateFirewallReq_tags::valueIsSet() const
{
    return valueIsSet_;
}

void CreateFirewallReq_tags::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


