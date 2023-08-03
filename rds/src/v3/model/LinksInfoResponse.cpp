

#include "huaweicloud/rds/v3/model/LinksInfoResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




LinksInfoResponse::LinksInfoResponse()
{
    href_ = "";
    hrefIsSet_ = false;
    rel_ = "";
    relIsSet_ = false;
}

LinksInfoResponse::~LinksInfoResponse() = default;

void LinksInfoResponse::validate()
{
}

web::json::value LinksInfoResponse::toJson() const
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

bool LinksInfoResponse::fromJson(const web::json::value& val)
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

std::string LinksInfoResponse::getHref() const
{
    return href_;
}

void LinksInfoResponse::setHref(const std::string& value)
{
    href_ = value;
    hrefIsSet_ = true;
}

bool LinksInfoResponse::hrefIsSet() const
{
    return hrefIsSet_;
}

void LinksInfoResponse::unsethref()
{
    hrefIsSet_ = false;
}

std::string LinksInfoResponse::getRel() const
{
    return rel_;
}

void LinksInfoResponse::setRel(const std::string& value)
{
    rel_ = value;
    relIsSet_ = true;
}

bool LinksInfoResponse::relIsSet() const
{
    return relIsSet_;
}

void LinksInfoResponse::unsetrel()
{
    relIsSet_ = false;
}

}
}
}
}
}


