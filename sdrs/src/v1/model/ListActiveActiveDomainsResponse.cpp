

#include "huaweicloud/sdrs/v1/model/ListActiveActiveDomainsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




ListActiveActiveDomainsResponse::ListActiveActiveDomainsResponse()
{
    domainsIsSet_ = false;
}

ListActiveActiveDomainsResponse::~ListActiveActiveDomainsResponse() = default;

void ListActiveActiveDomainsResponse::validate()
{
}

web::json::value ListActiveActiveDomainsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainsIsSet_) {
        val[utility::conversions::to_string_t("domains")] = ModelBase::toJson(domains_);
    }

    return val;
}
bool ListActiveActiveDomainsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("domains"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domains"));
        if(!fieldValue.is_null())
        {
            std::vector<ShowActiveActiveDomainParams> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomains(refVal);
        }
    }
    return ok;
}


std::vector<ShowActiveActiveDomainParams>& ListActiveActiveDomainsResponse::getDomains()
{
    return domains_;
}

void ListActiveActiveDomainsResponse::setDomains(const std::vector<ShowActiveActiveDomainParams>& value)
{
    domains_ = value;
    domainsIsSet_ = true;
}

bool ListActiveActiveDomainsResponse::domainsIsSet() const
{
    return domainsIsSet_;
}

void ListActiveActiveDomainsResponse::unsetdomains()
{
    domainsIsSet_ = false;
}

}
}
}
}
}


