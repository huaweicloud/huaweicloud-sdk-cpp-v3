

#include "huaweicloud/drs/v3/model/InstInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




InstInfo::InstInfo()
{
    engineType_ = "";
    engineTypeIsSet_ = false;
    instType_ = "";
    instTypeIsSet_ = false;
    ip_ = "";
    ipIsSet_ = false;
    publicIp_ = "";
    publicIpIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    volumeSize_ = 0;
    volumeSizeIsSet_ = false;
}

InstInfo::~InstInfo() = default;

void InstInfo::validate()
{
}

web::json::value InstInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(engineTypeIsSet_) {
        val[utility::conversions::to_string_t("engine_type")] = ModelBase::toJson(engineType_);
    }
    if(instTypeIsSet_) {
        val[utility::conversions::to_string_t("inst_type")] = ModelBase::toJson(instType_);
    }
    if(ipIsSet_) {
        val[utility::conversions::to_string_t("ip")] = ModelBase::toJson(ip_);
    }
    if(publicIpIsSet_) {
        val[utility::conversions::to_string_t("public_ip")] = ModelBase::toJson(publicIp_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(volumeSizeIsSet_) {
        val[utility::conversions::to_string_t("volume_size")] = ModelBase::toJson(volumeSize_);
    }

    return val;
}
bool InstInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("engine_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("engine_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEngineType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("inst_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("inst_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("public_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("public_ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicIp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("volume_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volume_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolumeSize(refVal);
        }
    }
    return ok;
}


std::string InstInfo::getEngineType() const
{
    return engineType_;
}

void InstInfo::setEngineType(const std::string& value)
{
    engineType_ = value;
    engineTypeIsSet_ = true;
}

bool InstInfo::engineTypeIsSet() const
{
    return engineTypeIsSet_;
}

void InstInfo::unsetengineType()
{
    engineTypeIsSet_ = false;
}

std::string InstInfo::getInstType() const
{
    return instType_;
}

void InstInfo::setInstType(const std::string& value)
{
    instType_ = value;
    instTypeIsSet_ = true;
}

bool InstInfo::instTypeIsSet() const
{
    return instTypeIsSet_;
}

void InstInfo::unsetinstType()
{
    instTypeIsSet_ = false;
}

std::string InstInfo::getIp() const
{
    return ip_;
}

void InstInfo::setIp(const std::string& value)
{
    ip_ = value;
    ipIsSet_ = true;
}

bool InstInfo::ipIsSet() const
{
    return ipIsSet_;
}

void InstInfo::unsetip()
{
    ipIsSet_ = false;
}

std::string InstInfo::getPublicIp() const
{
    return publicIp_;
}

void InstInfo::setPublicIp(const std::string& value)
{
    publicIp_ = value;
    publicIpIsSet_ = true;
}

bool InstInfo::publicIpIsSet() const
{
    return publicIpIsSet_;
}

void InstInfo::unsetpublicIp()
{
    publicIpIsSet_ = false;
}

std::string InstInfo::getStartTime() const
{
    return startTime_;
}

void InstInfo::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool InstInfo::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void InstInfo::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string InstInfo::getStatus() const
{
    return status_;
}

void InstInfo::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool InstInfo::statusIsSet() const
{
    return statusIsSet_;
}

void InstInfo::unsetstatus()
{
    statusIsSet_ = false;
}

int32_t InstInfo::getVolumeSize() const
{
    return volumeSize_;
}

void InstInfo::setVolumeSize(int32_t value)
{
    volumeSize_ = value;
    volumeSizeIsSet_ = true;
}

bool InstInfo::volumeSizeIsSet() const
{
    return volumeSizeIsSet_;
}

void InstInfo::unsetvolumeSize()
{
    volumeSizeIsSet_ = false;
}

}
}
}
}
}


