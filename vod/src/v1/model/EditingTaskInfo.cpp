

#include "huaweicloud/vod/v1/model/EditingTaskInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




EditingTaskInfo::EditingTaskInfo()
{
    taskId_ = "";
    taskIdIsSet_ = false;
    assetId_ = "";
    assetIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    progress_ = 0;
    progressIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
}

EditingTaskInfo::~EditingTaskInfo() = default;

void EditingTaskInfo::validate()
{
}

web::json::value EditingTaskInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }
    if(assetIdIsSet_) {
        val[utility::conversions::to_string_t("asset_id")] = ModelBase::toJson(assetId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
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

    return val;
}
bool EditingTaskInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("asset_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetId(refVal);
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
    return ok;
}


std::string EditingTaskInfo::getTaskId() const
{
    return taskId_;
}

void EditingTaskInfo::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool EditingTaskInfo::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void EditingTaskInfo::unsettaskId()
{
    taskIdIsSet_ = false;
}

std::string EditingTaskInfo::getAssetId() const
{
    return assetId_;
}

void EditingTaskInfo::setAssetId(const std::string& value)
{
    assetId_ = value;
    assetIdIsSet_ = true;
}

bool EditingTaskInfo::assetIdIsSet() const
{
    return assetIdIsSet_;
}

void EditingTaskInfo::unsetassetId()
{
    assetIdIsSet_ = false;
}

std::string EditingTaskInfo::getStatus() const
{
    return status_;
}

void EditingTaskInfo::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool EditingTaskInfo::statusIsSet() const
{
    return statusIsSet_;
}

void EditingTaskInfo::unsetstatus()
{
    statusIsSet_ = false;
}

int32_t EditingTaskInfo::getProgress() const
{
    return progress_;
}

void EditingTaskInfo::setProgress(int32_t value)
{
    progress_ = value;
    progressIsSet_ = true;
}

bool EditingTaskInfo::progressIsSet() const
{
    return progressIsSet_;
}

void EditingTaskInfo::unsetprogress()
{
    progressIsSet_ = false;
}

std::string EditingTaskInfo::getCreateTime() const
{
    return createTime_;
}

void EditingTaskInfo::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool EditingTaskInfo::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void EditingTaskInfo::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string EditingTaskInfo::getEndTime() const
{
    return endTime_;
}

void EditingTaskInfo::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool EditingTaskInfo::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void EditingTaskInfo::unsetendTime()
{
    endTimeIsSet_ = false;
}

}
}
}
}
}


