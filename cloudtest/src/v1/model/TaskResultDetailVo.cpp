

#include "huaweicloud/cloudtest/v1/model/TaskResultDetailVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




TaskResultDetailVo::TaskResultDetailVo()
{
    owner_ = "";
    ownerIsSet_ = false;
    caseResultStaticsIsSet_ = false;
    taskResultIsSet_ = false;
    testResultListIsSet_ = false;
}

TaskResultDetailVo::~TaskResultDetailVo() = default;

void TaskResultDetailVo::validate()
{
}

web::json::value TaskResultDetailVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ownerIsSet_) {
        val[utility::conversions::to_string_t("owner")] = ModelBase::toJson(owner_);
    }
    if(caseResultStaticsIsSet_) {
        val[utility::conversions::to_string_t("case_result_statics")] = ModelBase::toJson(caseResultStatics_);
    }
    if(taskResultIsSet_) {
        val[utility::conversions::to_string_t("task_result")] = ModelBase::toJson(taskResult_);
    }
    if(testResultListIsSet_) {
        val[utility::conversions::to_string_t("test_result_list")] = ModelBase::toJson(testResultList_);
    }

    return val;
}
bool TaskResultDetailVo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("owner"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("owner"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOwner(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("case_result_statics"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("case_result_statics"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCaseResultStatics(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_result"));
        if(!fieldValue.is_null())
        {
            TaskResultVo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("test_result_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("test_result_list"));
        if(!fieldValue.is_null())
        {
            std::vector<TaskResultVo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestResultList(refVal);
        }
    }
    return ok;
}


std::string TaskResultDetailVo::getOwner() const
{
    return owner_;
}

void TaskResultDetailVo::setOwner(const std::string& value)
{
    owner_ = value;
    ownerIsSet_ = true;
}

bool TaskResultDetailVo::ownerIsSet() const
{
    return ownerIsSet_;
}

void TaskResultDetailVo::unsetowner()
{
    ownerIsSet_ = false;
}

Object TaskResultDetailVo::getCaseResultStatics() const
{
    return caseResultStatics_;
}

void TaskResultDetailVo::setCaseResultStatics(const Object& value)
{
    caseResultStatics_ = value;
    caseResultStaticsIsSet_ = true;
}

bool TaskResultDetailVo::caseResultStaticsIsSet() const
{
    return caseResultStaticsIsSet_;
}

void TaskResultDetailVo::unsetcaseResultStatics()
{
    caseResultStaticsIsSet_ = false;
}

TaskResultVo TaskResultDetailVo::getTaskResult() const
{
    return taskResult_;
}

void TaskResultDetailVo::setTaskResult(const TaskResultVo& value)
{
    taskResult_ = value;
    taskResultIsSet_ = true;
}

bool TaskResultDetailVo::taskResultIsSet() const
{
    return taskResultIsSet_;
}

void TaskResultDetailVo::unsettaskResult()
{
    taskResultIsSet_ = false;
}

std::vector<TaskResultVo>& TaskResultDetailVo::getTestResultList()
{
    return testResultList_;
}

void TaskResultDetailVo::setTestResultList(const std::vector<TaskResultVo>& value)
{
    testResultList_ = value;
    testResultListIsSet_ = true;
}

bool TaskResultDetailVo::testResultListIsSet() const
{
    return testResultListIsSet_;
}

void TaskResultDetailVo::unsettestResultList()
{
    testResultListIsSet_ = false;
}

}
}
}
}
}


