

#include "huaweicloud/cloudtest/v1/model/ShowUserExecuteTestCaseInfoRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowUserExecuteTestCaseInfoRequest::ShowUserExecuteTestCaseInfoRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    bodyIsSet_ = false;
}

ShowUserExecuteTestCaseInfoRequest::~ShowUserExecuteTestCaseInfoRequest() = default;

void ShowUserExecuteTestCaseInfoRequest::validate()
{
}

web::json::value ShowUserExecuteTestCaseInfoRequest::toJson() const
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
bool ShowUserExecuteTestCaseInfoRequest::fromJson(const web::json::value& val)
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
            ShowUserExecuteTestCaseInfoRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ShowUserExecuteTestCaseInfoRequest::getProjectId() const
{
    return projectId_;
}

void ShowUserExecuteTestCaseInfoRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowUserExecuteTestCaseInfoRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowUserExecuteTestCaseInfoRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

ShowUserExecuteTestCaseInfoRequestBody ShowUserExecuteTestCaseInfoRequest::getBody() const
{
    return body_;
}

void ShowUserExecuteTestCaseInfoRequest::setBody(const ShowUserExecuteTestCaseInfoRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowUserExecuteTestCaseInfoRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowUserExecuteTestCaseInfoRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


