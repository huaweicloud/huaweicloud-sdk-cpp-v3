

#include "huaweicloud/cbr/v1/model/ListDomainProjectsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




ListDomainProjectsRequest::ListDomainProjectsRequest()
{
    domainName_ = "";
    domainNameIsSet_ = false;
}

ListDomainProjectsRequest::~ListDomainProjectsRequest() = default;

void ListDomainProjectsRequest::validate()
{
}

web::json::value ListDomainProjectsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainNameIsSet_) {
        val[utility::conversions::to_string_t("domain_name")] = ModelBase::toJson(domainName_);
    }

    return val;
}

bool ListDomainProjectsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("domain_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainName(refVal);
        }
    }
    return ok;
}

std::string ListDomainProjectsRequest::getDomainName() const
{
    return domainName_;
}

void ListDomainProjectsRequest::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool ListDomainProjectsRequest::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void ListDomainProjectsRequest::unsetdomainName()
{
    domainNameIsSet_ = false;
}

}
}
}
}
}


