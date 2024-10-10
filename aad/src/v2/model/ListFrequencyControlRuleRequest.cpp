

#include "huaweicloud/aad/v2/model/ListFrequencyControlRuleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {




ListFrequencyControlRuleRequest::ListFrequencyControlRuleRequest()
{
    domainName_ = "";
    domainNameIsSet_ = false;
}

ListFrequencyControlRuleRequest::~ListFrequencyControlRuleRequest() = default;

void ListFrequencyControlRuleRequest::validate()
{
}

web::json::value ListFrequencyControlRuleRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainNameIsSet_) {
        val[utility::conversions::to_string_t("domain_name")] = ModelBase::toJson(domainName_);
    }

    return val;
}
bool ListFrequencyControlRuleRequest::fromJson(const web::json::value& val)
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


std::string ListFrequencyControlRuleRequest::getDomainName() const
{
    return domainName_;
}

void ListFrequencyControlRuleRequest::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool ListFrequencyControlRuleRequest::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void ListFrequencyControlRuleRequest::unsetdomainName()
{
    domainNameIsSet_ = false;
}

}
}
}
}
}


