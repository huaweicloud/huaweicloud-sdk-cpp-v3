

#include "huaweicloud/codeartsbuild/v3/model/CreateJobGroupRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




CreateJobGroupRequest::CreateJobGroupRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateJobGroupRequest::~CreateJobGroupRequest() = default;

void CreateJobGroupRequest::validate()
{
}

web::json::value CreateJobGroupRequest::toJson() const
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
bool CreateJobGroupRequest::fromJson(const web::json::value& val)
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


std::string CreateJobGroupRequest::getProjectId() const
{
    return projectId_;
}

void CreateJobGroupRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool CreateJobGroupRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void CreateJobGroupRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

JobGroupRequestBody CreateJobGroupRequest::getBody() const
{
    return body_;
}

void CreateJobGroupRequest::setBody(const JobGroupRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateJobGroupRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateJobGroupRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


