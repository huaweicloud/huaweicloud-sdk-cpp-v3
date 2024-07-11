

#include "huaweicloud/codeartsdeploy/v2/model/CopyHostsToTargetRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




CopyHostsToTargetRequest::CopyHostsToTargetRequest()
{
    groupId_ = "";
    groupIdIsSet_ = false;
    bodyIsSet_ = false;
}

CopyHostsToTargetRequest::~CopyHostsToTargetRequest() = default;

void CopyHostsToTargetRequest::validate()
{
}

web::json::value CopyHostsToTargetRequest::toJson() const
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
bool CopyHostsToTargetRequest::fromJson(const web::json::value& val)
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
            DeploymentHostsCopyRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CopyHostsToTargetRequest::getGroupId() const
{
    return groupId_;
}

void CopyHostsToTargetRequest::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool CopyHostsToTargetRequest::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void CopyHostsToTargetRequest::unsetgroupId()
{
    groupIdIsSet_ = false;
}

DeploymentHostsCopyRequest CopyHostsToTargetRequest::getBody() const
{
    return body_;
}

void CopyHostsToTargetRequest::setBody(const DeploymentHostsCopyRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CopyHostsToTargetRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CopyHostsToTargetRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


