

#include "huaweicloud/cfw/v1/model/Flavor.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




Flavor::Flavor()
{
    version_ = 0;
    versionIsSet_ = false;
    eipCount_ = 0;
    eipCountIsSet_ = false;
    vpcCount_ = 0;
    vpcCountIsSet_ = false;
    bandwidth_ = 0;
    bandwidthIsSet_ = false;
    logStorage_ = 0;
    logStorageIsSet_ = false;
    sessionConcurrent_ = 0;
    sessionConcurrentIsSet_ = false;
    sessionCreate_ = 0;
    sessionCreateIsSet_ = false;
    totalRuleCount_ = 0;
    totalRuleCountIsSet_ = false;
    usedRuleCount_ = 0;
    usedRuleCountIsSet_ = false;
    vpcBandwith_ = 0;
    vpcBandwithIsSet_ = false;
}

Flavor::~Flavor() = default;

void Flavor::validate()
{
}

web::json::value Flavor::toJson() const
{
    web::json::value val = web::json::value::object();

    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(eipCountIsSet_) {
        val[utility::conversions::to_string_t("eip_count")] = ModelBase::toJson(eipCount_);
    }
    if(vpcCountIsSet_) {
        val[utility::conversions::to_string_t("vpc_count")] = ModelBase::toJson(vpcCount_);
    }
    if(bandwidthIsSet_) {
        val[utility::conversions::to_string_t("bandwidth")] = ModelBase::toJson(bandwidth_);
    }
    if(logStorageIsSet_) {
        val[utility::conversions::to_string_t("log_storage")] = ModelBase::toJson(logStorage_);
    }
    if(sessionConcurrentIsSet_) {
        val[utility::conversions::to_string_t("session_concurrent")] = ModelBase::toJson(sessionConcurrent_);
    }
    if(sessionCreateIsSet_) {
        val[utility::conversions::to_string_t("session_create")] = ModelBase::toJson(sessionCreate_);
    }
    if(totalRuleCountIsSet_) {
        val[utility::conversions::to_string_t("total_rule_count")] = ModelBase::toJson(totalRuleCount_);
    }
    if(usedRuleCountIsSet_) {
        val[utility::conversions::to_string_t("used_rule_count")] = ModelBase::toJson(usedRuleCount_);
    }
    if(vpcBandwithIsSet_) {
        val[utility::conversions::to_string_t("vpc_bandwith")] = ModelBase::toJson(vpcBandwith_);
    }

    return val;
}
bool Flavor::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("eip_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("eip_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEipCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vpc_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vpc_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVpcCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bandwidth"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bandwidth"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBandwidth(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_storage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_storage"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogStorage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("session_concurrent"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("session_concurrent"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSessionConcurrent(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("session_create"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("session_create"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSessionCreate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_rule_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_rule_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalRuleCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("used_rule_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("used_rule_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsedRuleCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vpc_bandwith"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vpc_bandwith"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVpcBandwith(refVal);
        }
    }
    return ok;
}


int32_t Flavor::getVersion() const
{
    return version_;
}

void Flavor::setVersion(int32_t value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool Flavor::versionIsSet() const
{
    return versionIsSet_;
}

void Flavor::unsetversion()
{
    versionIsSet_ = false;
}

int32_t Flavor::getEipCount() const
{
    return eipCount_;
}

void Flavor::setEipCount(int32_t value)
{
    eipCount_ = value;
    eipCountIsSet_ = true;
}

bool Flavor::eipCountIsSet() const
{
    return eipCountIsSet_;
}

void Flavor::unseteipCount()
{
    eipCountIsSet_ = false;
}

int32_t Flavor::getVpcCount() const
{
    return vpcCount_;
}

void Flavor::setVpcCount(int32_t value)
{
    vpcCount_ = value;
    vpcCountIsSet_ = true;
}

bool Flavor::vpcCountIsSet() const
{
    return vpcCountIsSet_;
}

void Flavor::unsetvpcCount()
{
    vpcCountIsSet_ = false;
}

int32_t Flavor::getBandwidth() const
{
    return bandwidth_;
}

void Flavor::setBandwidth(int32_t value)
{
    bandwidth_ = value;
    bandwidthIsSet_ = true;
}

bool Flavor::bandwidthIsSet() const
{
    return bandwidthIsSet_;
}

void Flavor::unsetbandwidth()
{
    bandwidthIsSet_ = false;
}

int32_t Flavor::getLogStorage() const
{
    return logStorage_;
}

void Flavor::setLogStorage(int32_t value)
{
    logStorage_ = value;
    logStorageIsSet_ = true;
}

bool Flavor::logStorageIsSet() const
{
    return logStorageIsSet_;
}

void Flavor::unsetlogStorage()
{
    logStorageIsSet_ = false;
}

int32_t Flavor::getSessionConcurrent() const
{
    return sessionConcurrent_;
}

void Flavor::setSessionConcurrent(int32_t value)
{
    sessionConcurrent_ = value;
    sessionConcurrentIsSet_ = true;
}

bool Flavor::sessionConcurrentIsSet() const
{
    return sessionConcurrentIsSet_;
}

void Flavor::unsetsessionConcurrent()
{
    sessionConcurrentIsSet_ = false;
}

int32_t Flavor::getSessionCreate() const
{
    return sessionCreate_;
}

void Flavor::setSessionCreate(int32_t value)
{
    sessionCreate_ = value;
    sessionCreateIsSet_ = true;
}

bool Flavor::sessionCreateIsSet() const
{
    return sessionCreateIsSet_;
}

void Flavor::unsetsessionCreate()
{
    sessionCreateIsSet_ = false;
}

int32_t Flavor::getTotalRuleCount() const
{
    return totalRuleCount_;
}

void Flavor::setTotalRuleCount(int32_t value)
{
    totalRuleCount_ = value;
    totalRuleCountIsSet_ = true;
}

bool Flavor::totalRuleCountIsSet() const
{
    return totalRuleCountIsSet_;
}

void Flavor::unsettotalRuleCount()
{
    totalRuleCountIsSet_ = false;
}

int32_t Flavor::getUsedRuleCount() const
{
    return usedRuleCount_;
}

void Flavor::setUsedRuleCount(int32_t value)
{
    usedRuleCount_ = value;
    usedRuleCountIsSet_ = true;
}

bool Flavor::usedRuleCountIsSet() const
{
    return usedRuleCountIsSet_;
}

void Flavor::unsetusedRuleCount()
{
    usedRuleCountIsSet_ = false;
}

int32_t Flavor::getVpcBandwith() const
{
    return vpcBandwith_;
}

void Flavor::setVpcBandwith(int32_t value)
{
    vpcBandwith_ = value;
    vpcBandwithIsSet_ = true;
}

bool Flavor::vpcBandwithIsSet() const
{
    return vpcBandwithIsSet_;
}

void Flavor::unsetvpcBandwith()
{
    vpcBandwithIsSet_ = false;
}

}
}
}
}
}


