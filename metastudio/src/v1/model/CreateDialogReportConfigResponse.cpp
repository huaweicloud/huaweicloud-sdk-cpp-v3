

#include "huaweicloud/metastudio/v1/model/CreateDialogReportConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateDialogReportConfigResponse::CreateDialogReportConfigResponse()
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

CreateDialogReportConfigResponse::~CreateDialogReportConfigResponse() = default;

void CreateDialogReportConfigResponse::validate()
{
}

web::json::value CreateDialogReportConfigResponse::toJson() const
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
bool CreateDialogReportConfigResponse::fromJson(const web::json::value& val)
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


std::string CreateDialogReportConfigResponse::getProjectId() const
{
    return projectId_;
}

void CreateDialogReportConfigResponse::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool CreateDialogReportConfigResponse::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void CreateDialogReportConfigResponse::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string CreateDialogReportConfigResponse::getObsBucketName() const
{
    return obsBucketName_;
}

void CreateDialogReportConfigResponse::setObsBucketName(const std::string& value)
{
    obsBucketName_ = value;
    obsBucketNameIsSet_ = true;
}

bool CreateDialogReportConfigResponse::obsBucketNameIsSet() const
{
    return obsBucketNameIsSet_;
}

void CreateDialogReportConfigResponse::unsetobsBucketName()
{
    obsBucketNameIsSet_ = false;
}

std::string CreateDialogReportConfigResponse::getObsEndpoint() const
{
    return obsEndpoint_;
}

void CreateDialogReportConfigResponse::setObsEndpoint(const std::string& value)
{
    obsEndpoint_ = value;
    obsEndpointIsSet_ = true;
}

bool CreateDialogReportConfigResponse::obsEndpointIsSet() const
{
    return obsEndpointIsSet_;
}

void CreateDialogReportConfigResponse::unsetobsEndpoint()
{
    obsEndpointIsSet_ = false;
}

bool CreateDialogReportConfigResponse::isEnableDialogReport() const
{
    return enableDialogReport_;
}

void CreateDialogReportConfigResponse::setEnableDialogReport(bool value)
{
    enableDialogReport_ = value;
    enableDialogReportIsSet_ = true;
}

bool CreateDialogReportConfigResponse::enableDialogReportIsSet() const
{
    return enableDialogReportIsSet_;
}

void CreateDialogReportConfigResponse::unsetenableDialogReport()
{
    enableDialogReportIsSet_ = false;
}

std::string CreateDialogReportConfigResponse::getCreateTime() const
{
    return createTime_;
}

void CreateDialogReportConfigResponse::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool CreateDialogReportConfigResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void CreateDialogReportConfigResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string CreateDialogReportConfigResponse::getUpdateTime() const
{
    return updateTime_;
}

void CreateDialogReportConfigResponse::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool CreateDialogReportConfigResponse::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void CreateDialogReportConfigResponse::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::string CreateDialogReportConfigResponse::getXRequestId() const
{
    return xRequestId_;
}

void CreateDialogReportConfigResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool CreateDialogReportConfigResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void CreateDialogReportConfigResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


