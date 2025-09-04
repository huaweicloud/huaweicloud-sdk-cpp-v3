

#include "huaweicloud/cloudtest/v1/model/SaveTestReportCustomDetailRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




SaveTestReportCustomDetailRequest::SaveTestReportCustomDetailRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    versionUri_ = "";
    versionUriIsSet_ = false;
    reportUri_ = "";
    reportUriIsSet_ = false;
    bodyIsSet_ = false;
}

SaveTestReportCustomDetailRequest::~SaveTestReportCustomDetailRequest() = default;

void SaveTestReportCustomDetailRequest::validate()
{
}

web::json::value SaveTestReportCustomDetailRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(versionUriIsSet_) {
        val[utility::conversions::to_string_t("version_uri")] = ModelBase::toJson(versionUri_);
    }
    if(reportUriIsSet_) {
        val[utility::conversions::to_string_t("report_uri")] = ModelBase::toJson(reportUri_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool SaveTestReportCustomDetailRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("report_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("report_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReportUri(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            TestReportCustomDetailInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string SaveTestReportCustomDetailRequest::getProjectId() const
{
    return projectId_;
}

void SaveTestReportCustomDetailRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool SaveTestReportCustomDetailRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void SaveTestReportCustomDetailRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string SaveTestReportCustomDetailRequest::getVersionUri() const
{
    return versionUri_;
}

void SaveTestReportCustomDetailRequest::setVersionUri(const std::string& value)
{
    versionUri_ = value;
    versionUriIsSet_ = true;
}

bool SaveTestReportCustomDetailRequest::versionUriIsSet() const
{
    return versionUriIsSet_;
}

void SaveTestReportCustomDetailRequest::unsetversionUri()
{
    versionUriIsSet_ = false;
}

std::string SaveTestReportCustomDetailRequest::getReportUri() const
{
    return reportUri_;
}

void SaveTestReportCustomDetailRequest::setReportUri(const std::string& value)
{
    reportUri_ = value;
    reportUriIsSet_ = true;
}

bool SaveTestReportCustomDetailRequest::reportUriIsSet() const
{
    return reportUriIsSet_;
}

void SaveTestReportCustomDetailRequest::unsetreportUri()
{
    reportUriIsSet_ = false;
}

TestReportCustomDetailInfo SaveTestReportCustomDetailRequest::getBody() const
{
    return body_;
}

void SaveTestReportCustomDetailRequest::setBody(const TestReportCustomDetailInfo& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SaveTestReportCustomDetailRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SaveTestReportCustomDetailRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


