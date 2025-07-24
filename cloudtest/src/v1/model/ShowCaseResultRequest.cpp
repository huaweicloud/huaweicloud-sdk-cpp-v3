

#include "huaweicloud/cloudtest/v1/model/ShowCaseResultRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowCaseResultRequest::ShowCaseResultRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    versionUri_ = "";
    versionUriIsSet_ = false;
    caseUri_ = "";
    caseUriIsSet_ = false;
    bodyIsSet_ = false;
}

ShowCaseResultRequest::~ShowCaseResultRequest() = default;

void ShowCaseResultRequest::validate()
{
}

web::json::value ShowCaseResultRequest::toJson() const
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
bool ShowCaseResultRequest::fromJson(const web::json::value& val)
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
            QueryCaseResultInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ShowCaseResultRequest::getProjectId() const
{
    return projectId_;
}

void ShowCaseResultRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowCaseResultRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowCaseResultRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ShowCaseResultRequest::getVersionUri() const
{
    return versionUri_;
}

void ShowCaseResultRequest::setVersionUri(const std::string& value)
{
    versionUri_ = value;
    versionUriIsSet_ = true;
}

bool ShowCaseResultRequest::versionUriIsSet() const
{
    return versionUriIsSet_;
}

void ShowCaseResultRequest::unsetversionUri()
{
    versionUriIsSet_ = false;
}

std::string ShowCaseResultRequest::getCaseUri() const
{
    return caseUri_;
}

void ShowCaseResultRequest::setCaseUri(const std::string& value)
{
    caseUri_ = value;
    caseUriIsSet_ = true;
}

bool ShowCaseResultRequest::caseUriIsSet() const
{
    return caseUriIsSet_;
}

void ShowCaseResultRequest::unsetcaseUri()
{
    caseUriIsSet_ = false;
}

QueryCaseResultInfo ShowCaseResultRequest::getBody() const
{
    return body_;
}

void ShowCaseResultRequest::setBody(const QueryCaseResultInfo& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowCaseResultRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowCaseResultRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


