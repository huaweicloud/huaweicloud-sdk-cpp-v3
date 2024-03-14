

#include "huaweicloud/cdn/v2/model/ListDomainsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




ListDomainsResponse::ListDomainsResponse()
{
    total_ = 0;
    totalIsSet_ = false;
    domainsIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ListDomainsResponse::~ListDomainsResponse() = default;

void ListDomainsResponse::validate()
{
}

web::json::value ListDomainsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(domainsIsSet_) {
        val[utility::conversions::to_string_t("domains")] = ModelBase::toJson(domains_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ListDomainsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domains"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domains"));
        if(!fieldValue.is_null())
        {
            std::vector<Domains> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomains(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


int32_t ListDomainsResponse::getTotal() const
{
    return total_;
}

void ListDomainsResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListDomainsResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListDomainsResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<Domains>& ListDomainsResponse::getDomains()
{
    return domains_;
}

void ListDomainsResponse::setDomains(const std::vector<Domains>& value)
{
    domains_ = value;
    domainsIsSet_ = true;
}

bool ListDomainsResponse::domainsIsSet() const
{
    return domainsIsSet_;
}

void ListDomainsResponse::unsetdomains()
{
    domainsIsSet_ = false;
}

std::string ListDomainsResponse::getXRequestId() const
{
    return xRequestId_;
}

void ListDomainsResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ListDomainsResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ListDomainsResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


