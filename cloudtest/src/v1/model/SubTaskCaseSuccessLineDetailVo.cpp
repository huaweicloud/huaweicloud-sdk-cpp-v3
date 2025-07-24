

#include "huaweicloud/cloudtest/v1/model/SubTaskCaseSuccessLineDetailVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




SubTaskCaseSuccessLineDetailVo::SubTaskCaseSuccessLineDetailVo()
{
    date_ = 0L;
    dateIsSet_ = false;
    passRate_ = 0.0f;
    passRateIsSet_ = false;
    taskId_ = "";
    taskIdIsSet_ = false;
    taskName_ = "";
    taskNameIsSet_ = false;
}

SubTaskCaseSuccessLineDetailVo::~SubTaskCaseSuccessLineDetailVo() = default;

void SubTaskCaseSuccessLineDetailVo::validate()
{
}

web::json::value SubTaskCaseSuccessLineDetailVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dateIsSet_) {
        val[utility::conversions::to_string_t("date")] = ModelBase::toJson(date_);
    }
    if(passRateIsSet_) {
        val[utility::conversions::to_string_t("pass_rate")] = ModelBase::toJson(passRate_);
    }
    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }
    if(taskNameIsSet_) {
        val[utility::conversions::to_string_t("task_name")] = ModelBase::toJson(taskName_);
    }

    return val;
}
bool SubTaskCaseSuccessLineDetailVo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("date"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pass_rate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pass_rate"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPassRate(refVal);
        }
    }
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
    return ok;
}


int64_t SubTaskCaseSuccessLineDetailVo::getDate() const
{
    return date_;
}

void SubTaskCaseSuccessLineDetailVo::setDate(int64_t value)
{
    date_ = value;
    dateIsSet_ = true;
}

bool SubTaskCaseSuccessLineDetailVo::dateIsSet() const
{
    return dateIsSet_;
}

void SubTaskCaseSuccessLineDetailVo::unsetdate()
{
    dateIsSet_ = false;
}

float SubTaskCaseSuccessLineDetailVo::getPassRate() const
{
    return passRate_;
}

void SubTaskCaseSuccessLineDetailVo::setPassRate(float value)
{
    passRate_ = value;
    passRateIsSet_ = true;
}

bool SubTaskCaseSuccessLineDetailVo::passRateIsSet() const
{
    return passRateIsSet_;
}

void SubTaskCaseSuccessLineDetailVo::unsetpassRate()
{
    passRateIsSet_ = false;
}

std::string SubTaskCaseSuccessLineDetailVo::getTaskId() const
{
    return taskId_;
}

void SubTaskCaseSuccessLineDetailVo::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool SubTaskCaseSuccessLineDetailVo::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void SubTaskCaseSuccessLineDetailVo::unsettaskId()
{
    taskIdIsSet_ = false;
}

std::string SubTaskCaseSuccessLineDetailVo::getTaskName() const
{
    return taskName_;
}

void SubTaskCaseSuccessLineDetailVo::setTaskName(const std::string& value)
{
    taskName_ = value;
    taskNameIsSet_ = true;
}

bool SubTaskCaseSuccessLineDetailVo::taskNameIsSet() const
{
    return taskNameIsSet_;
}

void SubTaskCaseSuccessLineDetailVo::unsettaskName()
{
    taskNameIsSet_ = false;
}

}
}
}
}
}


