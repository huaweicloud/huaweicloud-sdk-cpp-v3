

#include "huaweicloud/ims/v2/model/Links.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




Links::Links()
{
    href_ = "";
    hrefIsSet_ = false;
    rel_ = "";
    relIsSet_ = false;
}

Links::~Links() = default;

void Links::validate()
{
}

web::json::value Links::toJson() const
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

bool Links::fromJson(const web::json::value& val)
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


std::string Links::getHref() const
{
    return href_;
}

void Links::setHref(const std::string& value)
{
    href_ = value;
    hrefIsSet_ = true;
}

bool Links::hrefIsSet() const
{
    return hrefIsSet_;
}

void Links::unsethref()
{
    hrefIsSet_ = false;
}

std::string Links::getRel() const
{
    return rel_;
}

void Links::setRel(const std::string& value)
{
    rel_ = value;
    relIsSet_ = true;
}

bool Links::relIsSet() const
{
    return relIsSet_;
}

void Links::unsetrel()
{
    relIsSet_ = false;
}

}
}
}
}
}


