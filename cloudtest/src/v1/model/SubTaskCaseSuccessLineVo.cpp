

#include "huaweicloud/cloudtest/v1/model/SubTaskCaseSuccessLineVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




SubTaskCaseSuccessLineVo::SubTaskCaseSuccessLineVo()
{
    detailIsSet_ = false;
    taskId_ = "";
    taskIdIsSet_ = false;
    taskName_ = "";
    taskNameIsSet_ = false;
}

SubTaskCaseSuccessLineVo::~SubTaskCaseSuccessLineVo() = default;

void SubTaskCaseSuccessLineVo::validate()
{
}

web::json::value SubTaskCaseSuccessLineVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(detailIsSet_) {
        val[utility::conversions::to_string_t("detail")] = ModelBase::toJson(detail_);
    }
    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }
    if(taskNameIsSet_) {
        val[utility::conversions::to_string_t("task_name")] = ModelBase::toJson(taskName_);
    }

    return val;
}
bool SubTaskCaseSuccessLineVo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("detail"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("detail"));
        if(!fieldValue.is_null())
        {
            std::vector<SubTaskCaseSuccessLineDetailVo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDetail(refVal);
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


std::vector<SubTaskCaseSuccessLineDetailVo>& SubTaskCaseSuccessLineVo::getDetail()
{
    return detail_;
}

void SubTaskCaseSuccessLineVo::setDetail(const std::vector<SubTaskCaseSuccessLineDetailVo>& value)
{
    detail_ = value;
    detailIsSet_ = true;
}

bool SubTaskCaseSuccessLineVo::detailIsSet() const
{
    return detailIsSet_;
}

void SubTaskCaseSuccessLineVo::unsetdetail()
{
    detailIsSet_ = false;
}

std::string SubTaskCaseSuccessLineVo::getTaskId() const
{
    return taskId_;
}

void SubTaskCaseSuccessLineVo::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool SubTaskCaseSuccessLineVo::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void SubTaskCaseSuccessLineVo::unsettaskId()
{
    taskIdIsSet_ = false;
}

std::string SubTaskCaseSuccessLineVo::getTaskName() const
{
    return taskName_;
}

void SubTaskCaseSuccessLineVo::setTaskName(const std::string& value)
{
    taskName_ = value;
    taskNameIsSet_ = true;
}

bool SubTaskCaseSuccessLineVo::taskNameIsSet() const
{
    return taskNameIsSet_;
}

void SubTaskCaseSuccessLineVo::unsettaskName()
{
    taskNameIsSet_ = false;
}

}
}
}
}
}


