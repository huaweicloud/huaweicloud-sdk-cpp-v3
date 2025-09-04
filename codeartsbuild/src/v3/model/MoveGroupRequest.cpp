

#include "huaweicloud/codeartsbuild/v3/model/MoveGroupRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




MoveGroupRequest::MoveGroupRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    bodyIsSet_ = false;
}

MoveGroupRequest::~MoveGroupRequest() = default;

void MoveGroupRequest::validate()
{
}

web::json::value MoveGroupRequest::toJson() const
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
bool MoveGroupRequest::fromJson(const web::json::value& val)
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
            MoveJobGroupRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string MoveGroupRequest::getProjectId() const
{
    return projectId_;
}

void MoveGroupRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool MoveGroupRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void MoveGroupRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

MoveJobGroupRequestBody MoveGroupRequest::getBody() const
{
    return body_;
}

void MoveGroupRequest::setBody(const MoveJobGroupRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool MoveGroupRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void MoveGroupRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


