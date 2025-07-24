

#include "huaweicloud/cloudtest/v1/model/AddTestCaseResultLogRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




AddTestCaseResultLogRequest::AddTestCaseResultLogRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    versionUri_ = "";
    versionUriIsSet_ = false;
    caseUri_ = "";
    caseUriIsSet_ = false;
    bodyIsSet_ = false;
}

AddTestCaseResultLogRequest::~AddTestCaseResultLogRequest() = default;

void AddTestCaseResultLogRequest::validate()
{
}

web::json::value AddTestCaseResultLogRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(versionUriIsSet_) {
        val[utility::conversions::to_string_t("version_uri")] = ModelBase::toJson(versionUri_);
    }
    if(caseUriIsSet_) {
        val[utility::conversions::to_string_t("case_uri")] = ModelBase::toJson(caseUri_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool AddTestCaseResultLogRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("version_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersionUri(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("case_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("case_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCaseUri(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            AddTestCaseResultLogInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string AddTestCaseResultLogRequest::getProjectId() const
{
    return projectId_;
}

void AddTestCaseResultLogRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool AddTestCaseResultLogRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void AddTestCaseResultLogRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string AddTestCaseResultLogRequest::getVersionUri() const
{
    return versionUri_;
}

void AddTestCaseResultLogRequest::setVersionUri(const std::string& value)
{
    versionUri_ = value;
    versionUriIsSet_ = true;
}

bool AddTestCaseResultLogRequest::versionUriIsSet() const
{
    return versionUriIsSet_;
}

void AddTestCaseResultLogRequest::unsetversionUri()
{
    versionUriIsSet_ = false;
}

std::string AddTestCaseResultLogRequest::getCaseUri() const
{
    return caseUri_;
}

void AddTestCaseResultLogRequest::setCaseUri(const std::string& value)
{
    caseUri_ = value;
    caseUriIsSet_ = true;
}

bool AddTestCaseResultLogRequest::caseUriIsSet() const
{
    return caseUriIsSet_;
}

void AddTestCaseResultLogRequest::unsetcaseUri()
{
    caseUriIsSet_ = false;
}

AddTestCaseResultLogInfo AddTestCaseResultLogRequest::getBody() const
{
    return body_;
}

void AddTestCaseResultLogRequest::setBody(const AddTestCaseResultLogInfo& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AddTestCaseResultLogRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AddTestCaseResultLogRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


