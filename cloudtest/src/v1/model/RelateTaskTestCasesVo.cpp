

#include "huaweicloud/cloudtest/v1/model/RelateTaskTestCasesVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




RelateTaskTestCasesVo::RelateTaskTestCasesVo()
{
    testCaseNum_ = "";
    testCaseNumIsSet_ = false;
    testCaseName_ = "";
    testCaseNameIsSet_ = false;
    testCaseUri_ = "";
    testCaseUriIsSet_ = false;
    taskUri_ = "";
    taskUriIsSet_ = false;
    taskName_ = "";
    taskNameIsSet_ = false;
    taskNum_ = "";
    taskNumIsSet_ = false;
    taskCreator_ = "";
    taskCreatorIsSet_ = false;
}

RelateTaskTestCasesVo::~RelateTaskTestCasesVo() = default;

void RelateTaskTestCasesVo::validate()
{
}

web::json::value RelateTaskTestCasesVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(testCaseNumIsSet_) {
        val[utility::conversions::to_string_t("test_case_num")] = ModelBase::toJson(testCaseNum_);
    }
    if(testCaseNameIsSet_) {
        val[utility::conversions::to_string_t("test_case_name")] = ModelBase::toJson(testCaseName_);
    }
    if(testCaseUriIsSet_) {
        val[utility::conversions::to_string_t("test_case_uri")] = ModelBase::toJson(testCaseUri_);
    }
    if(taskUriIsSet_) {
        val[utility::conversions::to_string_t("task_uri")] = ModelBase::toJson(taskUri_);
    }
    if(taskNameIsSet_) {
        val[utility::conversions::to_string_t("task_name")] = ModelBase::toJson(taskName_);
    }
    if(taskNumIsSet_) {
        val[utility::conversions::to_string_t("task_num")] = ModelBase::toJson(taskNum_);
    }
    if(taskCreatorIsSet_) {
        val[utility::conversions::to_string_t("task_creator")] = ModelBase::toJson(taskCreator_);
    }

    return val;
}
bool RelateTaskTestCasesVo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("test_case_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("test_case_num"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestCaseNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("test_case_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("test_case_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestCaseName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("test_case_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("test_case_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestCaseUri(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("task_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_num"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_creator"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_creator"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskCreator(refVal);
        }
    }
    return ok;
}


std::string RelateTaskTestCasesVo::getTestCaseNum() const
{
    return testCaseNum_;
}

void RelateTaskTestCasesVo::setTestCaseNum(const std::string& value)
{
    testCaseNum_ = value;
    testCaseNumIsSet_ = true;
}

bool RelateTaskTestCasesVo::testCaseNumIsSet() const
{
    return testCaseNumIsSet_;
}

void RelateTaskTestCasesVo::unsettestCaseNum()
{
    testCaseNumIsSet_ = false;
}

std::string RelateTaskTestCasesVo::getTestCaseName() const
{
    return testCaseName_;
}

void RelateTaskTestCasesVo::setTestCaseName(const std::string& value)
{
    testCaseName_ = value;
    testCaseNameIsSet_ = true;
}

bool RelateTaskTestCasesVo::testCaseNameIsSet() const
{
    return testCaseNameIsSet_;
}

void RelateTaskTestCasesVo::unsettestCaseName()
{
    testCaseNameIsSet_ = false;
}

std::string RelateTaskTestCasesVo::getTestCaseUri() const
{
    return testCaseUri_;
}

void RelateTaskTestCasesVo::setTestCaseUri(const std::string& value)
{
    testCaseUri_ = value;
    testCaseUriIsSet_ = true;
}

bool RelateTaskTestCasesVo::testCaseUriIsSet() const
{
    return testCaseUriIsSet_;
}

void RelateTaskTestCasesVo::unsettestCaseUri()
{
    testCaseUriIsSet_ = false;
}

std::string RelateTaskTestCasesVo::getTaskUri() const
{
    return taskUri_;
}

void RelateTaskTestCasesVo::setTaskUri(const std::string& value)
{
    taskUri_ = value;
    taskUriIsSet_ = true;
}

bool RelateTaskTestCasesVo::taskUriIsSet() const
{
    return taskUriIsSet_;
}

void RelateTaskTestCasesVo::unsettaskUri()
{
    taskUriIsSet_ = false;
}

std::string RelateTaskTestCasesVo::getTaskName() const
{
    return taskName_;
}

void RelateTaskTestCasesVo::setTaskName(const std::string& value)
{
    taskName_ = value;
    taskNameIsSet_ = true;
}

bool RelateTaskTestCasesVo::taskNameIsSet() const
{
    return taskNameIsSet_;
}

void RelateTaskTestCasesVo::unsettaskName()
{
    taskNameIsSet_ = false;
}

std::string RelateTaskTestCasesVo::getTaskNum() const
{
    return taskNum_;
}

void RelateTaskTestCasesVo::setTaskNum(const std::string& value)
{
    taskNum_ = value;
    taskNumIsSet_ = true;
}

bool RelateTaskTestCasesVo::taskNumIsSet() const
{
    return taskNumIsSet_;
}

void RelateTaskTestCasesVo::unsettaskNum()
{
    taskNumIsSet_ = false;
}

std::string RelateTaskTestCasesVo::getTaskCreator() const
{
    return taskCreator_;
}

void RelateTaskTestCasesVo::setTaskCreator(const std::string& value)
{
    taskCreator_ = value;
    taskCreatorIsSet_ = true;
}

bool RelateTaskTestCasesVo::taskCreatorIsSet() const
{
    return taskCreatorIsSet_;
}

void RelateTaskTestCasesVo::unsettaskCreator()
{
    taskCreatorIsSet_ = false;
}

}
}
}
}
}


