

#include "huaweicloud/drs/v5/model/SupportLinkInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




SupportLinkInfo::SupportLinkInfo()
{
    engineType_ = "";
    engineTypeIsSet_ = false;
    netType_ = "";
    netTypeIsSet_ = false;
    taskModesIsSet_ = false;
    jobDirection_ = "";
    jobDirectionIsSet_ = false;
    clusterMode_ = "";
    clusterModeIsSet_ = false;
    jobInstanceType_ = "";
    jobInstanceTypeIsSet_ = false;
    isSupportBindEip_ = false;
    isSupportBindEipIsSet_ = false;
}

SupportLinkInfo::~SupportLinkInfo() = default;

void SupportLinkInfo::validate()
{
}

web::json::value SupportLinkInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(engineTypeIsSet_) {
        val[utility::conversions::to_string_t("engine_type")] = ModelBase::toJson(engineType_);
    }
    if(netTypeIsSet_) {
        val[utility::conversions::to_string_t("net_type")] = ModelBase::toJson(netType_);
    }
    if(taskModesIsSet_) {
        val[utility::conversions::to_string_t("task_modes")] = ModelBase::toJson(taskModes_);
    }
    if(jobDirectionIsSet_) {
        val[utility::conversions::to_string_t("job_direction")] = ModelBase::toJson(jobDirection_);
    }
    if(clusterModeIsSet_) {
        val[utility::conversions::to_string_t("cluster_mode")] = ModelBase::toJson(clusterMode_);
    }
    if(jobInstanceTypeIsSet_) {
        val[utility::conversions::to_string_t("job_instance_type")] = ModelBase::toJson(jobInstanceType_);
    }
    if(isSupportBindEipIsSet_) {
        val[utility::conversions::to_string_t("is_support_bind_eip")] = ModelBase::toJson(isSupportBindEip_);
    }

    return val;
}
bool SupportLinkInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("net_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("net_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNetType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_modes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_modes"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskModes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job_direction"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_direction"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobDirection(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cluster_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cluster_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClusterMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job_instance_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_instance_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobInstanceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_support_bind_eip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_support_bind_eip"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsSupportBindEip(refVal);
        }
    }
    return ok;
}


std::string SupportLinkInfo::getEngineType() const
{
    return engineType_;
}

void SupportLinkInfo::setEngineType(const std::string& value)
{
    engineType_ = value;
    engineTypeIsSet_ = true;
}

bool SupportLinkInfo::engineTypeIsSet() const
{
    return engineTypeIsSet_;
}

void SupportLinkInfo::unsetengineType()
{
    engineTypeIsSet_ = false;
}

std::string SupportLinkInfo::getNetType() const
{
    return netType_;
}

void SupportLinkInfo::setNetType(const std::string& value)
{
    netType_ = value;
    netTypeIsSet_ = true;
}

bool SupportLinkInfo::netTypeIsSet() const
{
    return netTypeIsSet_;
}

void SupportLinkInfo::unsetnetType()
{
    netTypeIsSet_ = false;
}

std::vector<std::string>& SupportLinkInfo::getTaskModes()
{
    return taskModes_;
}

void SupportLinkInfo::setTaskModes(const std::vector<std::string>& value)
{
    taskModes_ = value;
    taskModesIsSet_ = true;
}

bool SupportLinkInfo::taskModesIsSet() const
{
    return taskModesIsSet_;
}

void SupportLinkInfo::unsettaskModes()
{
    taskModesIsSet_ = false;
}

std::string SupportLinkInfo::getJobDirection() const
{
    return jobDirection_;
}

void SupportLinkInfo::setJobDirection(const std::string& value)
{
    jobDirection_ = value;
    jobDirectionIsSet_ = true;
}

bool SupportLinkInfo::jobDirectionIsSet() const
{
    return jobDirectionIsSet_;
}

void SupportLinkInfo::unsetjobDirection()
{
    jobDirectionIsSet_ = false;
}

std::string SupportLinkInfo::getClusterMode() const
{
    return clusterMode_;
}

void SupportLinkInfo::setClusterMode(const std::string& value)
{
    clusterMode_ = value;
    clusterModeIsSet_ = true;
}

bool SupportLinkInfo::clusterModeIsSet() const
{
    return clusterModeIsSet_;
}

void SupportLinkInfo::unsetclusterMode()
{
    clusterModeIsSet_ = false;
}

std::string SupportLinkInfo::getJobInstanceType() const
{
    return jobInstanceType_;
}

void SupportLinkInfo::setJobInstanceType(const std::string& value)
{
    jobInstanceType_ = value;
    jobInstanceTypeIsSet_ = true;
}

bool SupportLinkInfo::jobInstanceTypeIsSet() const
{
    return jobInstanceTypeIsSet_;
}

void SupportLinkInfo::unsetjobInstanceType()
{
    jobInstanceTypeIsSet_ = false;
}

bool SupportLinkInfo::isIsSupportBindEip() const
{
    return isSupportBindEip_;
}

void SupportLinkInfo::setIsSupportBindEip(bool value)
{
    isSupportBindEip_ = value;
    isSupportBindEipIsSet_ = true;
}

bool SupportLinkInfo::isSupportBindEipIsSet() const
{
    return isSupportBindEipIsSet_;
}

void SupportLinkInfo::unsetisSupportBindEip()
{
    isSupportBindEipIsSet_ = false;
}

}
}
}
}
}


