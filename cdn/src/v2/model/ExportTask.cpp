

#include "huaweicloud/cdn/v2/model/ExportTask.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




ExportTask::ExportTask()
{
    taskId_ = "";
    taskIdIsSet_ = false;
    taskName_ = "";
    taskNameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    downloadLink_ = "";
    downloadLinkIsSet_ = false;
    createTime_ = 0L;
    createTimeIsSet_ = false;
    updateTime_ = 0L;
    updateTimeIsSet_ = false;
}

ExportTask::~ExportTask() = default;

void ExportTask::validate()
{
}

web::json::value ExportTask::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }
    if(taskNameIsSet_) {
        val[utility::conversions::to_string_t("task_name")] = ModelBase::toJson(taskName_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(downloadLinkIsSet_) {
        val[utility::conversions::to_string_t("download_link")] = ModelBase::toJson(downloadLink_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }

    return val;
}
bool ExportTask::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("task_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("download_link"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("download_link"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDownloadLink(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
        }
    }
    return ok;
}


std::string ExportTask::getTaskId() const
{
    return taskId_;
}

void ExportTask::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool ExportTask::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void ExportTask::unsettaskId()
{
    taskIdIsSet_ = false;
}

std::string ExportTask::getTaskName() const
{
    return taskName_;
}

void ExportTask::setTaskName(const std::string& value)
{
    taskName_ = value;
    taskNameIsSet_ = true;
}

bool ExportTask::taskNameIsSet() const
{
    return taskNameIsSet_;
}

void ExportTask::unsettaskName()
{
    taskNameIsSet_ = false;
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

std::string ExportTask::getDownloadLink() const
{
    return downloadLink_;
}

void ExportTask::setDownloadLink(const std::string& value)
{
    downloadLink_ = value;
    downloadLinkIsSet_ = true;
}

bool ExportTask::downloadLinkIsSet() const
{
    return downloadLinkIsSet_;
}

void ExportTask::unsetdownloadLink()
{
    downloadLinkIsSet_ = false;
}

int64_t ExportTask::getCreateTime() const
{
    return createTime_;
}

void ExportTask::setCreateTime(int64_t value)
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

int64_t ExportTask::getUpdateTime() const
{
    return updateTime_;
}

void ExportTask::setUpdateTime(int64_t value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool ExportTask::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void ExportTask::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

}
}
}
}
}


