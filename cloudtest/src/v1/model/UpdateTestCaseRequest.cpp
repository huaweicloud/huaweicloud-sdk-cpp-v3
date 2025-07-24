

#include "huaweicloud/cloudtest/v1/model/UpdateTestCaseRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




UpdateTestCaseRequest::UpdateTestCaseRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    testcaseId_ = "";
    testcaseIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateTestCaseRequest::~UpdateTestCaseRequest() = default;

void UpdateTestCaseRequest::validate()
{
}

web::json::value UpdateTestCaseRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(testcaseIdIsSet_) {
        val[utility::conversions::to_string_t("testcase_id")] = ModelBase::toJson(testcaseId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateTestCaseRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("testcase_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("testcase_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestcaseId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateTestCaseRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateTestCaseRequest::getProjectId() const
{
    return projectId_;
}

void UpdateTestCaseRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool UpdateTestCaseRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void UpdateTestCaseRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string UpdateTestCaseRequest::getTestcaseId() const
{
    return testcaseId_;
}

void UpdateTestCaseRequest::setTestcaseId(const std::string& value)
{
    testcaseId_ = value;
    testcaseIdIsSet_ = true;
}

bool UpdateTestCaseRequest::testcaseIdIsSet() const
{
    return testcaseIdIsSet_;
}

void UpdateTestCaseRequest::unsettestcaseId()
{
    testcaseIdIsSet_ = false;
}

UpdateTestCaseRequestBody UpdateTestCaseRequest::getBody() const
{
    return body_;
}

void UpdateTestCaseRequest::setBody(const UpdateTestCaseRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateTestCaseRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateTestCaseRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


