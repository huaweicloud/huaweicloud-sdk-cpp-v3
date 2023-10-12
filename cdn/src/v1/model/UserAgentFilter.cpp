

#include "huaweicloud/cdn/v1/model/UserAgentFilter.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




UserAgentFilter::UserAgentFilter()
{
    type_ = "";
    typeIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

UserAgentFilter::~UserAgentFilter() = default;

void UserAgentFilter::validate()
{
}

web::json::value UserAgentFilter::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }

    return val;
}
bool UserAgentFilter::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
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


std::string UserAgentFilter::getType() const
{
    return type_;
}

void UserAgentFilter::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool UserAgentFilter::typeIsSet() const
{
    return typeIsSet_;
}

void UserAgentFilter::unsettype()
{
    typeIsSet_ = false;
}

std::string UserAgentFilter::getValue() const
{
    return value_;
}

void UserAgentFilter::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool UserAgentFilter::valueIsSet() const
{
    return valueIsSet_;
}

void UserAgentFilter::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


