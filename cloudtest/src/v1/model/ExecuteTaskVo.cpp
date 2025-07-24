

#include "huaweicloud/cloudtest/v1/model/ExecuteTaskVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ExecuteTaskVo::ExecuteTaskVo()
{
    flag_ = false;
    flagIsSet_ = false;
    uri_ = "";
    uriIsSet_ = false;
    taskResultVoIsSet_ = false;
    updateCaseUriListIsSet_ = false;
    testCaseResultListIsSet_ = false;
}

ExecuteTaskVo::~ExecuteTaskVo() = default;

void ExecuteTaskVo::validate()
{
}

web::json::value ExecuteTaskVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(flagIsSet_) {
        val[utility::conversions::to_string_t("flag")] = ModelBase::toJson(flag_);
    }
    if(uriIsSet_) {
        val[utility::conversions::to_string_t("uri")] = ModelBase::toJson(uri_);
    }
    if(taskResultVoIsSet_) {
        val[utility::conversions::to_string_t("task_result_vo")] = ModelBase::toJson(taskResultVo_);
    }
    if(updateCaseUriListIsSet_) {
        val[utility::conversions::to_string_t("update_case_uri_list")] = ModelBase::toJson(updateCaseUriList_);
    }
    if(testCaseResultListIsSet_) {
        val[utility::conversions::to_string_t("test_case_result_list")] = ModelBase::toJson(testCaseResultList_);
    }

    return val;
}
bool ExecuteTaskVo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("flag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flag"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlag(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUri(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_result_vo"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_result_vo"));
        if(!fieldValue.is_null())
        {
            TaskResultVo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskResultVo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_case_uri_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_case_uri_list"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateCaseUriList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("test_case_result_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("test_case_result_list"));
        if(!fieldValue.is_null())
        {
            std::vector<TestResultVo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestCaseResultList(refVal);
        }
    }
    return ok;
}


bool ExecuteTaskVo::isFlag() const
{
    return flag_;
}

void ExecuteTaskVo::setFlag(bool value)
{
    flag_ = value;
    flagIsSet_ = true;
}

bool ExecuteTaskVo::flagIsSet() const
{
    return flagIsSet_;
}

void ExecuteTaskVo::unsetflag()
{
    flagIsSet_ = false;
}

std::string ExecuteTaskVo::getUri() const
{
    return uri_;
}

void ExecuteTaskVo::setUri(const std::string& value)
{
    uri_ = value;
    uriIsSet_ = true;
}

bool ExecuteTaskVo::uriIsSet() const
{
    return uriIsSet_;
}

void ExecuteTaskVo::unseturi()
{
    uriIsSet_ = false;
}

TaskResultVo ExecuteTaskVo::getTaskResultVo() const
{
    return taskResultVo_;
}

void ExecuteTaskVo::setTaskResultVo(const TaskResultVo& value)
{
    taskResultVo_ = value;
    taskResultVoIsSet_ = true;
}

bool ExecuteTaskVo::taskResultVoIsSet() const
{
    return taskResultVoIsSet_;
}

void ExecuteTaskVo::unsettaskResultVo()
{
    taskResultVoIsSet_ = false;
}

std::vector<std::string>& ExecuteTaskVo::getUpdateCaseUriList()
{
    return updateCaseUriList_;
}

void ExecuteTaskVo::setUpdateCaseUriList(const std::vector<std::string>& value)
{
    updateCaseUriList_ = value;
    updateCaseUriListIsSet_ = true;
}

bool ExecuteTaskVo::updateCaseUriListIsSet() const
{
    return updateCaseUriListIsSet_;
}

void ExecuteTaskVo::unsetupdateCaseUriList()
{
    updateCaseUriListIsSet_ = false;
}

std::vector<TestResultVo>& ExecuteTaskVo::getTestCaseResultList()
{
    return testCaseResultList_;
}

void ExecuteTaskVo::setTestCaseResultList(const std::vector<TestResultVo>& value)
{
    testCaseResultList_ = value;
    testCaseResultListIsSet_ = true;
}

bool ExecuteTaskVo::testCaseResultListIsSet() const
{
    return testCaseResultListIsSet_;
}

void ExecuteTaskVo::unsettestCaseResultList()
{
    testCaseResultListIsSet_ = false;
}

}
}
}
}
}


