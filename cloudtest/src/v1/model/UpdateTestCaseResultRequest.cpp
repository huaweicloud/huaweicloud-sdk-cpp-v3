

#include "huaweicloud/cloudtest/v1/model/UpdateTestCaseResultRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




UpdateTestCaseResultRequest::UpdateTestCaseResultRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateTestCaseResultRequest::~UpdateTestCaseResultRequest() = default;

void UpdateTestCaseResultRequest::validate()
{
}

web::json::value UpdateTestCaseResultRequest::toJson() const
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
bool UpdateTestCaseResultRequest::fromJson(const web::json::value& val)
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
            UpdateTestCaseResultRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateTestCaseResultRequest::getProjectId() const
{
    return projectId_;
}

void UpdateTestCaseResultRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool UpdateTestCaseResultRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void UpdateTestCaseResultRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

UpdateTestCaseResultRequestBody UpdateTestCaseResultRequest::getBody() const
{
    return body_;
}

void UpdateTestCaseResultRequest::setBody(const UpdateTestCaseResultRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateTestCaseResultRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateTestCaseResultRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


