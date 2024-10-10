

#include "huaweicloud/aad/v2/model/ShowWafPolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {




ShowWafPolicyRequest::ShowWafPolicyRequest()
{
    domainName_ = "";
    domainNameIsSet_ = false;
    overseasType_ = 0;
    overseasTypeIsSet_ = false;
}

ShowWafPolicyRequest::~ShowWafPolicyRequest() = default;

void ShowWafPolicyRequest::validate()
{
}

web::json::value ShowWafPolicyRequest::toJson() const
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
bool ShowWafPolicyRequest::fromJson(const web::json::value& val)
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


std::string ShowWafPolicyRequest::getDomainName() const
{
    return domainName_;
}

void ShowWafPolicyRequest::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool ShowWafPolicyRequest::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void ShowWafPolicyRequest::unsetdomainName()
{
    domainNameIsSet_ = false;
}

int32_t ShowWafPolicyRequest::getOverseasType() const
{
    return overseasType_;
}

void ShowWafPolicyRequest::setOverseasType(int32_t value)
{
    overseasType_ = value;
    overseasTypeIsSet_ = true;
}

bool ShowWafPolicyRequest::overseasTypeIsSet() const
{
    return overseasTypeIsSet_;
}

void ShowWafPolicyRequest::unsetoverseasType()
{
    overseasTypeIsSet_ = false;
}

}
}
}
}
}


