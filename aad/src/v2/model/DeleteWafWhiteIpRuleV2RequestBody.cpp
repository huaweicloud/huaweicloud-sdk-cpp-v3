

#include "huaweicloud/aad/v2/model/DeleteWafWhiteIpRuleV2RequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {




DeleteWafWhiteIpRuleV2RequestBody::DeleteWafWhiteIpRuleV2RequestBody()
{
    idsIsSet_ = false;
    domainName_ = "";
    domainNameIsSet_ = false;
    overseasType_ = 0;
    overseasTypeIsSet_ = false;
}

DeleteWafWhiteIpRuleV2RequestBody::~DeleteWafWhiteIpRuleV2RequestBody() = default;

void DeleteWafWhiteIpRuleV2RequestBody::validate()
{
}

web::json::value DeleteWafWhiteIpRuleV2RequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idsIsSet_) {
        val[utility::conversions::to_string_t("ids")] = ModelBase::toJson(ids_);
    }
    if(domainNameIsSet_) {
        val[utility::conversions::to_string_t("domain_name")] = ModelBase::toJson(domainName_);
    }
    if(overseasTypeIsSet_) {
        val[utility::conversions::to_string_t("overseas_type")] = ModelBase::toJson(overseasType_);
    }

    return val;
}
bool DeleteWafWhiteIpRuleV2RequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIds(refVal);
        }
    }
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


std::vector<std::string>& DeleteWafWhiteIpRuleV2RequestBody::getIds()
{
    return ids_;
}

void DeleteWafWhiteIpRuleV2RequestBody::setIds(const std::vector<std::string>& value)
{
    ids_ = value;
    idsIsSet_ = true;
}

bool DeleteWafWhiteIpRuleV2RequestBody::idsIsSet() const
{
    return idsIsSet_;
}

void DeleteWafWhiteIpRuleV2RequestBody::unsetids()
{
    idsIsSet_ = false;
}

std::string DeleteWafWhiteIpRuleV2RequestBody::getDomainName() const
{
    return domainName_;
}

void DeleteWafWhiteIpRuleV2RequestBody::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool DeleteWafWhiteIpRuleV2RequestBody::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void DeleteWafWhiteIpRuleV2RequestBody::unsetdomainName()
{
    domainNameIsSet_ = false;
}

int32_t DeleteWafWhiteIpRuleV2RequestBody::getOverseasType() const
{
    return overseasType_;
}

void DeleteWafWhiteIpRuleV2RequestBody::setOverseasType(int32_t value)
{
    overseasType_ = value;
    overseasTypeIsSet_ = true;
}

bool DeleteWafWhiteIpRuleV2RequestBody::overseasTypeIsSet() const
{
    return overseasTypeIsSet_;
}

void DeleteWafWhiteIpRuleV2RequestBody::unsetoverseasType()
{
    overseasTypeIsSet_ = false;
}

}
}
}
}
}


