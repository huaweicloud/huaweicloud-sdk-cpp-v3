

#include "huaweicloud/aad/v1/model/CadDomainSwitchRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {




CadDomainSwitchRequest::CadDomainSwitchRequest()
{
    domainId_ = "";
    domainIdIsSet_ = false;
    wafSwitch_ = 0;
    wafSwitchIsSet_ = false;
    ccSwitch_ = 0;
    ccSwitchIsSet_ = false;
}

CadDomainSwitchRequest::~CadDomainSwitchRequest() = default;

void CadDomainSwitchRequest::validate()
{
}

web::json::value CadDomainSwitchRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(wafSwitchIsSet_) {
        val[utility::conversions::to_string_t("waf_switch")] = ModelBase::toJson(wafSwitch_);
    }
    if(ccSwitchIsSet_) {
        val[utility::conversions::to_string_t("cc_switch")] = ModelBase::toJson(ccSwitch_);
    }

    return val;
}
bool CadDomainSwitchRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("waf_switch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("waf_switch"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWafSwitch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cc_switch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cc_switch"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCcSwitch(refVal);
        }
    }
    return ok;
}


std::string CadDomainSwitchRequest::getDomainId() const
{
    return domainId_;
}

void CadDomainSwitchRequest::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool CadDomainSwitchRequest::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void CadDomainSwitchRequest::unsetdomainId()
{
    domainIdIsSet_ = false;
}

int32_t CadDomainSwitchRequest::getWafSwitch() const
{
    return wafSwitch_;
}

void CadDomainSwitchRequest::setWafSwitch(int32_t value)
{
    wafSwitch_ = value;
    wafSwitchIsSet_ = true;
}

bool CadDomainSwitchRequest::wafSwitchIsSet() const
{
    return wafSwitchIsSet_;
}

void CadDomainSwitchRequest::unsetwafSwitch()
{
    wafSwitchIsSet_ = false;
}

int32_t CadDomainSwitchRequest::getCcSwitch() const
{
    return ccSwitch_;
}

void CadDomainSwitchRequest::setCcSwitch(int32_t value)
{
    ccSwitch_ = value;
    ccSwitchIsSet_ = true;
}

bool CadDomainSwitchRequest::ccSwitchIsSet() const
{
    return ccSwitchIsSet_;
}

void CadDomainSwitchRequest::unsetccSwitch()
{
    ccSwitchIsSet_ = false;
}

}
}
}
}
}


