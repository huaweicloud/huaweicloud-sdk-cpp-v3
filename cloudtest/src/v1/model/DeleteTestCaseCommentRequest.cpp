

#include "huaweicloud/cloudtest/v1/model/DeleteTestCaseCommentRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




DeleteTestCaseCommentRequest::DeleteTestCaseCommentRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    testcaseId_ = "";
    testcaseIdIsSet_ = false;
    commentId_ = "";
    commentIdIsSet_ = false;
    versionUri_ = "";
    versionUriIsSet_ = false;
}

DeleteTestCaseCommentRequest::~DeleteTestCaseCommentRequest() = default;

void DeleteTestCaseCommentRequest::validate()
{
}

web::json::value DeleteTestCaseCommentRequest::toJson() const
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
    if(versionUriIsSet_) {
        val[utility::conversions::to_string_t("version_uri")] = ModelBase::toJson(versionUri_);
    }

    return val;
}
bool DeleteTestCaseCommentRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("version_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersionUri(refVal);
        }
    }
    return ok;
}


std::string DeleteTestCaseCommentRequest::getProjectId() const
{
    return projectId_;
}

void DeleteTestCaseCommentRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool DeleteTestCaseCommentRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void DeleteTestCaseCommentRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string DeleteTestCaseCommentRequest::getTestcaseId() const
{
    return testcaseId_;
}

void DeleteTestCaseCommentRequest::setTestcaseId(const std::string& value)
{
    testcaseId_ = value;
    testcaseIdIsSet_ = true;
}

bool DeleteTestCaseCommentRequest::testcaseIdIsSet() const
{
    return testcaseIdIsSet_;
}

void DeleteTestCaseCommentRequest::unsettestcaseId()
{
    testcaseIdIsSet_ = false;
}

std::string DeleteTestCaseCommentRequest::getCommentId() const
{
    return commentId_;
}

void DeleteTestCaseCommentRequest::setCommentId(const std::string& value)
{
    commentId_ = value;
    commentIdIsSet_ = true;
}

bool DeleteTestCaseCommentRequest::commentIdIsSet() const
{
    return commentIdIsSet_;
}

void DeleteTestCaseCommentRequest::unsetcommentId()
{
    commentIdIsSet_ = false;
}

std::string DeleteTestCaseCommentRequest::getVersionUri() const
{
    return versionUri_;
}

void DeleteTestCaseCommentRequest::setVersionUri(const std::string& value)
{
    versionUri_ = value;
    versionUriIsSet_ = true;
}

bool DeleteTestCaseCommentRequest::versionUriIsSet() const
{
    return versionUriIsSet_;
}

void DeleteTestCaseCommentRequest::unsetversionUri()
{
    versionUriIsSet_ = false;
}

}
}
}
}
}


