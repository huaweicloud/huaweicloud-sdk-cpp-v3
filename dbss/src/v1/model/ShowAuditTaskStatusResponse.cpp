

#include "huaweicloud/dbss/v1/model/ShowAuditTaskStatusResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ShowAuditTaskStatusResponse::ShowAuditTaskStatusResponse()
{
    beginTime_ = 0L;
    beginTimeIsSet_ = false;
    busiType_ = "";
    busiTypeIsSet_ = false;
    completedNum_ = 0;
    completedNumIsSet_ = false;
    endTime_ = 0L;
    endTimeIsSet_ = false;
    id_ = 0L;
    idIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    queryBeginTime_ = 0L;
    queryBeginTimeIsSet_ = false;
    queryEndTime_ = 0L;
    queryEndTimeIsSet_ = false;
    taskStatus_ = "";
    taskStatusIsSet_ = false;
    taskSwitch_ = "";
    taskSwitchIsSet_ = false;
    totalNum_ = 0;
    totalNumIsSet_ = false;
}

ShowAuditTaskStatusResponse::~ShowAuditTaskStatusResponse() = default;

void ShowAuditTaskStatusResponse::validate()
{
}

web::json::value ShowAuditTaskStatusResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(beginTimeIsSet_) {
        val[utility::conversions::to_string_t("begin_time")] = ModelBase::toJson(beginTime_);
    }
    if(busiTypeIsSet_) {
        val[utility::conversions::to_string_t("busi_type")] = ModelBase::toJson(busiType_);
    }
    if(completedNumIsSet_) {
        val[utility::conversions::to_string_t("completed_num")] = ModelBase::toJson(completedNum_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(queryBeginTimeIsSet_) {
        val[utility::conversions::to_string_t("query_begin_time")] = ModelBase::toJson(queryBeginTime_);
    }
    if(queryEndTimeIsSet_) {
        val[utility::conversions::to_string_t("query_end_time")] = ModelBase::toJson(queryEndTime_);
    }
    if(taskStatusIsSet_) {
        val[utility::conversions::to_string_t("task_status")] = ModelBase::toJson(taskStatus_);
    }
    if(taskSwitchIsSet_) {
        val[utility::conversions::to_string_t("task_switch")] = ModelBase::toJson(taskSwitch_);
    }
    if(totalNumIsSet_) {
        val[utility::conversions::to_string_t("total_num")] = ModelBase::toJson(totalNum_);
    }

    return val;
}
bool ShowAuditTaskStatusResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("begin_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("begin_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBeginTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("busi_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("busi_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBusiType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("completed_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("completed_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompletedNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("query_begin_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("query_begin_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQueryBeginTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("query_end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("query_end_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQueryEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_switch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_switch"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskSwitch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalNum(refVal);
        }
    }
    return ok;
}


int64_t ShowAuditTaskStatusResponse::getBeginTime() const
{
    return beginTime_;
}

void ShowAuditTaskStatusResponse::setBeginTime(int64_t value)
{
    beginTime_ = value;
    beginTimeIsSet_ = true;
}

bool ShowAuditTaskStatusResponse::beginTimeIsSet() const
{
    return beginTimeIsSet_;
}

void ShowAuditTaskStatusResponse::unsetbeginTime()
{
    beginTimeIsSet_ = false;
}

std::string ShowAuditTaskStatusResponse::getBusiType() const
{
    return busiType_;
}

void ShowAuditTaskStatusResponse::setBusiType(const std::string& value)
{
    busiType_ = value;
    busiTypeIsSet_ = true;
}

bool ShowAuditTaskStatusResponse::busiTypeIsSet() const
{
    return busiTypeIsSet_;
}

void ShowAuditTaskStatusResponse::unsetbusiType()
{
    busiTypeIsSet_ = false;
}

int32_t ShowAuditTaskStatusResponse::getCompletedNum() const
{
    return completedNum_;
}

void ShowAuditTaskStatusResponse::setCompletedNum(int32_t value)
{
    completedNum_ = value;
    completedNumIsSet_ = true;
}

bool ShowAuditTaskStatusResponse::completedNumIsSet() const
{
    return completedNumIsSet_;
}

void ShowAuditTaskStatusResponse::unsetcompletedNum()
{
    completedNumIsSet_ = false;
}

int64_t ShowAuditTaskStatusResponse::getEndTime() const
{
    return endTime_;
}

void ShowAuditTaskStatusResponse::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ShowAuditTaskStatusResponse::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ShowAuditTaskStatusResponse::unsetendTime()
{
    endTimeIsSet_ = false;
}

int64_t ShowAuditTaskStatusResponse::getId() const
{
    return id_;
}

void ShowAuditTaskStatusResponse::setId(int64_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowAuditTaskStatusResponse::idIsSet() const
{
    return idIsSet_;
}

void ShowAuditTaskStatusResponse::unsetid()
{
    idIsSet_ = false;
}

std::string ShowAuditTaskStatusResponse::getProjectId() const
{
    return projectId_;
}

void ShowAuditTaskStatusResponse::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowAuditTaskStatusResponse::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowAuditTaskStatusResponse::unsetprojectId()
{
    projectIdIsSet_ = false;
}

int64_t ShowAuditTaskStatusResponse::getQueryBeginTime() const
{
    return queryBeginTime_;
}

void ShowAuditTaskStatusResponse::setQueryBeginTime(int64_t value)
{
    queryBeginTime_ = value;
    queryBeginTimeIsSet_ = true;
}

bool ShowAuditTaskStatusResponse::queryBeginTimeIsSet() const
{
    return queryBeginTimeIsSet_;
}

void ShowAuditTaskStatusResponse::unsetqueryBeginTime()
{
    queryBeginTimeIsSet_ = false;
}

int64_t ShowAuditTaskStatusResponse::getQueryEndTime() const
{
    return queryEndTime_;
}

void ShowAuditTaskStatusResponse::setQueryEndTime(int64_t value)
{
    queryEndTime_ = value;
    queryEndTimeIsSet_ = true;
}

bool ShowAuditTaskStatusResponse::queryEndTimeIsSet() const
{
    return queryEndTimeIsSet_;
}

void ShowAuditTaskStatusResponse::unsetqueryEndTime()
{
    queryEndTimeIsSet_ = false;
}

std::string ShowAuditTaskStatusResponse::getTaskStatus() const
{
    return taskStatus_;
}

void ShowAuditTaskStatusResponse::setTaskStatus(const std::string& value)
{
    taskStatus_ = value;
    taskStatusIsSet_ = true;
}

bool ShowAuditTaskStatusResponse::taskStatusIsSet() const
{
    return taskStatusIsSet_;
}

void ShowAuditTaskStatusResponse::unsettaskStatus()
{
    taskStatusIsSet_ = false;
}

std::string ShowAuditTaskStatusResponse::getTaskSwitch() const
{
    return taskSwitch_;
}

void ShowAuditTaskStatusResponse::setTaskSwitch(const std::string& value)
{
    taskSwitch_ = value;
    taskSwitchIsSet_ = true;
}

bool ShowAuditTaskStatusResponse::taskSwitchIsSet() const
{
    return taskSwitchIsSet_;
}

void ShowAuditTaskStatusResponse::unsettaskSwitch()
{
    taskSwitchIsSet_ = false;
}

int32_t ShowAuditTaskStatusResponse::getTotalNum() const
{
    return totalNum_;
}

void ShowAuditTaskStatusResponse::setTotalNum(int32_t value)
{
    totalNum_ = value;
    totalNumIsSet_ = true;
}

bool ShowAuditTaskStatusResponse::totalNumIsSet() const
{
    return totalNumIsSet_;
}

void ShowAuditTaskStatusResponse::unsettotalNum()
{
    totalNumIsSet_ = false;
}

}
}
}
}
}


