

#include "huaweicloud/cloudtest/v1/model/UpdateTestCaseCommentRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




UpdateTestCaseCommentRequest::UpdateTestCaseCommentRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    testcaseId_ = "";
    testcaseIdIsSet_ = false;
    commentId_ = "";
    commentIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateTestCaseCommentRequest::~UpdateTestCaseCommentRequest() = default;

void UpdateTestCaseCommentRequest::validate()
{
}

web::json::value UpdateTestCaseCommentRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(testcaseIdIsSet_) {
        val[utility::conversions::to_string_t("testcase_id")] = ModelBase::toJson(testcaseId_);
    }
    if(commentIdIsSet_) {
        val[utility::conversions::to_string_t("comment_id")] = ModelBase::toJson(commentId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateTestCaseCommentRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("comment_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("comment_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommentId(refVal);
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


std::string UpdateTestCaseCommentRequest::getProjectId() const
{
    return projectId_;
}

void UpdateTestCaseCommentRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool UpdateTestCaseCommentRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void UpdateTestCaseCommentRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string UpdateTestCaseCommentRequest::getTestcaseId() const
{
    return testcaseId_;
}

void UpdateTestCaseCommentRequest::setTestcaseId(const std::string& value)
{
    testcaseId_ = value;
    testcaseIdIsSet_ = true;
}

bool UpdateTestCaseCommentRequest::testcaseIdIsSet() const
{
    return testcaseIdIsSet_;
}

void UpdateTestCaseCommentRequest::unsettestcaseId()
{
    testcaseIdIsSet_ = false;
}

std::string UpdateTestCaseCommentRequest::getCommentId() const
{
    return commentId_;
}

void UpdateTestCaseCommentRequest::setCommentId(const std::string& value)
{
    commentId_ = value;
    commentIdIsSet_ = true;
}

bool UpdateTestCaseCommentRequest::commentIdIsSet() const
{
    return commentIdIsSet_;
}

void UpdateTestCaseCommentRequest::unsetcommentId()
{
    commentIdIsSet_ = false;
}

TestCaseCommentInfo UpdateTestCaseCommentRequest::getBody() const
{
    return body_;
}

void UpdateTestCaseCommentRequest::setBody(const TestCaseCommentInfo& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateTestCaseCommentRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateTestCaseCommentRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


