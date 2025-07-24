

#include "huaweicloud/cloudtest/v1/model/AddCaseResultFourRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




AddCaseResultFourRequest::AddCaseResultFourRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    versionUri_ = "";
    versionUriIsSet_ = false;
    caseUri_ = "";
    caseUriIsSet_ = false;
    bodyIsSet_ = false;
}

AddCaseResultFourRequest::~AddCaseResultFourRequest() = default;

void AddCaseResultFourRequest::validate()
{
}

web::json::value AddCaseResultFourRequest::toJson() const
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
bool AddCaseResultFourRequest::fromJson(const web::json::value& val)
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
            AddTestCaseResultInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string AddCaseResultFourRequest::getProjectId() const
{
    return projectId_;
}

void AddCaseResultFourRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool AddCaseResultFourRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void AddCaseResultFourRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string AddCaseResultFourRequest::getVersionUri() const
{
    return versionUri_;
}

void AddCaseResultFourRequest::setVersionUri(const std::string& value)
{
    versionUri_ = value;
    versionUriIsSet_ = true;
}

bool AddCaseResultFourRequest::versionUriIsSet() const
{
    return versionUriIsSet_;
}

void AddCaseResultFourRequest::unsetversionUri()
{
    versionUriIsSet_ = false;
}

std::string AddCaseResultFourRequest::getCaseUri() const
{
    return caseUri_;
}

void AddCaseResultFourRequest::setCaseUri(const std::string& value)
{
    caseUri_ = value;
    caseUriIsSet_ = true;
}

bool AddCaseResultFourRequest::caseUriIsSet() const
{
    return caseUriIsSet_;
}

void AddCaseResultFourRequest::unsetcaseUri()
{
    caseUriIsSet_ = false;
}

AddTestCaseResultInfo AddCaseResultFourRequest::getBody() const
{
    return body_;
}

void AddCaseResultFourRequest::setBody(const AddTestCaseResultInfo& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AddCaseResultFourRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AddCaseResultFourRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


