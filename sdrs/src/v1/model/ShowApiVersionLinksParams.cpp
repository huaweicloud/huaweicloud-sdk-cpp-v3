

#include "huaweicloud/sdrs/v1/model/ShowApiVersionLinksParams.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




ShowApiVersionLinksParams::ShowApiVersionLinksParams()
{
    rel_ = "";
    relIsSet_ = false;
    href_ = "";
    hrefIsSet_ = false;
}

ShowApiVersionLinksParams::~ShowApiVersionLinksParams() = default;

void ShowApiVersionLinksParams::validate()
{
}

web::json::value ShowApiVersionLinksParams::toJson() const
{
    web::json::value val = web::json::value::object();

    if(relIsSet_) {
        val[utility::conversions::to_string_t("rel")] = ModelBase::toJson(rel_);
    }
    if(hrefIsSet_) {
        val[utility::conversions::to_string_t("href")] = ModelBase::toJson(href_);
    }

    return val;
}

bool ShowApiVersionLinksParams::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("rel"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rel"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("href"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("href"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHref(refVal);
        }
    }
    return ok;
}

std::string ShowApiVersionLinksParams::getRel() const
{
    return rel_;
}

void ShowApiVersionLinksParams::setRel(const std::string& value)
{
    rel_ = value;
    relIsSet_ = true;
}

bool ShowApiVersionLinksParams::relIsSet() const
{
    return relIsSet_;
}

void ShowApiVersionLinksParams::unsetrel()
{
    relIsSet_ = false;
}

std::string ShowApiVersionLinksParams::getHref() const
{
    return href_;
}

void ShowApiVersionLinksParams::setHref(const std::string& value)
{
    href_ = value;
    hrefIsSet_ = true;
}

bool ShowApiVersionLinksParams::hrefIsSet() const
{
    return hrefIsSet_;
}

void ShowApiVersionLinksParams::unsethref()
{
    hrefIsSet_ = false;
}

}
}
}
}
}


