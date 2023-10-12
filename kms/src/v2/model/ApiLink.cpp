

#include "huaweicloud/kms/v2/model/ApiLink.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




ApiLink::ApiLink()
{
    href_ = "";
    hrefIsSet_ = false;
    rel_ = "";
    relIsSet_ = false;
}

ApiLink::~ApiLink() = default;

void ApiLink::validate()
{
}

web::json::value ApiLink::toJson() const
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
bool ApiLink::fromJson(const web::json::value& val)
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


std::string ApiLink::getHref() const
{
    return href_;
}

void ApiLink::setHref(const std::string& value)
{
    href_ = value;
    hrefIsSet_ = true;
}

bool ApiLink::hrefIsSet() const
{
    return hrefIsSet_;
}

void ApiLink::unsethref()
{
    hrefIsSet_ = false;
}

std::string ApiLink::getRel() const
{
    return rel_;
}

void ApiLink::setRel(const std::string& value)
{
    rel_ = value;
    relIsSet_ = true;
}

bool ApiLink::relIsSet() const
{
    return relIsSet_;
}

void ApiLink::unsetrel()
{
    relIsSet_ = false;
}

}
}
}
}
}


