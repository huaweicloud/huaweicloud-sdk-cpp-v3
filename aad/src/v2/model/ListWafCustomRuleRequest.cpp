

#include "huaweicloud/aad/v2/model/ListWafCustomRuleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {




ListWafCustomRuleRequest::ListWafCustomRuleRequest()
{
    domainName_ = "";
    domainNameIsSet_ = false;
    overseasType_ = 0;
    overseasTypeIsSet_ = false;
}

ListWafCustomRuleRequest::~ListWafCustomRuleRequest() = default;

void ListWafCustomRuleRequest::validate()
{
}

web::json::value ListWafCustomRuleRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainNameIsSet_) {
        val[utility::conversions::to_string_t("domain_name")] = ModelBase::toJson(domainName_);
    }
    if(overseasTypeIsSet_) {
        val[utility::conversions::to_string_t("overseas_type")] = ModelBase::toJson(overseasType_);
    }

    return val;
}
bool ListWafCustomRuleRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("overseas_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("overseas_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOverseasType(refVal);
        }
    }
    return ok;
}


std::string ListWafCustomRuleRequest::getDomainName() const
{
    return domainName_;
}

void ListWafCustomRuleRequest::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool ListWafCustomRuleRequest::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void ListWafCustomRuleRequest::unsetdomainName()
{
    domainNameIsSet_ = false;
}

int32_t ListWafCustomRuleRequest::getOverseasType() const
{
    return overseasType_;
}

void ListWafCustomRuleRequest::setOverseasType(int32_t value)
{
    overseasType_ = value;
    overseasTypeIsSet_ = true;
}

bool ListWafCustomRuleRequest::overseasTypeIsSet() const
{
    return overseasTypeIsSet_;
}

void ListWafCustomRuleRequest::unsetoverseasType()
{
    overseasTypeIsSet_ = false;
}

}
}
}
}
}

