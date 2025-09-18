

#include "huaweicloud/projectman/v4/model/ListProjectDomainsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ListProjectDomainsResponse::ListProjectDomainsResponse()
{
    total_ = 0;
    totalIsSet_ = false;
    domainsIsSet_ = false;
}

ListProjectDomainsResponse::~ListProjectDomainsResponse() = default;

void ListProjectDomainsResponse::validate()
{
}

web::json::value ListProjectDomainsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(domainsIsSet_) {
        val[utility::conversions::to_string_t("domains")] = ModelBase::toJson(domains_);
    }

    return val;
}
bool ListProjectDomainsResponse::fromJson(const web::json::value& val)
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
            std::vector<CreateProjectDomainResponseBody> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomains(refVal);
        }
    }
    return ok;
}


int32_t ListProjectDomainsResponse::getTotal() const
{
    return total_;
}

void ListProjectDomainsResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListProjectDomainsResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListProjectDomainsResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<CreateProjectDomainResponseBody>& ListProjectDomainsResponse::getDomains()
{
    return domains_;
}

void ListProjectDomainsResponse::setDomains(const std::vector<CreateProjectDomainResponseBody>& value)
{
    domains_ = value;
    domainsIsSet_ = true;
}

bool ListProjectDomainsResponse::domainsIsSet() const
{
    return domainsIsSet_;
}

void ListProjectDomainsResponse::unsetdomains()
{
    domainsIsSet_ = false;
}

}
}
}
}
}


