

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
    defaultBandwidth_ = 0;
    defaultBandwidthIsSet_ = false;
    defaultEipCount_ = 0;
    defaultEipCountIsSet_ = false;
    defaultLogStorage_ = 0;
    defaultLogStorageIsSet_ = false;
    defaultVpcCount_ = 0;
    defaultVpcCountIsSet_ = false;
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
    if(defaultBandwidthIsSet_) {
        val[utility::conversions::to_string_t("default_bandwidth")] = ModelBase::toJson(defaultBandwidth_);
    }
    if(defaultEipCountIsSet_) {
        val[utility::conversions::to_string_t("default_eip_count")] = ModelBase::toJson(defaultEipCount_);
    }
    if(defaultLogStorageIsSet_) {
        val[utility::conversions::to_string_t("default_log_storage")] = ModelBase::toJson(defaultLogStorage_);
    }
    if(defaultVpcCountIsSet_) {
        val[utility::conversions::to_string_t("default_vpc_count")] = ModelBase::toJson(defaultVpcCount_);
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
    if(val.has_field(utility::conversions::to_string_t("default_bandwidth"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("default_bandwidth"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDefaultBandwidth(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("default_eip_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("default_eip_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDefaultEipCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("default_log_storage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("default_log_storage"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDefaultLogStorage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("default_vpc_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("default_vpc_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDefaultVpcCount(refVal);
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

int32_t Flavor::getDefaultBandwidth() const
{
    return defaultBandwidth_;
}

void Flavor::setDefaultBandwidth(int32_t value)
{
    defaultBandwidth_ = value;
    defaultBandwidthIsSet_ = true;
}

bool Flavor::defaultBandwidthIsSet() const
{
    return defaultBandwidthIsSet_;
}

void Flavor::unsetdefaultBandwidth()
{
    defaultBandwidthIsSet_ = false;
}

int32_t Flavor::getDefaultEipCount() const
{
    return defaultEipCount_;
}

void Flavor::setDefaultEipCount(int32_t value)
{
    defaultEipCount_ = value;
    defaultEipCountIsSet_ = true;
}

bool Flavor::defaultEipCountIsSet() const
{
    return defaultEipCountIsSet_;
}

void Flavor::unsetdefaultEipCount()
{
    defaultEipCountIsSet_ = false;
}

int32_t Flavor::getDefaultLogStorage() const
{
    return defaultLogStorage_;
}

void Flavor::setDefaultLogStorage(int32_t value)
{
    defaultLogStorage_ = value;
    defaultLogStorageIsSet_ = true;
}

bool Flavor::defaultLogStorageIsSet() const
{
    return defaultLogStorageIsSet_;
}

void Flavor::unsetdefaultLogStorage()
{
    defaultLogStorageIsSet_ = false;
}

int32_t Flavor::getDefaultVpcCount() const
{
    return defaultVpcCount_;
}

void Flavor::setDefaultVpcCount(int32_t value)
{
    defaultVpcCount_ = value;
    defaultVpcCountIsSet_ = true;
}

bool Flavor::defaultVpcCountIsSet() const
{
    return defaultVpcCountIsSet_;
}

void Flavor::unsetdefaultVpcCount()
{
    defaultVpcCountIsSet_ = false;
}

}
}
}
}
}


