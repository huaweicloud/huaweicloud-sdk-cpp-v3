

#include "huaweicloud/ecs/model/NovaLink.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




NovaLink::NovaLink()
{
    href_ = "";
    hrefIsSet_ = false;
    rel_ = "";
    relIsSet_ = false;
}

NovaLink::~NovaLink() = default;

void NovaLink::validate()
{
}

web::json::value NovaLink::toJson() const
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

bool NovaLink::fromJson(const web::json::value& val)
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


std::string NovaLink::getHref() const
{
    return href_;
}

void NovaLink::setHref(const std::string& value)
{
    href_ = value;
    hrefIsSet_ = true;
}

bool NovaLink::hrefIsSet() const
{
    return hrefIsSet_;
}

void NovaLink::unsethref()
{
    hrefIsSet_ = false;
}

std::string NovaLink::getRel() const
{
    return rel_;
}

void NovaLink::setRel(const std::string& value)
{
    rel_ = value;
    relIsSet_ = true;
}

bool NovaLink::relIsSet() const
{
    return relIsSet_;
}

void NovaLink::unsetrel()
{
    relIsSet_ = false;
}

}
}
}
}
}


