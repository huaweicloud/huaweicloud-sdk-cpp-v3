

#include "huaweicloud/vpc/model/NeutronPageLink.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronPageLink::NeutronPageLink()
{
    href_ = "";
    hrefIsSet_ = false;
    rel_ = "";
    relIsSet_ = false;
}

NeutronPageLink::~NeutronPageLink() = default;

void NeutronPageLink::validate()
{
}

web::json::value NeutronPageLink::toJson() const
{
    web::json::value val = web::json::value::object();

    if(hrefIsSet_) {
        val[utility::conversions::to_string_t("href")] = ModelBase::toJson(href_);
    }
    if(relIsSet_) {
        val[utility::conversions::to_string_t("rel")] = ModelBase::toJson(rel_);
    }

    return val;
}

bool NeutronPageLink::fromJson(const web::json::value& val)
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
    return ok;
}


std::string NeutronPageLink::getHref() const
{
    return href_;
}

void NeutronPageLink::setHref(const std::string& value)
{
    href_ = value;
    hrefIsSet_ = true;
}

bool NeutronPageLink::hrefIsSet() const
{
    return hrefIsSet_;
}

void NeutronPageLink::unsethref()
{
    hrefIsSet_ = false;
}

std::string NeutronPageLink::getRel() const
{
    return rel_;
}

void NeutronPageLink::setRel(const std::string& value)
{
    rel_ = value;
    relIsSet_ = true;
}

bool NeutronPageLink::relIsSet() const
{
    return relIsSet_;
}

void NeutronPageLink::unsetrel()
{
    relIsSet_ = false;
}

}
}
}
}
}


