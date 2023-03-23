

#include "huaweicloud/tms/v1/model/Link.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Tms {
namespace V1 {
namespace Model {




Link::Link()
{
    href_ = "";
    hrefIsSet_ = false;
    rel_ = "";
    relIsSet_ = false;
}

Link::~Link() = default;

void Link::validate()
{
}

web::json::value Link::toJson() const
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

bool Link::fromJson(const web::json::value& val)
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


std::string Link::getHref() const
{
    return href_;
}

void Link::setHref(const std::string& value)
{
    href_ = value;
    hrefIsSet_ = true;
}

bool Link::hrefIsSet() const
{
    return hrefIsSet_;
}

void Link::unsethref()
{
    hrefIsSet_ = false;
}

std::string Link::getRel() const
{
    return rel_;
}

void Link::setRel(const std::string& value)
{
    rel_ = value;
    relIsSet_ = true;
}

bool Link::relIsSet() const
{
    return relIsSet_;
}

void Link::unsetrel()
{
    relIsSet_ = false;
}

}
}
}
}
}


