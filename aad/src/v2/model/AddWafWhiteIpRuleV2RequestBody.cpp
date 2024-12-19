

#include "huaweicloud/aad/v2/model/AddWafWhiteIpRuleV2RequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {




AddWafWhiteIpRuleV2RequestBody::AddWafWhiteIpRuleV2RequestBody()
{
    domainName_ = "";
    domainNameIsSet_ = false;
    ipsIsSet_ = false;
    overseasType_ = 0;
    overseasTypeIsSet_ = false;
    type_ = 0;
    typeIsSet_ = false;
}

AddWafWhiteIpRuleV2RequestBody::~AddWafWhiteIpRuleV2RequestBody() = default;

void AddWafWhiteIpRuleV2RequestBody::validate()
{
}

web::json::value AddWafWhiteIpRuleV2RequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainNameIsSet_) {
        val[utility::conversions::to_string_t("domain_name")] = ModelBase::toJson(domainName_);
    }
    if(ipsIsSet_) {
        val[utility::conversions::to_string_t("ips")] = ModelBase::toJson(ips_);
    }
    if(overseasTypeIsSet_) {
        val[utility::conversions::to_string_t("overseas_type")] = ModelBase::toJson(overseasType_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}
bool AddWafWhiteIpRuleV2RequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("ips"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ips"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIps(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    return ok;
}


std::string AddWafWhiteIpRuleV2RequestBody::getDomainName() const
{
    return domainName_;
}

void AddWafWhiteIpRuleV2RequestBody::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool AddWafWhiteIpRuleV2RequestBody::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void AddWafWhiteIpRuleV2RequestBody::unsetdomainName()
{
    domainNameIsSet_ = false;
}

std::vector<std::string>& AddWafWhiteIpRuleV2RequestBody::getIps()
{
    return ips_;
}

void AddWafWhiteIpRuleV2RequestBody::setIps(const std::vector<std::string>& value)
{
    ips_ = value;
    ipsIsSet_ = true;
}

bool AddWafWhiteIpRuleV2RequestBody::ipsIsSet() const
{
    return ipsIsSet_;
}

void AddWafWhiteIpRuleV2RequestBody::unsetips()
{
    ipsIsSet_ = false;
}

int32_t AddWafWhiteIpRuleV2RequestBody::getOverseasType() const
{
    return overseasType_;
}

void AddWafWhiteIpRuleV2RequestBody::setOverseasType(int32_t value)
{
    overseasType_ = value;
    overseasTypeIsSet_ = true;
}

bool AddWafWhiteIpRuleV2RequestBody::overseasTypeIsSet() const
{
    return overseasTypeIsSet_;
}

void AddWafWhiteIpRuleV2RequestBody::unsetoverseasType()
{
    overseasTypeIsSet_ = false;
}

int32_t AddWafWhiteIpRuleV2RequestBody::getType() const
{
    return type_;
}

void AddWafWhiteIpRuleV2RequestBody::setType(int32_t value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool AddWafWhiteIpRuleV2RequestBody::typeIsSet() const
{
    return typeIsSet_;
}

void AddWafWhiteIpRuleV2RequestBody::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


