

#include "huaweicloud/codeartsdeploy/v2/model/CreateDeploymentHostRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




CreateDeploymentHostRequest::CreateDeploymentHostRequest()
{
    groupId_ = "";
    groupIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateDeploymentHostRequest::~CreateDeploymentHostRequest() = default;

void CreateDeploymentHostRequest::validate()
{
}

web::json::value CreateDeploymentHostRequest::toJson() const
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
bool CreateDeploymentHostRequest::fromJson(const web::json::value& val)
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
            DeploymentHost refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateDeploymentHostRequest::getGroupId() const
{
    return groupId_;
}

void CreateDeploymentHostRequest::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool CreateDeploymentHostRequest::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void CreateDeploymentHostRequest::unsetgroupId()
{
    groupIdIsSet_ = false;
}

DeploymentHost CreateDeploymentHostRequest::getBody() const
{
    return body_;
}

void CreateDeploymentHostRequest::setBody(const DeploymentHost& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateDeploymentHostRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateDeploymentHostRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


