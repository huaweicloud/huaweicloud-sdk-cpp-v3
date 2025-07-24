

#include "huaweicloud/cloudtest/v1/model/AddTestCaseCommentRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




AddTestCaseCommentRequest::AddTestCaseCommentRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    testcaseId_ = "";
    testcaseIdIsSet_ = false;
    bodyIsSet_ = false;
}

AddTestCaseCommentRequest::~AddTestCaseCommentRequest() = default;

void AddTestCaseCommentRequest::validate()
{
}

web::json::value AddTestCaseCommentRequest::toJson() const
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
bool AddTestCaseCommentRequest::fromJson(const web::json::value& val)
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
            TestCaseCommentInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string AddTestCaseCommentRequest::getProjectId() const
{
    return projectId_;
}

void AddTestCaseCommentRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool AddTestCaseCommentRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void AddTestCaseCommentRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string AddTestCaseCommentRequest::getTestcaseId() const
{
    return testcaseId_;
}

void AddTestCaseCommentRequest::setTestcaseId(const std::string& value)
{
    testcaseId_ = value;
    testcaseIdIsSet_ = true;
}

bool AddTestCaseCommentRequest::testcaseIdIsSet() const
{
    return testcaseIdIsSet_;
}

void AddTestCaseCommentRequest::unsettestcaseId()
{
    testcaseIdIsSet_ = false;
}

TestCaseCommentInfo AddTestCaseCommentRequest::getBody() const
{
    return body_;
}

void AddTestCaseCommentRequest::setBody(const TestCaseCommentInfo& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AddTestCaseCommentRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AddTestCaseCommentRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


