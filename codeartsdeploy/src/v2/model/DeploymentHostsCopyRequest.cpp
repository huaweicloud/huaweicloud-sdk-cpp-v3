

#include "huaweicloud/codeartsdeploy/v2/model/DeploymentHostsCopyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




DeploymentHostsCopyRequest::DeploymentHostsCopyRequest()
{
    hostUuidsIsSet_ = false;
    targetGroupId_ = "";
    targetGroupIdIsSet_ = false;
}

DeploymentHostsCopyRequest::~DeploymentHostsCopyRequest() = default;

void DeploymentHostsCopyRequest::validate()
{
}

web::json::value DeploymentHostsCopyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(hostUuidsIsSet_) {
        val[utility::conversions::to_string_t("host_uuids")] = ModelBase::toJson(hostUuids_);
    }
    if(targetGroupIdIsSet_) {
        val[utility::conversions::to_string_t("target_group_id")] = ModelBase::toJson(targetGroupId_);
    }

    return val;
}
bool DeploymentHostsCopyRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("host_uuids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("host_uuids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHostUuids(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetGroupId(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& DeploymentHostsCopyRequest::getHostUuids()
{
    return hostUuids_;
}

void DeploymentHostsCopyRequest::setHostUuids(const std::vector<std::string>& value)
{
    hostUuids_ = value;
    hostUuidsIsSet_ = true;
}

bool DeploymentHostsCopyRequest::hostUuidsIsSet() const
{
    return hostUuidsIsSet_;
}

void DeploymentHostsCopyRequest::unsethostUuids()
{
    hostUuidsIsSet_ = false;
}

std::string DeploymentHostsCopyRequest::getTargetGroupId() const
{
    return targetGroupId_;
}

void DeploymentHostsCopyRequest::setTargetGroupId(const std::string& value)
{
    targetGroupId_ = value;
    targetGroupIdIsSet_ = true;
}

bool DeploymentHostsCopyRequest::targetGroupIdIsSet() const
{
    return targetGroupIdIsSet_;
}

void DeploymentHostsCopyRequest::unsettargetGroupId()
{
    targetGroupIdIsSet_ = false;
}

}
}
}
}
}


