

#include "huaweicloud/iotda/v5/model/ExportTask.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ExportTask::ExportTask()
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

ExportTask::~ExportTask() = default;

void ExportTask::validate()
{
}

web::json::value ExportTask::toJson() const
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
bool ExportTask::fromJson(const web::json::value& val)
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


std::string ExportTask::getExportTaskId() const
{
    return exportTaskId_;
}

void ExportTask::setExportTaskId(const std::string& value)
{
    exportTaskId_ = value;
    exportTaskIdIsSet_ = true;
}

bool ExportTask::exportTaskIdIsSet() const
{
    return exportTaskIdIsSet_;
}

void ExportTask::unsetexportTaskId()
{
    exportTaskIdIsSet_ = false;
}

std::string ExportTask::getResourceType() const
{
    return resourceType_;
}

void ExportTask::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool ExportTask::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void ExportTask::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

Object ExportTask::getResourceCondition() const
{
    return resourceCondition_;
}

void ExportTask::setResourceCondition(const Object& value)
{
    resourceCondition_ = value;
    resourceConditionIsSet_ = true;
}

bool ExportTask::resourceConditionIsSet() const
{
    return resourceConditionIsSet_;
}

void ExportTask::unsetresourceCondition()
{
    resourceConditionIsSet_ = false;
}

std::string ExportTask::getExportFormat() const
{
    return exportFormat_;
}

void ExportTask::setExportFormat(const std::string& value)
{
    exportFormat_ = value;
    exportFormatIsSet_ = true;
}

bool ExportTask::exportFormatIsSet() const
{
    return exportFormatIsSet_;
}

void ExportTask::unsetexportFormat()
{
    exportFormatIsSet_ = false;
}

std::string ExportTask::getStatus() const
{
    return status_;
}

void ExportTask::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ExportTask::statusIsSet() const
{
    return statusIsSet_;
}

void ExportTask::unsetstatus()
{
    statusIsSet_ = false;
}

int64_t ExportTask::getExportCount() const
{
    return exportCount_;
}

void ExportTask::setExportCount(int64_t value)
{
    exportCount_ = value;
    exportCountIsSet_ = true;
}

bool ExportTask::exportCountIsSet() const
{
    return exportCountIsSet_;
}

void ExportTask::unsetexportCount()
{
    exportCountIsSet_ = false;
}

int32_t ExportTask::getProgress() const
{
    return progress_;
}

void ExportTask::setProgress(int32_t value)
{
    progress_ = value;
    progressIsSet_ = true;
}

bool ExportTask::progressIsSet() const
{
    return progressIsSet_;
}

void ExportTask::unsetprogress()
{
    progressIsSet_ = false;
}

std::string ExportTask::getCreateTime() const
{
    return createTime_;
}

void ExportTask::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ExportTask::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ExportTask::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string ExportTask::getEndTime() const
{
    return endTime_;
}

void ExportTask::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ExportTask::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ExportTask::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string ExportTask::getAppType() const
{
    return appType_;
}

void ExportTask::setAppType(const std::string& value)
{
    appType_ = value;
    appTypeIsSet_ = true;
}

bool ExportTask::appTypeIsSet() const
{
    return appTypeIsSet_;
}

void ExportTask::unsetappType()
{
    appTypeIsSet_ = false;
}

std::string ExportTask::getAppId() const
{
    return appId_;
}

void ExportTask::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool ExportTask::appIdIsSet() const
{
    return appIdIsSet_;
}

void ExportTask::unsetappId()
{
    appIdIsSet_ = false;
}

}
}
}
}
}


