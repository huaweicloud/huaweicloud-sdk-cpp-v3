

#include "huaweicloud/codeartsbuild/v3/model/UpdateJobGroupRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




UpdateJobGroupRequest::UpdateJobGroupRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateJobGroupRequest::~UpdateJobGroupRequest() = default;

void UpdateJobGroupRequest::validate()
{
}

web::json::value UpdateJobGroupRequest::toJson() const
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
bool UpdateJobGroupRequest::fromJson(const web::json::value& val)
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
            JobGroupRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateJobGroupRequest::getProjectId() const
{
    return projectId_;
}

void UpdateJobGroupRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool UpdateJobGroupRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void UpdateJobGroupRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

JobGroupRequestBody UpdateJobGroupRequest::getBody() const
{
    return body_;
}

void UpdateJobGroupRequest::setBody(const JobGroupRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateJobGroupRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateJobGroupRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


