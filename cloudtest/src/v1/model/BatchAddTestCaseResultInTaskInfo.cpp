

#include "huaweicloud/cloudtest/v1/model/BatchAddTestCaseResultInTaskInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




BatchAddTestCaseResultInTaskInfo::BatchAddTestCaseResultInTaskInfo()
{
    resultIsSet_ = false;
    taskUri_ = "";
    taskUriIsSet_ = false;
    taskResultUri_ = "";
    taskResultUriIsSet_ = false;
    testCaseUrisIsSet_ = false;
    isAsyn_ = false;
    isAsynIsSet_ = false;
}

BatchAddTestCaseResultInTaskInfo::~BatchAddTestCaseResultInTaskInfo() = default;

void BatchAddTestCaseResultInTaskInfo::validate()
{
}

web::json::value BatchAddTestCaseResultInTaskInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }
    if(taskUriIsSet_) {
        val[utility::conversions::to_string_t("task_uri")] = ModelBase::toJson(taskUri_);
    }
    if(taskResultUriIsSet_) {
        val[utility::conversions::to_string_t("task_result_uri")] = ModelBase::toJson(taskResultUri_);
    }
    if(testCaseUrisIsSet_) {
        val[utility::conversions::to_string_t("test_case_uris")] = ModelBase::toJson(testCaseUris_);
    }
    if(isAsynIsSet_) {
        val[utility::conversions::to_string_t("isAsyn")] = ModelBase::toJson(isAsyn_);
    }

    return val;
}
bool BatchAddTestCaseResultInTaskInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            AddTestCaseResultInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskUri(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_result_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_result_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskResultUri(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("test_case_uris"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("test_case_uris"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestCaseUris(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("isAsyn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isAsyn"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsAsyn(refVal);
        }
    }
    return ok;
}


AddTestCaseResultInfo BatchAddTestCaseResultInTaskInfo::getResult() const
{
    return result_;
}

void BatchAddTestCaseResultInTaskInfo::setResult(const AddTestCaseResultInfo& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool BatchAddTestCaseResultInTaskInfo::resultIsSet() const
{
    return resultIsSet_;
}

void BatchAddTestCaseResultInTaskInfo::unsetresult()
{
    resultIsSet_ = false;
}

std::string BatchAddTestCaseResultInTaskInfo::getTaskUri() const
{
    return taskUri_;
}

void BatchAddTestCaseResultInTaskInfo::setTaskUri(const std::string& value)
{
    taskUri_ = value;
    taskUriIsSet_ = true;
}

bool BatchAddTestCaseResultInTaskInfo::taskUriIsSet() const
{
    return taskUriIsSet_;
}

void BatchAddTestCaseResultInTaskInfo::unsettaskUri()
{
    taskUriIsSet_ = false;
}

std::string BatchAddTestCaseResultInTaskInfo::getTaskResultUri() const
{
    return taskResultUri_;
}

void BatchAddTestCaseResultInTaskInfo::setTaskResultUri(const std::string& value)
{
    taskResultUri_ = value;
    taskResultUriIsSet_ = true;
}

bool BatchAddTestCaseResultInTaskInfo::taskResultUriIsSet() const
{
    return taskResultUriIsSet_;
}

void BatchAddTestCaseResultInTaskInfo::unsettaskResultUri()
{
    taskResultUriIsSet_ = false;
}

std::vector<std::string>& BatchAddTestCaseResultInTaskInfo::getTestCaseUris()
{
    return testCaseUris_;
}

void BatchAddTestCaseResultInTaskInfo::setTestCaseUris(const std::vector<std::string>& value)
{
    testCaseUris_ = value;
    testCaseUrisIsSet_ = true;
}

bool BatchAddTestCaseResultInTaskInfo::testCaseUrisIsSet() const
{
    return testCaseUrisIsSet_;
}

void BatchAddTestCaseResultInTaskInfo::unsettestCaseUris()
{
    testCaseUrisIsSet_ = false;
}

bool BatchAddTestCaseResultInTaskInfo::isIsAsyn() const
{
    return isAsyn_;
}

void BatchAddTestCaseResultInTaskInfo::setIsAsyn(bool value)
{
    isAsyn_ = value;
    isAsynIsSet_ = true;
}

bool BatchAddTestCaseResultInTaskInfo::isAsynIsSet() const
{
    return isAsynIsSet_;
}

void BatchAddTestCaseResultInTaskInfo::unsetisAsyn()
{
    isAsynIsSet_ = false;
}

}
}
}
}
}


