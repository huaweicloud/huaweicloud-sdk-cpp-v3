

#include "huaweicloud/iotda/v5/model/CreateExportTaskResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




CreateExportTaskResponse::CreateExportTaskResponse()
{
    exportTaskId_ = "";
    exportTaskIdIsSet_ = false;
    resourceType_ = "";
    resourceTypeIsSet_ = false;
    resourceConditionIsSet_ = false;
    exportFormat_ = "";
    exportFormatIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    exportCount_ = 0L;
    exportCountIsSet_ = false;
    progress_ = 0;
    progressIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    appType_ = "";
    appTypeIsSet_ = false;
    appId_ = "";
    appIdIsSet_ = false;
}

CreateExportTaskResponse::~CreateExportTaskResponse() = default;

void CreateExportTaskResponse::validate()
{
}

web::json::value CreateExportTaskResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(exportTaskIdIsSet_) {
        val[utility::conversions::to_string_t("export_task_id")] = ModelBase::toJson(exportTaskId_);
    }
    if(resourceTypeIsSet_) {
        val[utility::conversions::to_string_t("resource_type")] = ModelBase::toJson(resourceType_);
    }
    if(resourceConditionIsSet_) {
        val[utility::conversions::to_string_t("resource_condition")] = ModelBase::toJson(resourceCondition_);
    }
    if(exportFormatIsSet_) {
        val[utility::conversions::to_string_t("export_format")] = ModelBase::toJson(exportFormat_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(exportCountIsSet_) {
        val[utility::conversions::to_string_t("export_count")] = ModelBase::toJson(exportCount_);
    }
    if(progressIsSet_) {
        val[utility::conversions::to_string_t("progress")] = ModelBase::toJson(progress_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(appTypeIsSet_) {
        val[utility::conversions::to_string_t("app_type")] = ModelBase::toJson(appType_);
    }
    if(appIdIsSet_) {
        val[utility::conversions::to_string_t("app_id")] = ModelBase::toJson(appId_);
    }

    return val;
}
bool CreateExportTaskResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("export_task_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("export_task_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExportTaskId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_condition"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_condition"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceCondition(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("export_format"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("export_format"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExportFormat(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("export_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("export_count"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExportCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("progress"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("progress"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProgress(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("app_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("app_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppId(refVal);
        }
    }
    return ok;
}


std::string CreateExportTaskResponse::getExportTaskId() const
{
    return exportTaskId_;
}

void CreateExportTaskResponse::setExportTaskId(const std::string& value)
{
    exportTaskId_ = value;
    exportTaskIdIsSet_ = true;
}

bool CreateExportTaskResponse::exportTaskIdIsSet() const
{
    return exportTaskIdIsSet_;
}

void CreateExportTaskResponse::unsetexportTaskId()
{
    exportTaskIdIsSet_ = false;
}

std::string CreateExportTaskResponse::getResourceType() const
{
    return resourceType_;
}

void CreateExportTaskResponse::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool CreateExportTaskResponse::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void CreateExportTaskResponse::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

Object CreateExportTaskResponse::getResourceCondition() const
{
    return resourceCondition_;
}

void CreateExportTaskResponse::setResourceCondition(const Object& value)
{
    resourceCondition_ = value;
    resourceConditionIsSet_ = true;
}

bool CreateExportTaskResponse::resourceConditionIsSet() const
{
    return resourceConditionIsSet_;
}

void CreateExportTaskResponse::unsetresourceCondition()
{
    resourceConditionIsSet_ = false;
}

std::string CreateExportTaskResponse::getExportFormat() const
{
    return exportFormat_;
}

void CreateExportTaskResponse::setExportFormat(const std::string& value)
{
    exportFormat_ = value;
    exportFormatIsSet_ = true;
}

bool CreateExportTaskResponse::exportFormatIsSet() const
{
    return exportFormatIsSet_;
}

void CreateExportTaskResponse::unsetexportFormat()
{
    exportFormatIsSet_ = false;
}

std::string CreateExportTaskResponse::getStatus() const
{
    return status_;
}

void CreateExportTaskResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CreateExportTaskResponse::statusIsSet() const
{
    return statusIsSet_;
}

void CreateExportTaskResponse::unsetstatus()
{
    statusIsSet_ = false;
}

int64_t CreateExportTaskResponse::getExportCount() const
{
    return exportCount_;
}

void CreateExportTaskResponse::setExportCount(int64_t value)
{
    exportCount_ = value;
    exportCountIsSet_ = true;
}

bool CreateExportTaskResponse::exportCountIsSet() const
{
    return exportCountIsSet_;
}

void CreateExportTaskResponse::unsetexportCount()
{
    exportCountIsSet_ = false;
}

int32_t CreateExportTaskResponse::getProgress() const
{
    return progress_;
}

void CreateExportTaskResponse::setProgress(int32_t value)
{
    progress_ = value;
    progressIsSet_ = true;
}

bool CreateExportTaskResponse::progressIsSet() const
{
    return progressIsSet_;
}

void CreateExportTaskResponse::unsetprogress()
{
    progressIsSet_ = false;
}

std::string CreateExportTaskResponse::getCreateTime() const
{
    return createTime_;
}

void CreateExportTaskResponse::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool CreateExportTaskResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void CreateExportTaskResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string CreateExportTaskResponse::getEndTime() const
{
    return endTime_;
}

void CreateExportTaskResponse::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool CreateExportTaskResponse::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void CreateExportTaskResponse::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string CreateExportTaskResponse::getAppType() const
{
    return appType_;
}

void CreateExportTaskResponse::setAppType(const std::string& value)
{
    appType_ = value;
    appTypeIsSet_ = true;
}

bool CreateExportTaskResponse::appTypeIsSet() const
{
    return appTypeIsSet_;
}

void CreateExportTaskResponse::unsetappType()
{
    appTypeIsSet_ = false;
}

std::string CreateExportTaskResponse::getAppId() const
{
    return appId_;
}

void CreateExportTaskResponse::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool CreateExportTaskResponse::appIdIsSet() const
{
    return appIdIsSet_;
}

void CreateExportTaskResponse::unsetappId()
{
    appIdIsSet_ = false;
}

}
}
}
}
}


