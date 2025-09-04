

#include "huaweicloud/cloudtest/v1/model/UpdateTestReportCustomDetailByUriRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




UpdateTestReportCustomDetailByUriRequest::UpdateTestReportCustomDetailByUriRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    versionUri_ = "";
    versionUriIsSet_ = false;
    reportUri_ = "";
    reportUriIsSet_ = false;
    customInfoUri_ = "";
    customInfoUriIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateTestReportCustomDetailByUriRequest::~UpdateTestReportCustomDetailByUriRequest() = default;

void UpdateTestReportCustomDetailByUriRequest::validate()
{
}

web::json::value UpdateTestReportCustomDetailByUriRequest::toJson() const
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
    if(customInfoUriIsSet_) {
        val[utility::conversions::to_string_t("custom_info_uri")] = ModelBase::toJson(customInfoUri_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateTestReportCustomDetailByUriRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("custom_info_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom_info_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomInfoUri(refVal);
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


std::string UpdateTestReportCustomDetailByUriRequest::getProjectId() const
{
    return projectId_;
}

void UpdateTestReportCustomDetailByUriRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool UpdateTestReportCustomDetailByUriRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void UpdateTestReportCustomDetailByUriRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string UpdateTestReportCustomDetailByUriRequest::getVersionUri() const
{
    return versionUri_;
}

void UpdateTestReportCustomDetailByUriRequest::setVersionUri(const std::string& value)
{
    versionUri_ = value;
    versionUriIsSet_ = true;
}

bool UpdateTestReportCustomDetailByUriRequest::versionUriIsSet() const
{
    return versionUriIsSet_;
}

void UpdateTestReportCustomDetailByUriRequest::unsetversionUri()
{
    versionUriIsSet_ = false;
}

std::string UpdateTestReportCustomDetailByUriRequest::getReportUri() const
{
    return reportUri_;
}

void UpdateTestReportCustomDetailByUriRequest::setReportUri(const std::string& value)
{
    reportUri_ = value;
    reportUriIsSet_ = true;
}

bool UpdateTestReportCustomDetailByUriRequest::reportUriIsSet() const
{
    return reportUriIsSet_;
}

void UpdateTestReportCustomDetailByUriRequest::unsetreportUri()
{
    reportUriIsSet_ = false;
}

std::string UpdateTestReportCustomDetailByUriRequest::getCustomInfoUri() const
{
    return customInfoUri_;
}

void UpdateTestReportCustomDetailByUriRequest::setCustomInfoUri(const std::string& value)
{
    customInfoUri_ = value;
    customInfoUriIsSet_ = true;
}

bool UpdateTestReportCustomDetailByUriRequest::customInfoUriIsSet() const
{
    return customInfoUriIsSet_;
}

void UpdateTestReportCustomDetailByUriRequest::unsetcustomInfoUri()
{
    customInfoUriIsSet_ = false;
}

TestReportCustomDetailInfo UpdateTestReportCustomDetailByUriRequest::getBody() const
{
    return body_;
}

void UpdateTestReportCustomDetailByUriRequest::setBody(const TestReportCustomDetailInfo& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateTestReportCustomDetailByUriRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateTestReportCustomDetailByUriRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


