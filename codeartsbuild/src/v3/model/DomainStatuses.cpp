

#include "huaweicloud/codeartsbuild/v3/model/DomainStatuses.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




DomainStatuses::DomainStatuses()
{
    serviceName_ = "";
    serviceNameIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
    domainName_ = "";
    domainNameIsSet_ = false;
    freeQuota_ = false;
    freeQuotaIsSet_ = false;
    freePackageQuota_ = false;
    freePackageQuotaIsSet_ = false;
    status_ = 0;
    statusIsSet_ = false;
    isFederation_ = 0;
    isFederationIsSet_ = false;
    isWhitelist_ = 0;
    isWhitelistIsSet_ = false;
    region_ = "";
    regionIsSet_ = false;
    packageType_ = "";
    packageTypeIsSet_ = false;
    domainType_ = 0;
    domainTypeIsSet_ = false;
    domainBusinessType_ = "";
    domainBusinessTypeIsSet_ = false;
    domainMaliciousDockerArgs_ = "";
    domainMaliciousDockerArgsIsSet_ = false;
    allowCustomEnv_ = 0;
    allowCustomEnvIsSet_ = false;
    specThreshold_ = "";
    specThresholdIsSet_ = false;
}

DomainStatuses::~DomainStatuses() = default;

void DomainStatuses::validate()
{
}

web::json::value DomainStatuses::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serviceNameIsSet_) {
        val[utility::conversions::to_string_t("service_name")] = ModelBase::toJson(serviceName_);
    }
    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(domainNameIsSet_) {
        val[utility::conversions::to_string_t("domain_name")] = ModelBase::toJson(domainName_);
    }
    if(freeQuotaIsSet_) {
        val[utility::conversions::to_string_t("free_quota")] = ModelBase::toJson(freeQuota_);
    }
    if(freePackageQuotaIsSet_) {
        val[utility::conversions::to_string_t("free_package_quota")] = ModelBase::toJson(freePackageQuota_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(isFederationIsSet_) {
        val[utility::conversions::to_string_t("is_federation")] = ModelBase::toJson(isFederation_);
    }
    if(isWhitelistIsSet_) {
        val[utility::conversions::to_string_t("is_whitelist")] = ModelBase::toJson(isWhitelist_);
    }
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }
    if(packageTypeIsSet_) {
        val[utility::conversions::to_string_t("package_type")] = ModelBase::toJson(packageType_);
    }
    if(domainTypeIsSet_) {
        val[utility::conversions::to_string_t("domain_type")] = ModelBase::toJson(domainType_);
    }
    if(domainBusinessTypeIsSet_) {
        val[utility::conversions::to_string_t("domain_business_type")] = ModelBase::toJson(domainBusinessType_);
    }
    if(domainMaliciousDockerArgsIsSet_) {
        val[utility::conversions::to_string_t("domain_malicious_docker_args")] = ModelBase::toJson(domainMaliciousDockerArgs_);
    }
    if(allowCustomEnvIsSet_) {
        val[utility::conversions::to_string_t("allow_custom_env")] = ModelBase::toJson(allowCustomEnv_);
    }
    if(specThresholdIsSet_) {
        val[utility::conversions::to_string_t("spec_threshold")] = ModelBase::toJson(specThreshold_);
    }

    return val;
}
bool DomainStatuses::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("service_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("free_quota"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("free_quota"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFreeQuota(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("free_package_quota"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("free_package_quota"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFreePackageQuota(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_federation"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_federation"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsFederation(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_whitelist"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_whitelist"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsWhitelist(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("package_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("package_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPackageType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_business_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_business_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainBusinessType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_malicious_docker_args"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_malicious_docker_args"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainMaliciousDockerArgs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("allow_custom_env"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("allow_custom_env"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAllowCustomEnv(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("spec_threshold"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spec_threshold"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpecThreshold(refVal);
        }
    }
    return ok;
}


std::string DomainStatuses::getServiceName() const
{
    return serviceName_;
}

void DomainStatuses::setServiceName(const std::string& value)
{
    serviceName_ = value;
    serviceNameIsSet_ = true;
}

bool DomainStatuses::serviceNameIsSet() const
{
    return serviceNameIsSet_;
}

void DomainStatuses::unsetserviceName()
{
    serviceNameIsSet_ = false;
}

std::string DomainStatuses::getDomainId() const
{
    return domainId_;
}

void DomainStatuses::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool DomainStatuses::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void DomainStatuses::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string DomainStatuses::getDomainName() const
{
    return domainName_;
}

void DomainStatuses::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool DomainStatuses::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void DomainStatuses::unsetdomainName()
{
    domainNameIsSet_ = false;
}

bool DomainStatuses::isFreeQuota() const
{
    return freeQuota_;
}

void DomainStatuses::setFreeQuota(bool value)
{
    freeQuota_ = value;
    freeQuotaIsSet_ = true;
}

bool DomainStatuses::freeQuotaIsSet() const
{
    return freeQuotaIsSet_;
}

void DomainStatuses::unsetfreeQuota()
{
    freeQuotaIsSet_ = false;
}

bool DomainStatuses::isFreePackageQuota() const
{
    return freePackageQuota_;
}

void DomainStatuses::setFreePackageQuota(bool value)
{
    freePackageQuota_ = value;
    freePackageQuotaIsSet_ = true;
}

bool DomainStatuses::freePackageQuotaIsSet() const
{
    return freePackageQuotaIsSet_;
}

void DomainStatuses::unsetfreePackageQuota()
{
    freePackageQuotaIsSet_ = false;
}

int32_t DomainStatuses::getStatus() const
{
    return status_;
}

void DomainStatuses::setStatus(int32_t value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool DomainStatuses::statusIsSet() const
{
    return statusIsSet_;
}

void DomainStatuses::unsetstatus()
{
    statusIsSet_ = false;
}

int32_t DomainStatuses::getIsFederation() const
{
    return isFederation_;
}

void DomainStatuses::setIsFederation(int32_t value)
{
    isFederation_ = value;
    isFederationIsSet_ = true;
}

bool DomainStatuses::isFederationIsSet() const
{
    return isFederationIsSet_;
}

void DomainStatuses::unsetisFederation()
{
    isFederationIsSet_ = false;
}

int32_t DomainStatuses::getIsWhitelist() const
{
    return isWhitelist_;
}

void DomainStatuses::setIsWhitelist(int32_t value)
{
    isWhitelist_ = value;
    isWhitelistIsSet_ = true;
}

bool DomainStatuses::isWhitelistIsSet() const
{
    return isWhitelistIsSet_;
}

void DomainStatuses::unsetisWhitelist()
{
    isWhitelistIsSet_ = false;
}

std::string DomainStatuses::getRegion() const
{
    return region_;
}

void DomainStatuses::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool DomainStatuses::regionIsSet() const
{
    return regionIsSet_;
}

void DomainStatuses::unsetregion()
{
    regionIsSet_ = false;
}

std::string DomainStatuses::getPackageType() const
{
    return packageType_;
}

void DomainStatuses::setPackageType(const std::string& value)
{
    packageType_ = value;
    packageTypeIsSet_ = true;
}

bool DomainStatuses::packageTypeIsSet() const
{
    return packageTypeIsSet_;
}

void DomainStatuses::unsetpackageType()
{
    packageTypeIsSet_ = false;
}

int32_t DomainStatuses::getDomainType() const
{
    return domainType_;
}

void DomainStatuses::setDomainType(int32_t value)
{
    domainType_ = value;
    domainTypeIsSet_ = true;
}

bool DomainStatuses::domainTypeIsSet() const
{
    return domainTypeIsSet_;
}

void DomainStatuses::unsetdomainType()
{
    domainTypeIsSet_ = false;
}

std::string DomainStatuses::getDomainBusinessType() const
{
    return domainBusinessType_;
}

void DomainStatuses::setDomainBusinessType(const std::string& value)
{
    domainBusinessType_ = value;
    domainBusinessTypeIsSet_ = true;
}

bool DomainStatuses::domainBusinessTypeIsSet() const
{
    return domainBusinessTypeIsSet_;
}

void DomainStatuses::unsetdomainBusinessType()
{
    domainBusinessTypeIsSet_ = false;
}

std::string DomainStatuses::getDomainMaliciousDockerArgs() const
{
    return domainMaliciousDockerArgs_;
}

void DomainStatuses::setDomainMaliciousDockerArgs(const std::string& value)
{
    domainMaliciousDockerArgs_ = value;
    domainMaliciousDockerArgsIsSet_ = true;
}

bool DomainStatuses::domainMaliciousDockerArgsIsSet() const
{
    return domainMaliciousDockerArgsIsSet_;
}

void DomainStatuses::unsetdomainMaliciousDockerArgs()
{
    domainMaliciousDockerArgsIsSet_ = false;
}

int32_t DomainStatuses::getAllowCustomEnv() const
{
    return allowCustomEnv_;
}

void DomainStatuses::setAllowCustomEnv(int32_t value)
{
    allowCustomEnv_ = value;
    allowCustomEnvIsSet_ = true;
}

bool DomainStatuses::allowCustomEnvIsSet() const
{
    return allowCustomEnvIsSet_;
}

void DomainStatuses::unsetallowCustomEnv()
{
    allowCustomEnvIsSet_ = false;
}

std::string DomainStatuses::getSpecThreshold() const
{
    return specThreshold_;
}

void DomainStatuses::setSpecThreshold(const std::string& value)
{
    specThreshold_ = value;
    specThresholdIsSet_ = true;
}

bool DomainStatuses::specThresholdIsSet() const
{
    return specThresholdIsSet_;
}

void DomainStatuses::unsetspecThreshold()
{
    specThresholdIsSet_ = false;
}

}
}
}
}
}


