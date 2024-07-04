

#include "huaweicloud/rds/v3/model/DeleteDisasterRecoveryRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




DeleteDisasterRecoveryRequestBody::DeleteDisasterRecoveryRequestBody()
{
    targetInstanceId_ = "";
    targetInstanceIdIsSet_ = false;
    targetProjectId_ = "";
    targetProjectIdIsSet_ = false;
    targetRegion_ = "";
    targetRegionIsSet_ = false;
    targetIp_ = "";
    targetIpIsSet_ = false;
    isMaster_ = false;
    isMasterIsSet_ = false;
}

DeleteDisasterRecoveryRequestBody::~DeleteDisasterRecoveryRequestBody() = default;

void DeleteDisasterRecoveryRequestBody::validate()
{
}

web::json::value DeleteDisasterRecoveryRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(targetInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("target_instance_id")] = ModelBase::toJson(targetInstanceId_);
    }
    if(targetProjectIdIsSet_) {
        val[utility::conversions::to_string_t("target_project_id")] = ModelBase::toJson(targetProjectId_);
    }
    if(targetRegionIsSet_) {
        val[utility::conversions::to_string_t("target_region")] = ModelBase::toJson(targetRegion_);
    }
    if(targetIpIsSet_) {
        val[utility::conversions::to_string_t("target_ip")] = ModelBase::toJson(targetIp_);
    }
    if(isMasterIsSet_) {
        val[utility::conversions::to_string_t("is_master")] = ModelBase::toJson(isMaster_);
    }

    return val;
}
bool DeleteDisasterRecoveryRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("target_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetRegion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetIp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_master"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_master"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsMaster(refVal);
        }
    }
    return ok;
}


std::string DeleteDisasterRecoveryRequestBody::getTargetInstanceId() const
{
    return targetInstanceId_;
}

void DeleteDisasterRecoveryRequestBody::setTargetInstanceId(const std::string& value)
{
    targetInstanceId_ = value;
    targetInstanceIdIsSet_ = true;
}

bool DeleteDisasterRecoveryRequestBody::targetInstanceIdIsSet() const
{
    return targetInstanceIdIsSet_;
}

void DeleteDisasterRecoveryRequestBody::unsettargetInstanceId()
{
    targetInstanceIdIsSet_ = false;
}

std::string DeleteDisasterRecoveryRequestBody::getTargetProjectId() const
{
    return targetProjectId_;
}

void DeleteDisasterRecoveryRequestBody::setTargetProjectId(const std::string& value)
{
    targetProjectId_ = value;
    targetProjectIdIsSet_ = true;
}

bool DeleteDisasterRecoveryRequestBody::targetProjectIdIsSet() const
{
    return targetProjectIdIsSet_;
}

void DeleteDisasterRecoveryRequestBody::unsettargetProjectId()
{
    targetProjectIdIsSet_ = false;
}

std::string DeleteDisasterRecoveryRequestBody::getTargetRegion() const
{
    return targetRegion_;
}

void DeleteDisasterRecoveryRequestBody::setTargetRegion(const std::string& value)
{
    targetRegion_ = value;
    targetRegionIsSet_ = true;
}

bool DeleteDisasterRecoveryRequestBody::targetRegionIsSet() const
{
    return targetRegionIsSet_;
}

void DeleteDisasterRecoveryRequestBody::unsettargetRegion()
{
    targetRegionIsSet_ = false;
}

std::string DeleteDisasterRecoveryRequestBody::getTargetIp() const
{
    return targetIp_;
}

void DeleteDisasterRecoveryRequestBody::setTargetIp(const std::string& value)
{
    targetIp_ = value;
    targetIpIsSet_ = true;
}

bool DeleteDisasterRecoveryRequestBody::targetIpIsSet() const
{
    return targetIpIsSet_;
}

void DeleteDisasterRecoveryRequestBody::unsettargetIp()
{
    targetIpIsSet_ = false;
}

bool DeleteDisasterRecoveryRequestBody::isIsMaster() const
{
    return isMaster_;
}

void DeleteDisasterRecoveryRequestBody::setIsMaster(bool value)
{
    isMaster_ = value;
    isMasterIsSet_ = true;
}

bool DeleteDisasterRecoveryRequestBody::isMasterIsSet() const
{
    return isMasterIsSet_;
}

void DeleteDisasterRecoveryRequestBody::unsetisMaster()
{
    isMasterIsSet_ = false;
}

}
}
}
}
}


