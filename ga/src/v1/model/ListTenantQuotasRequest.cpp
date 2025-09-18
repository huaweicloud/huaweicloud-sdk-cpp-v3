

#include "huaweicloud/ga/v1/model/ListTenantQuotasRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




ListTenantQuotasRequest::ListTenantQuotasRequest()
{
    domainId_ = "";
    domainIdIsSet_ = false;
}

ListTenantQuotasRequest::~ListTenantQuotasRequest() = default;

void ListTenantQuotasRequest::validate()
{
}

web::json::value ListTenantQuotasRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }

    return val;
}
bool ListTenantQuotasRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
        }
    }
    return ok;
}


std::string ListTenantQuotasRequest::getDomainId() const
{
    return domainId_;
}

void ListTenantQuotasRequest::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool ListTenantQuotasRequest::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void ListTenantQuotasRequest::unsetdomainId()
{
    domainIdIsSet_ = false;
}

}
}
}
}
}


