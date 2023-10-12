

#include "huaweicloud/cdn/v2/model/IpFilter.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




IpFilter::IpFilter()
{
    type_ = "";
    typeIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

IpFilter::~IpFilter() = default;

void IpFilter::validate()
{
}

web::json::value IpFilter::toJson() const
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
bool IpFilter::fromJson(const web::json::value& val)
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


std::string IpFilter::getType() const
{
    return type_;
}

void IpFilter::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool IpFilter::typeIsSet() const
{
    return typeIsSet_;
}

void IpFilter::unsettype()
{
    typeIsSet_ = false;
}

std::string IpFilter::getValue() const
{
    return value_;
}

void IpFilter::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool IpFilter::valueIsSet() const
{
    return valueIsSet_;
}

void IpFilter::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


