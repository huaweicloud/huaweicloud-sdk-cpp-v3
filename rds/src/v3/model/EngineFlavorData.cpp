

#include "huaweicloud/rds/v3/model/EngineFlavorData.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




EngineFlavorData::EngineFlavorData()
{
    vcpus_ = "";
    vcpusIsSet_ = false;
    ram_ = "";
    ramIsSet_ = false;
    specCode_ = "";
    specCodeIsSet_ = false;
    isIpv6Supported_ = false;
    isIpv6SupportedIsSet_ = false;
    typeCode_ = "";
    typeCodeIsSet_ = false;
    azStatusIsSet_ = false;
    groupType_ = "";
    groupTypeIsSet_ = false;
    maxConnection_ = "";
    maxConnectionIsSet_ = false;
    tps_ = "";
    tpsIsSet_ = false;
    qps_ = "";
    qpsIsSet_ = false;
    minVolumeSize_ = "";
    minVolumeSizeIsSet_ = false;
    maxVolumeSize_ = "";
    maxVolumeSizeIsSet_ = false;
}

EngineFlavorData::~EngineFlavorData() = default;

void EngineFlavorData::validate()
{
}

web::json::value EngineFlavorData::toJson() const
{
    web::json::value val = web::json::value::object();

    if(vcpusIsSet_) {
        val[utility::conversions::to_string_t("vcpus")] = ModelBase::toJson(vcpus_);
    }
    if(ramIsSet_) {
        val[utility::conversions::to_string_t("ram")] = ModelBase::toJson(ram_);
    }
    if(specCodeIsSet_) {
        val[utility::conversions::to_string_t("spec_code")] = ModelBase::toJson(specCode_);
    }
    if(isIpv6SupportedIsSet_) {
        val[utility::conversions::to_string_t("is_ipv6_supported")] = ModelBase::toJson(isIpv6Supported_);
    }
    if(typeCodeIsSet_) {
        val[utility::conversions::to_string_t("type_code")] = ModelBase::toJson(typeCode_);
    }
    if(azStatusIsSet_) {
        val[utility::conversions::to_string_t("az_status")] = ModelBase::toJson(azStatus_);
    }
    if(groupTypeIsSet_) {
        val[utility::conversions::to_string_t("group_type")] = ModelBase::toJson(groupType_);
    }
    if(maxConnectionIsSet_) {
        val[utility::conversions::to_string_t("max_connection")] = ModelBase::toJson(maxConnection_);
    }
    if(tpsIsSet_) {
        val[utility::conversions::to_string_t("tps")] = ModelBase::toJson(tps_);
    }
    if(qpsIsSet_) {
        val[utility::conversions::to_string_t("qps")] = ModelBase::toJson(qps_);
    }
    if(minVolumeSizeIsSet_) {
        val[utility::conversions::to_string_t("min_volume_size")] = ModelBase::toJson(minVolumeSize_);
    }
    if(maxVolumeSizeIsSet_) {
        val[utility::conversions::to_string_t("max_volume_size")] = ModelBase::toJson(maxVolumeSize_);
    }

    return val;
}

bool EngineFlavorData::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("vcpus"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vcpus"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVcpus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ram"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ram"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRam(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("spec_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spec_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpecCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_ipv6_supported"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_ipv6_supported"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsIpv6Supported(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTypeCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("az_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("az_status"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAzStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("group_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("max_connection"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_connection"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxConnection(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tps"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tps"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTps(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("qps"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("qps"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQps(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("min_volume_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("min_volume_size"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMinVolumeSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("max_volume_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_volume_size"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxVolumeSize(refVal);
        }
    }
    return ok;
}

std::string EngineFlavorData::getVcpus() const
{
    return vcpus_;
}

void EngineFlavorData::setVcpus(const std::string& value)
{
    vcpus_ = value;
    vcpusIsSet_ = true;
}

bool EngineFlavorData::vcpusIsSet() const
{
    return vcpusIsSet_;
}

void EngineFlavorData::unsetvcpus()
{
    vcpusIsSet_ = false;
}

std::string EngineFlavorData::getRam() const
{
    return ram_;
}

void EngineFlavorData::setRam(const std::string& value)
{
    ram_ = value;
    ramIsSet_ = true;
}

bool EngineFlavorData::ramIsSet() const
{
    return ramIsSet_;
}

void EngineFlavorData::unsetram()
{
    ramIsSet_ = false;
}

std::string EngineFlavorData::getSpecCode() const
{
    return specCode_;
}

void EngineFlavorData::setSpecCode(const std::string& value)
{
    specCode_ = value;
    specCodeIsSet_ = true;
}

bool EngineFlavorData::specCodeIsSet() const
{
    return specCodeIsSet_;
}

void EngineFlavorData::unsetspecCode()
{
    specCodeIsSet_ = false;
}

bool EngineFlavorData::isIsIpv6Supported() const
{
    return isIpv6Supported_;
}

void EngineFlavorData::setIsIpv6Supported(bool value)
{
    isIpv6Supported_ = value;
    isIpv6SupportedIsSet_ = true;
}

bool EngineFlavorData::isIpv6SupportedIsSet() const
{
    return isIpv6SupportedIsSet_;
}

void EngineFlavorData::unsetisIpv6Supported()
{
    isIpv6SupportedIsSet_ = false;
}

std::string EngineFlavorData::getTypeCode() const
{
    return typeCode_;
}

void EngineFlavorData::setTypeCode(const std::string& value)
{
    typeCode_ = value;
    typeCodeIsSet_ = true;
}

bool EngineFlavorData::typeCodeIsSet() const
{
    return typeCodeIsSet_;
}

void EngineFlavorData::unsettypeCode()
{
    typeCodeIsSet_ = false;
}

std::map<std::string, std::string>& EngineFlavorData::getAzStatus()
{
    return azStatus_;
}

void EngineFlavorData::setAzStatus(const std::map<std::string, std::string>& value)
{
    azStatus_ = value;
    azStatusIsSet_ = true;
}

bool EngineFlavorData::azStatusIsSet() const
{
    return azStatusIsSet_;
}

void EngineFlavorData::unsetazStatus()
{
    azStatusIsSet_ = false;
}

std::string EngineFlavorData::getGroupType() const
{
    return groupType_;
}

void EngineFlavorData::setGroupType(const std::string& value)
{
    groupType_ = value;
    groupTypeIsSet_ = true;
}

bool EngineFlavorData::groupTypeIsSet() const
{
    return groupTypeIsSet_;
}

void EngineFlavorData::unsetgroupType()
{
    groupTypeIsSet_ = false;
}

std::string EngineFlavorData::getMaxConnection() const
{
    return maxConnection_;
}

void EngineFlavorData::setMaxConnection(const std::string& value)
{
    maxConnection_ = value;
    maxConnectionIsSet_ = true;
}

bool EngineFlavorData::maxConnectionIsSet() const
{
    return maxConnectionIsSet_;
}

void EngineFlavorData::unsetmaxConnection()
{
    maxConnectionIsSet_ = false;
}

std::string EngineFlavorData::getTps() const
{
    return tps_;
}

void EngineFlavorData::setTps(const std::string& value)
{
    tps_ = value;
    tpsIsSet_ = true;
}

bool EngineFlavorData::tpsIsSet() const
{
    return tpsIsSet_;
}

void EngineFlavorData::unsettps()
{
    tpsIsSet_ = false;
}

std::string EngineFlavorData::getQps() const
{
    return qps_;
}

void EngineFlavorData::setQps(const std::string& value)
{
    qps_ = value;
    qpsIsSet_ = true;
}

bool EngineFlavorData::qpsIsSet() const
{
    return qpsIsSet_;
}

void EngineFlavorData::unsetqps()
{
    qpsIsSet_ = false;
}

std::string EngineFlavorData::getMinVolumeSize() const
{
    return minVolumeSize_;
}

void EngineFlavorData::setMinVolumeSize(const std::string& value)
{
    minVolumeSize_ = value;
    minVolumeSizeIsSet_ = true;
}

bool EngineFlavorData::minVolumeSizeIsSet() const
{
    return minVolumeSizeIsSet_;
}

void EngineFlavorData::unsetminVolumeSize()
{
    minVolumeSizeIsSet_ = false;
}

std::string EngineFlavorData::getMaxVolumeSize() const
{
    return maxVolumeSize_;
}

void EngineFlavorData::setMaxVolumeSize(const std::string& value)
{
    maxVolumeSize_ = value;
    maxVolumeSizeIsSet_ = true;
}

bool EngineFlavorData::maxVolumeSizeIsSet() const
{
    return maxVolumeSizeIsSet_;
}

void EngineFlavorData::unsetmaxVolumeSize()
{
    maxVolumeSizeIsSet_ = false;
}

}
}
}
}
}


