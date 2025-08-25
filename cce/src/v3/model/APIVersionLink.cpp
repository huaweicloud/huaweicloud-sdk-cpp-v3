

#include "huaweicloud/cce/v3/model/APIVersionLink.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




APIVersionLink::APIVersionLink()
{
    href_ = "";
    hrefIsSet_ = false;
    rel_ = "";
    relIsSet_ = false;
}

APIVersionLink::~APIVersionLink() = default;

void APIVersionLink::validate()
{
}

web::json::value APIVersionLink::toJson() const
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
bool APIVersionLink::fromJson(const web::json::value& val)
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


std::string APIVersionLink::getHref() const
{
    return href_;
}

void APIVersionLink::setHref(const std::string& value)
{
    href_ = value;
    hrefIsSet_ = true;
}

bool APIVersionLink::hrefIsSet() const
{
    return hrefIsSet_;
}

void APIVersionLink::unsethref()
{
    hrefIsSet_ = false;
}

std::string APIVersionLink::getRel() const
{
    return rel_;
}

void APIVersionLink::setRel(const std::string& value)
{
    rel_ = value;
    relIsSet_ = true;
}

bool APIVersionLink::relIsSet() const
{
    return relIsSet_;
}

void APIVersionLink::unsetrel()
{
    relIsSet_ = false;
}

}
}
}
}
}


