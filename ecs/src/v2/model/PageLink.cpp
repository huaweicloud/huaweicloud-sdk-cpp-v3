

#include "huaweicloud/ecs/v2/model/PageLink.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




PageLink::PageLink()
{
    href_ = "";
    hrefIsSet_ = false;
    rel_ = "";
    relIsSet_ = false;
}

PageLink::~PageLink() = default;

void PageLink::validate()
{
}

web::json::value PageLink::toJson() const
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
bool PageLink::fromJson(const web::json::value& val)
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


std::string PageLink::getHref() const
{
    return href_;
}

void PageLink::setHref(const std::string& value)
{
    href_ = value;
    hrefIsSet_ = true;
}

bool PageLink::hrefIsSet() const
{
    return hrefIsSet_;
}

void PageLink::unsethref()
{
    hrefIsSet_ = false;
}

std::string PageLink::getRel() const
{
    return rel_;
}

void PageLink::setRel(const std::string& value)
{
    rel_ = value;
    relIsSet_ = true;
}

bool PageLink::relIsSet() const
{
    return relIsSet_;
}

void PageLink::unsetrel()
{
    relIsSet_ = false;
}

}
}
}
}
}


