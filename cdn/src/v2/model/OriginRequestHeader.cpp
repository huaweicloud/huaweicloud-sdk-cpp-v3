

#include "huaweicloud/cdn/v2/model/OriginRequestHeader.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




OriginRequestHeader::OriginRequestHeader()
{
    name_ = "";
    nameIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
    action_ = "";
    actionIsSet_ = false;
}

OriginRequestHeader::~OriginRequestHeader() = default;

void OriginRequestHeader::validate()
{
}

web::json::value OriginRequestHeader::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }
    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }

    return val;
}

bool OriginRequestHeader::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAction(refVal);
        }
    }
    return ok;
}

std::string OriginRequestHeader::getName() const
{
    return name_;
}

void OriginRequestHeader::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool OriginRequestHeader::nameIsSet() const
{
    return nameIsSet_;
}

void OriginRequestHeader::unsetname()
{
    nameIsSet_ = false;
}

std::string OriginRequestHeader::getValue() const
{
    return value_;
}

void OriginRequestHeader::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool OriginRequestHeader::valueIsSet() const
{
    return valueIsSet_;
}

void OriginRequestHeader::unsetvalue()
{
    valueIsSet_ = false;
}

std::string OriginRequestHeader::getAction() const
{
    return action_;
}

void OriginRequestHeader::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool OriginRequestHeader::actionIsSet() const
{
    return actionIsSet_;
}

void OriginRequestHeader::unsetaction()
{
    actionIsSet_ = false;
}

}
}
}
}
}


