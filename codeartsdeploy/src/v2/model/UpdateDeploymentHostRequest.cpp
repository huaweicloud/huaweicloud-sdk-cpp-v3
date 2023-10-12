

#include "huaweicloud/codeartsdeploy/v2/model/UpdateDeploymentHostRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




UpdateDeploymentHostRequest::UpdateDeploymentHostRequest()
{
    groupId_ = "";
    groupIdIsSet_ = false;
    hostId_ = "";
    hostIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateDeploymentHostRequest::~UpdateDeploymentHostRequest() = default;

void UpdateDeploymentHostRequest::validate()
{
}

web::json::value UpdateDeploymentHostRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }
    if(hostIdIsSet_) {
        val[utility::conversions::to_string_t("host_id")] = ModelBase::toJson(hostId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateDeploymentHostRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("host_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("host_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHostId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            DeploymentHostRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateDeploymentHostRequest::getGroupId() const
{
    return groupId_;
}

void UpdateDeploymentHostRequest::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool UpdateDeploymentHostRequest::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void UpdateDeploymentHostRequest::unsetgroupId()
{
    groupIdIsSet_ = false;
}

std::string UpdateDeploymentHostRequest::getHostId() const
{
    return hostId_;
}

void UpdateDeploymentHostRequest::setHostId(const std::string& value)
{
    hostId_ = value;
    hostIdIsSet_ = true;
}

bool UpdateDeploymentHostRequest::hostIdIsSet() const
{
    return hostIdIsSet_;
}

void UpdateDeploymentHostRequest::unsethostId()
{
    hostIdIsSet_ = false;
}

DeploymentHostRequest UpdateDeploymentHostRequest::getBody() const
{
    return body_;
}

void UpdateDeploymentHostRequest::setBody(const DeploymentHostRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateDeploymentHostRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateDeploymentHostRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


