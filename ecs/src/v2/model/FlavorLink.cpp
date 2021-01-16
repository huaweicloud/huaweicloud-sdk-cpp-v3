

#include "huaweicloud/ecs/v2/model/FlavorLink.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




FlavorLink::FlavorLink()
{
    href_ = "";
    hrefIsSet_ = false;
    rel_ = "";
    relIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

FlavorLink::~FlavorLink() = default;

void FlavorLink::validate()
{
}

web::json::value FlavorLink::toJson() const
{
    web::json::value val = web::json::value::object();

    if(hrefIsSet_) {
        val[utility::conversions::to_string_t("href")] = ModelBase::toJson(href_);
    }
    if(relIsSet_) {
        val[utility::conversions::to_string_t("rel")] = ModelBase::toJson(rel_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}

bool FlavorLink::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("href"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("href"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHref(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rel"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rel"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    return ok;
}


std::string FlavorLink::getHref() const
{
    return href_;
}

void FlavorLink::setHref(const std::string& value)
{
    href_ = value;
    hrefIsSet_ = true;
}

bool FlavorLink::hrefIsSet() const
{
    return hrefIsSet_;
}

void FlavorLink::unsethref()
{
    hrefIsSet_ = false;
}

std::string FlavorLink::getRel() const
{
    return rel_;
}

void FlavorLink::setRel(const std::string& value)
{
    rel_ = value;
    relIsSet_ = true;
}

bool FlavorLink::relIsSet() const
{
    return relIsSet_;
}

void FlavorLink::unsetrel()
{
    relIsSet_ = false;
}

std::string FlavorLink::getType() const
{
    return type_;
}

void FlavorLink::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool FlavorLink::typeIsSet() const
{
    return typeIsSet_;
}

void FlavorLink::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


