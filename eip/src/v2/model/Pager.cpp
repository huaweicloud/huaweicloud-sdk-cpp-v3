

#include "huaweicloud/eip/v2/model/Pager.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




Pager::Pager()
{
    href_ = "";
    hrefIsSet_ = false;
    rel_ = "";
    relIsSet_ = false;
}

Pager::~Pager() = default;

void Pager::validate()
{
}

web::json::value Pager::toJson() const
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
bool Pager::fromJson(const web::json::value& val)
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


std::string Pager::getHref() const
{
    return href_;
}

void Pager::setHref(const std::string& value)
{
    href_ = value;
    hrefIsSet_ = true;
}

bool Pager::hrefIsSet() const
{
    return hrefIsSet_;
}

void Pager::unsethref()
{
    hrefIsSet_ = false;
}

std::string Pager::getRel() const
{
    return rel_;
}

void Pager::setRel(const std::string& value)
{
    rel_ = value;
    relIsSet_ = true;
}

bool Pager::relIsSet() const
{
    return relIsSet_;
}

void Pager::unsetrel()
{
    relIsSet_ = false;
}

}
}
}
}
}


