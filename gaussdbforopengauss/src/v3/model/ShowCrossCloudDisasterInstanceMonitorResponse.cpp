

#include "huaweicloud/gaussdbforopengauss/v3/model/ShowCrossCloudDisasterInstanceMonitorResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ShowCrossCloudDisasterInstanceMonitorResponse::ShowCrossCloudDisasterInstanceMonitorResponse()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    rpo_ = "";
    rpoIsSet_ = false;
    rto_ = "";
    rtoIsSet_ = false;
    rpoThreshold_ = "";
    rpoThresholdIsSet_ = false;
    rtoThreshold_ = "";
    rtoThresholdIsSet_ = false;
    switchoverProgress_ = "";
    switchoverProgressIsSet_ = false;
    failoverProgress_ = "";
    failoverProgressIsSet_ = false;
}

ShowCrossCloudDisasterInstanceMonitorResponse::~ShowCrossCloudDisasterInstanceMonitorResponse() = default;

void ShowCrossCloudDisasterInstanceMonitorResponse::validate()
{
}

web::json::value ShowCrossCloudDisasterInstanceMonitorResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(rpoIsSet_) {
        val[utility::conversions::to_string_t("rpo")] = ModelBase::toJson(rpo_);
    }
    if(rtoIsSet_) {
        val[utility::conversions::to_string_t("rto")] = ModelBase::toJson(rto_);
    }
    if(rpoThresholdIsSet_) {
        val[utility::conversions::to_string_t("rpo_threshold")] = ModelBase::toJson(rpoThreshold_);
    }
    if(rtoThresholdIsSet_) {
        val[utility::conversions::to_string_t("rto_threshold")] = ModelBase::toJson(rtoThreshold_);
    }
    if(switchoverProgressIsSet_) {
        val[utility::conversions::to_string_t("switchover_progress")] = ModelBase::toJson(switchoverProgress_);
    }
    if(failoverProgressIsSet_) {
        val[utility::conversions::to_string_t("failover_progress")] = ModelBase::toJson(failoverProgress_);
    }

    return val;
}
bool ShowCrossCloudDisasterInstanceMonitorResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("rpo"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rpo"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRpo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rto"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rto"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRto(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rpo_threshold"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rpo_threshold"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRpoThreshold(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rto_threshold"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rto_threshold"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRtoThreshold(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("switchover_progress"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("switchover_progress"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSwitchoverProgress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("failover_progress"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("failover_progress"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailoverProgress(refVal);
        }
    }
    return ok;
}


std::string ShowCrossCloudDisasterInstanceMonitorResponse::getInstanceId() const
{
    return instanceId_;
}

void ShowCrossCloudDisasterInstanceMonitorResponse::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowCrossCloudDisasterInstanceMonitorResponse::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowCrossCloudDisasterInstanceMonitorResponse::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowCrossCloudDisasterInstanceMonitorResponse::getStatus() const
{
    return status_;
}

void ShowCrossCloudDisasterInstanceMonitorResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowCrossCloudDisasterInstanceMonitorResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowCrossCloudDisasterInstanceMonitorResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ShowCrossCloudDisasterInstanceMonitorResponse::getRpo() const
{
    return rpo_;
}

void ShowCrossCloudDisasterInstanceMonitorResponse::setRpo(const std::string& value)
{
    rpo_ = value;
    rpoIsSet_ = true;
}

bool ShowCrossCloudDisasterInstanceMonitorResponse::rpoIsSet() const
{
    return rpoIsSet_;
}

void ShowCrossCloudDisasterInstanceMonitorResponse::unsetrpo()
{
    rpoIsSet_ = false;
}

std::string ShowCrossCloudDisasterInstanceMonitorResponse::getRto() const
{
    return rto_;
}

void ShowCrossCloudDisasterInstanceMonitorResponse::setRto(const std::string& value)
{
    rto_ = value;
    rtoIsSet_ = true;
}

bool ShowCrossCloudDisasterInstanceMonitorResponse::rtoIsSet() const
{
    return rtoIsSet_;
}

void ShowCrossCloudDisasterInstanceMonitorResponse::unsetrto()
{
    rtoIsSet_ = false;
}

std::string ShowCrossCloudDisasterInstanceMonitorResponse::getRpoThreshold() const
{
    return rpoThreshold_;
}

void ShowCrossCloudDisasterInstanceMonitorResponse::setRpoThreshold(const std::string& value)
{
    rpoThreshold_ = value;
    rpoThresholdIsSet_ = true;
}

bool ShowCrossCloudDisasterInstanceMonitorResponse::rpoThresholdIsSet() const
{
    return rpoThresholdIsSet_;
}

void ShowCrossCloudDisasterInstanceMonitorResponse::unsetrpoThreshold()
{
    rpoThresholdIsSet_ = false;
}

std::string ShowCrossCloudDisasterInstanceMonitorResponse::getRtoThreshold() const
{
    return rtoThreshold_;
}

void ShowCrossCloudDisasterInstanceMonitorResponse::setRtoThreshold(const std::string& value)
{
    rtoThreshold_ = value;
    rtoThresholdIsSet_ = true;
}

bool ShowCrossCloudDisasterInstanceMonitorResponse::rtoThresholdIsSet() const
{
    return rtoThresholdIsSet_;
}

void ShowCrossCloudDisasterInstanceMonitorResponse::unsetrtoThreshold()
{
    rtoThresholdIsSet_ = false;
}

std::string ShowCrossCloudDisasterInstanceMonitorResponse::getSwitchoverProgress() const
{
    return switchoverProgress_;
}

void ShowCrossCloudDisasterInstanceMonitorResponse::setSwitchoverProgress(const std::string& value)
{
    switchoverProgress_ = value;
    switchoverProgressIsSet_ = true;
}

bool ShowCrossCloudDisasterInstanceMonitorResponse::switchoverProgressIsSet() const
{
    return switchoverProgressIsSet_;
}

void ShowCrossCloudDisasterInstanceMonitorResponse::unsetswitchoverProgress()
{
    switchoverProgressIsSet_ = false;
}

std::string ShowCrossCloudDisasterInstanceMonitorResponse::getFailoverProgress() const
{
    return failoverProgress_;
}

void ShowCrossCloudDisasterInstanceMonitorResponse::setFailoverProgress(const std::string& value)
{
    failoverProgress_ = value;
    failoverProgressIsSet_ = true;
}

bool ShowCrossCloudDisasterInstanceMonitorResponse::failoverProgressIsSet() const
{
    return failoverProgressIsSet_;
}

void ShowCrossCloudDisasterInstanceMonitorResponse::unsetfailoverProgress()
{
    failoverProgressIsSet_ = false;
}

}
}
}
}
}


