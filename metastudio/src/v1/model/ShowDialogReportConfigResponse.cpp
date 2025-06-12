

#include "huaweicloud/metastudio/v1/model/ShowDialogReportConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowDialogReportConfigResponse::ShowDialogReportConfigResponse()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    obsBucketName_ = "";
    obsBucketNameIsSet_ = false;
    obsEndpoint_ = "";
    obsEndpointIsSet_ = false;
    enableDialogReport_ = false;
    enableDialogReportIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    updateTime_ = "";
    updateTimeIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ShowDialogReportConfigResponse::~ShowDialogReportConfigResponse() = default;

void ShowDialogReportConfigResponse::validate()
{
}

web::json::value ShowDialogReportConfigResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(obsBucketNameIsSet_) {
        val[utility::conversions::to_string_t("obs_bucket_name")] = ModelBase::toJson(obsBucketName_);
    }
    if(obsEndpointIsSet_) {
        val[utility::conversions::to_string_t("obs_endpoint")] = ModelBase::toJson(obsEndpoint_);
    }
    if(enableDialogReportIsSet_) {
        val[utility::conversions::to_string_t("enable_dialog_report")] = ModelBase::toJson(enableDialogReport_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ShowDialogReportConfigResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("obs_bucket_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("obs_bucket_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObsBucketName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("obs_endpoint"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("obs_endpoint"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObsEndpoint(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enable_dialog_report"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable_dialog_report"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableDialogReport(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


std::string ShowDialogReportConfigResponse::getProjectId() const
{
    return projectId_;
}

void ShowDialogReportConfigResponse::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowDialogReportConfigResponse::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowDialogReportConfigResponse::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ShowDialogReportConfigResponse::getObsBucketName() const
{
    return obsBucketName_;
}

void ShowDialogReportConfigResponse::setObsBucketName(const std::string& value)
{
    obsBucketName_ = value;
    obsBucketNameIsSet_ = true;
}

bool ShowDialogReportConfigResponse::obsBucketNameIsSet() const
{
    return obsBucketNameIsSet_;
}

void ShowDialogReportConfigResponse::unsetobsBucketName()
{
    obsBucketNameIsSet_ = false;
}

std::string ShowDialogReportConfigResponse::getObsEndpoint() const
{
    return obsEndpoint_;
}

void ShowDialogReportConfigResponse::setObsEndpoint(const std::string& value)
{
    obsEndpoint_ = value;
    obsEndpointIsSet_ = true;
}

bool ShowDialogReportConfigResponse::obsEndpointIsSet() const
{
    return obsEndpointIsSet_;
}

void ShowDialogReportConfigResponse::unsetobsEndpoint()
{
    obsEndpointIsSet_ = false;
}

bool ShowDialogReportConfigResponse::isEnableDialogReport() const
{
    return enableDialogReport_;
}

void ShowDialogReportConfigResponse::setEnableDialogReport(bool value)
{
    enableDialogReport_ = value;
    enableDialogReportIsSet_ = true;
}

bool ShowDialogReportConfigResponse::enableDialogReportIsSet() const
{
    return enableDialogReportIsSet_;
}

void ShowDialogReportConfigResponse::unsetenableDialogReport()
{
    enableDialogReportIsSet_ = false;
}

std::string ShowDialogReportConfigResponse::getCreateTime() const
{
    return createTime_;
}

void ShowDialogReportConfigResponse::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ShowDialogReportConfigResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ShowDialogReportConfigResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string ShowDialogReportConfigResponse::getUpdateTime() const
{
    return updateTime_;
}

void ShowDialogReportConfigResponse::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool ShowDialogReportConfigResponse::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void ShowDialogReportConfigResponse::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::string ShowDialogReportConfigResponse::getXRequestId() const
{
    return xRequestId_;
}

void ShowDialogReportConfigResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ShowDialogReportConfigResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ShowDialogReportConfigResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


