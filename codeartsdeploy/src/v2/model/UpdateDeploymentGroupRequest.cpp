

#include "huaweicloud/codeartsdeploy/v2/model/UpdateDeploymentGroupRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




UpdateDeploymentGroupRequest::UpdateDeploymentGroupRequest()
{
    groupId_ = "";
    groupIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateDeploymentGroupRequest::~UpdateDeploymentGroupRequest() = default;

void UpdateDeploymentGroupRequest::validate()
{
}

web::json::value UpdateDeploymentGroupRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateDeploymentGroupRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            DeploymentGroupUpdateRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateDeploymentGroupRequest::getGroupId() const
{
    return groupId_;
}

void UpdateDeploymentGroupRequest::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool UpdateDeploymentGroupRequest::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void UpdateDeploymentGroupRequest::unsetgroupId()
{
    groupIdIsSet_ = false;
}

DeploymentGroupUpdateRequest UpdateDeploymentGroupRequest::getBody() const
{
    return body_;
}

void UpdateDeploymentGroupRequest::setBody(const DeploymentGroupUpdateRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateDeploymentGroupRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateDeploymentGroupRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


