

#include "huaweicloud/smn/v2/model/LinksItem.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




LinksItem::LinksItem()
{
    href_ = "";
    hrefIsSet_ = false;
    rel_ = "";
    relIsSet_ = false;
}

LinksItem::~LinksItem() = default;

void LinksItem::validate()
{
}

web::json::value LinksItem::toJson() const
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

bool LinksItem::fromJson(const web::json::value& val)
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

std::string LinksItem::getHref() const
{
    return href_;
}

void LinksItem::setHref(const std::string& value)
{
    href_ = value;
    hrefIsSet_ = true;
}

bool LinksItem::hrefIsSet() const
{
    return hrefIsSet_;
}

void LinksItem::unsethref()
{
    hrefIsSet_ = false;
}

std::string LinksItem::getRel() const
{
    return rel_;
}

void LinksItem::setRel(const std::string& value)
{
    rel_ = value;
    relIsSet_ = true;
}

bool LinksItem::relIsSet() const
{
    return relIsSet_;
}

void LinksItem::unsetrel()
{
    relIsSet_ = false;
}

}
}
}
}
}


