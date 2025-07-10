

#include "huaweicloud/cdn/v2/model/ListRuleDetailsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




ListRuleDetailsRequest::ListRuleDetailsRequest()
{
    domainName_ = "";
    domainNameIsSet_ = false;
}

ListRuleDetailsRequest::~ListRuleDetailsRequest() = default;

void ListRuleDetailsRequest::validate()
{
}

web::json::value ListRuleDetailsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainNameIsSet_) {
        val[utility::conversions::to_string_t("domain_name")] = ModelBase::toJson(domainName_);
    }

    return val;
}
bool ListRuleDetailsRequest::fromJson(const web::json::value& val)
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


std::string ListRuleDetailsRequest::getDomainName() const
{
    return domainName_;
}

void ListRuleDetailsRequest::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool ListRuleDetailsRequest::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void ListRuleDetailsRequest::unsetdomainName()
{
    domainNameIsSet_ = false;
}

}
}
}
}
}


