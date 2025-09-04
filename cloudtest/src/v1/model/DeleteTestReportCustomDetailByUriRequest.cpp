

#include "huaweicloud/cloudtest/v1/model/DeleteTestReportCustomDetailByUriRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




DeleteTestReportCustomDetailByUriRequest::DeleteTestReportCustomDetailByUriRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    versionUri_ = "";
    versionUriIsSet_ = false;
    reportUri_ = "";
    reportUriIsSet_ = false;
    customInfoUri_ = "";
    customInfoUriIsSet_ = false;
}

DeleteTestReportCustomDetailByUriRequest::~DeleteTestReportCustomDetailByUriRequest() = default;

void DeleteTestReportCustomDetailByUriRequest::validate()
{
}

web::json::value DeleteTestReportCustomDetailByUriRequest::toJson() const
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

    return val;
}
bool DeleteTestReportCustomDetailByUriRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string DeleteTestReportCustomDetailByUriRequest::getProjectId() const
{
    return projectId_;
}

void DeleteTestReportCustomDetailByUriRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool DeleteTestReportCustomDetailByUriRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void DeleteTestReportCustomDetailByUriRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string DeleteTestReportCustomDetailByUriRequest::getVersionUri() const
{
    return versionUri_;
}

void DeleteTestReportCustomDetailByUriRequest::setVersionUri(const std::string& value)
{
    versionUri_ = value;
    versionUriIsSet_ = true;
}

bool DeleteTestReportCustomDetailByUriRequest::versionUriIsSet() const
{
    return versionUriIsSet_;
}

void DeleteTestReportCustomDetailByUriRequest::unsetversionUri()
{
    versionUriIsSet_ = false;
}

std::string DeleteTestReportCustomDetailByUriRequest::getReportUri() const
{
    return reportUri_;
}

void DeleteTestReportCustomDetailByUriRequest::setReportUri(const std::string& value)
{
    reportUri_ = value;
    reportUriIsSet_ = true;
}

bool DeleteTestReportCustomDetailByUriRequest::reportUriIsSet() const
{
    return reportUriIsSet_;
}

void DeleteTestReportCustomDetailByUriRequest::unsetreportUri()
{
    reportUriIsSet_ = false;
}

std::string DeleteTestReportCustomDetailByUriRequest::getCustomInfoUri() const
{
    return customInfoUri_;
}

void DeleteTestReportCustomDetailByUriRequest::setCustomInfoUri(const std::string& value)
{
    customInfoUri_ = value;
    customInfoUriIsSet_ = true;
}

bool DeleteTestReportCustomDetailByUriRequest::customInfoUriIsSet() const
{
    return customInfoUriIsSet_;
}

void DeleteTestReportCustomDetailByUriRequest::unsetcustomInfoUri()
{
    customInfoUriIsSet_ = false;
}

}
}
}
}
}


