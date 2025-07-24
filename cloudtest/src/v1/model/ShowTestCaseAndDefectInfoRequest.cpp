

#include "huaweicloud/cloudtest/v1/model/ShowTestCaseAndDefectInfoRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowTestCaseAndDefectInfoRequest::ShowTestCaseAndDefectInfoRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    bodyIsSet_ = false;
}

ShowTestCaseAndDefectInfoRequest::~ShowTestCaseAndDefectInfoRequest() = default;

void ShowTestCaseAndDefectInfoRequest::validate()
{
}

web::json::value ShowTestCaseAndDefectInfoRequest::toJson() const
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
bool ShowTestCaseAndDefectInfoRequest::fromJson(const web::json::value& val)
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
            ShowTestCaseAndDefectInfoRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ShowTestCaseAndDefectInfoRequest::getProjectId() const
{
    return projectId_;
}

void ShowTestCaseAndDefectInfoRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowTestCaseAndDefectInfoRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowTestCaseAndDefectInfoRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

ShowTestCaseAndDefectInfoRequestBody ShowTestCaseAndDefectInfoRequest::getBody() const
{
    return body_;
}

void ShowTestCaseAndDefectInfoRequest::setBody(const ShowTestCaseAndDefectInfoRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowTestCaseAndDefectInfoRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowTestCaseAndDefectInfoRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


