

#include "huaweicloud/iotdm/v5/model/ShowInstanceTaskResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotdm {
namespace V5 {
namespace Model {




ShowInstanceTaskResponse::ShowInstanceTaskResponse()
{
    taskId_ = "";
    taskIdIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    statusDetail_ = "";
    statusDetailIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    targetConfigIsSet_ = false;
    operateWindowIsSet_ = false;
    progress_ = 0;
    progressIsSet_ = false;
}

ShowInstanceTaskResponse::~ShowInstanceTaskResponse() = default;

void ShowInstanceTaskResponse::validate()
{
}

web::json::value ShowInstanceTaskResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(statusDetailIsSet_) {
        val[utility::conversions::to_string_t("status_detail")] = ModelBase::toJson(statusDetail_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(targetConfigIsSet_) {
        val[utility::conversions::to_string_t("target_config")] = ModelBase::toJson(targetConfig_);
    }
    if(operateWindowIsSet_) {
        val[utility::conversions::to_string_t("operate_window")] = ModelBase::toJson(operateWindow_);
    }
    if(progressIsSet_) {
        val[utility::conversions::to_string_t("progress")] = ModelBase::toJson(progress_);
    }

    return val;
}
bool ShowInstanceTaskResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("status_detail"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status_detail"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatusDetail(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("target_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_config"));
        if(!fieldValue.is_null())
        {
            TargetConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("operate_window"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operate_window"));
        if(!fieldValue.is_null())
        {
            OperateWindow refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperateWindow(refVal);
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
    return ok;
}


std::string ShowInstanceTaskResponse::getTaskId() const
{
    return taskId_;
}

void ShowInstanceTaskResponse::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool ShowInstanceTaskResponse::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void ShowInstanceTaskResponse::unsettaskId()
{
    taskIdIsSet_ = false;
}

std::string ShowInstanceTaskResponse::getType() const
{
    return type_;
}

void ShowInstanceTaskResponse::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ShowInstanceTaskResponse::typeIsSet() const
{
    return typeIsSet_;
}

void ShowInstanceTaskResponse::unsettype()
{
    typeIsSet_ = false;
}

std::string ShowInstanceTaskResponse::getStatus() const
{
    return status_;
}

void ShowInstanceTaskResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowInstanceTaskResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowInstanceTaskResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ShowInstanceTaskResponse::getStatusDetail() const
{
    return statusDetail_;
}

void ShowInstanceTaskResponse::setStatusDetail(const std::string& value)
{
    statusDetail_ = value;
    statusDetailIsSet_ = true;
}

bool ShowInstanceTaskResponse::statusDetailIsSet() const
{
    return statusDetailIsSet_;
}

void ShowInstanceTaskResponse::unsetstatusDetail()
{
    statusDetailIsSet_ = false;
}

std::string ShowInstanceTaskResponse::getCreateTime() const
{
    return createTime_;
}

void ShowInstanceTaskResponse::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ShowInstanceTaskResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ShowInstanceTaskResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string ShowInstanceTaskResponse::getStartTime() const
{
    return startTime_;
}

void ShowInstanceTaskResponse::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ShowInstanceTaskResponse::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ShowInstanceTaskResponse::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ShowInstanceTaskResponse::getEndTime() const
{
    return endTime_;
}

void ShowInstanceTaskResponse::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ShowInstanceTaskResponse::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ShowInstanceTaskResponse::unsetendTime()
{
    endTimeIsSet_ = false;
}

TargetConfig ShowInstanceTaskResponse::getTargetConfig() const
{
    return targetConfig_;
}

void ShowInstanceTaskResponse::setTargetConfig(const TargetConfig& value)
{
    targetConfig_ = value;
    targetConfigIsSet_ = true;
}

bool ShowInstanceTaskResponse::targetConfigIsSet() const
{
    return targetConfigIsSet_;
}

void ShowInstanceTaskResponse::unsettargetConfig()
{
    targetConfigIsSet_ = false;
}

OperateWindow ShowInstanceTaskResponse::getOperateWindow() const
{
    return operateWindow_;
}

void ShowInstanceTaskResponse::setOperateWindow(const OperateWindow& value)
{
    operateWindow_ = value;
    operateWindowIsSet_ = true;
}

bool ShowInstanceTaskResponse::operateWindowIsSet() const
{
    return operateWindowIsSet_;
}

void ShowInstanceTaskResponse::unsetoperateWindow()
{
    operateWindowIsSet_ = false;
}

int32_t ShowInstanceTaskResponse::getProgress() const
{
    return progress_;
}

void ShowInstanceTaskResponse::setProgress(int32_t value)
{
    progress_ = value;
    progressIsSet_ = true;
}

bool ShowInstanceTaskResponse::progressIsSet() const
{
    return progressIsSet_;
}

void ShowInstanceTaskResponse::unsetprogress()
{
    progressIsSet_ = false;
}

}
}
}
}
}


