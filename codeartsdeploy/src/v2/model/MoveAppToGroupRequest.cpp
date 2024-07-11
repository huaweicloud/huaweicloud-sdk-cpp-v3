

#include "huaweicloud/codeartsdeploy/v2/model/MoveAppToGroupRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




MoveAppToGroupRequest::MoveAppToGroupRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    bodyIsSet_ = false;
}

MoveAppToGroupRequest::~MoveAppToGroupRequest() = default;

void MoveAppToGroupRequest::validate()
{
}

web::json::value MoveAppToGroupRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool MoveAppToGroupRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            MoveAppToGroupRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string MoveAppToGroupRequest::getProjectId() const
{
    return projectId_;
}

void MoveAppToGroupRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool MoveAppToGroupRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void MoveAppToGroupRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

MoveAppToGroupRequestBody MoveAppToGroupRequest::getBody() const
{
    return body_;
}

void MoveAppToGroupRequest::setBody(const MoveAppToGroupRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool MoveAppToGroupRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void MoveAppToGroupRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


