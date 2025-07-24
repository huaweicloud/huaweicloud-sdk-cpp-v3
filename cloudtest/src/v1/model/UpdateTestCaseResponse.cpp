

#include "huaweicloud/cloudtest/v1/model/UpdateTestCaseResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




UpdateTestCaseResponse::UpdateTestCaseResponse()
{
    testcaseId_ = "";
    testcaseIdIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    serviceId_ = 0;
    serviceIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    testcaseNumber_ = "";
    testcaseNumberIsSet_ = false;
    rankId_ = 0;
    rankIdIsSet_ = false;
    statusId_ = "";
    statusIdIsSet_ = false;
    assignedUserIsSet_ = false;
    executeCount_ = 0;
    executeCountIsSet_ = false;
    resultId_ = "";
    resultIdIsSet_ = false;
    extendInfoIsSet_ = false;
    errorCode_ = "";
    errorCodeIsSet_ = false;
    errorMsg_ = "";
    errorMsgIsSet_ = false;
}

UpdateTestCaseResponse::~UpdateTestCaseResponse() = default;

void UpdateTestCaseResponse::validate()
{
}

web::json::value UpdateTestCaseResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(testcaseIdIsSet_) {
        val[utility::conversions::to_string_t("testcase_id")] = ModelBase::toJson(testcaseId_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(serviceIdIsSet_) {
        val[utility::conversions::to_string_t("service_id")] = ModelBase::toJson(serviceId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(testcaseNumberIsSet_) {
        val[utility::conversions::to_string_t("testcase_number")] = ModelBase::toJson(testcaseNumber_);
    }
    if(rankIdIsSet_) {
        val[utility::conversions::to_string_t("rank_id")] = ModelBase::toJson(rankId_);
    }
    if(statusIdIsSet_) {
        val[utility::conversions::to_string_t("status_id")] = ModelBase::toJson(statusId_);
    }
    if(assignedUserIsSet_) {
        val[utility::conversions::to_string_t("assigned_user")] = ModelBase::toJson(assignedUser_);
    }
    if(executeCountIsSet_) {
        val[utility::conversions::to_string_t("execute_count")] = ModelBase::toJson(executeCount_);
    }
    if(resultIdIsSet_) {
        val[utility::conversions::to_string_t("result_id")] = ModelBase::toJson(resultId_);
    }
    if(extendInfoIsSet_) {
        val[utility::conversions::to_string_t("extend_info")] = ModelBase::toJson(extendInfo_);
    }
    if(errorCodeIsSet_) {
        val[utility::conversions::to_string_t("error_code")] = ModelBase::toJson(errorCode_);
    }
    if(errorMsgIsSet_) {
        val[utility::conversions::to_string_t("error_msg")] = ModelBase::toJson(errorMsg_);
    }

    return val;
}
bool UpdateTestCaseResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("testcase_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("testcase_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestcaseId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("service_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("testcase_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("testcase_number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestcaseNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rank_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rank_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRankId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatusId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("assigned_user"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("assigned_user"));
        if(!fieldValue.is_null())
        {
            AssignedUserInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssignedUser(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("execute_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("execute_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecuteCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("result_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResultId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("extend_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("extend_info"));
        if(!fieldValue.is_null())
        {
            ExtendInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtendInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_msg"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_msg"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorMsg(refVal);
        }
    }
    return ok;
}


std::string UpdateTestCaseResponse::getTestcaseId() const
{
    return testcaseId_;
}

void UpdateTestCaseResponse::setTestcaseId(const std::string& value)
{
    testcaseId_ = value;
    testcaseIdIsSet_ = true;
}

bool UpdateTestCaseResponse::testcaseIdIsSet() const
{
    return testcaseIdIsSet_;
}

void UpdateTestCaseResponse::unsettestcaseId()
{
    testcaseIdIsSet_ = false;
}

std::string UpdateTestCaseResponse::getProjectId() const
{
    return projectId_;
}

void UpdateTestCaseResponse::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool UpdateTestCaseResponse::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void UpdateTestCaseResponse::unsetprojectId()
{
    projectIdIsSet_ = false;
}

int32_t UpdateTestCaseResponse::getServiceId() const
{
    return serviceId_;
}

void UpdateTestCaseResponse::setServiceId(int32_t value)
{
    serviceId_ = value;
    serviceIdIsSet_ = true;
}

bool UpdateTestCaseResponse::serviceIdIsSet() const
{
    return serviceIdIsSet_;
}

void UpdateTestCaseResponse::unsetserviceId()
{
    serviceIdIsSet_ = false;
}

std::string UpdateTestCaseResponse::getName() const
{
    return name_;
}

void UpdateTestCaseResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateTestCaseResponse::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateTestCaseResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string UpdateTestCaseResponse::getTestcaseNumber() const
{
    return testcaseNumber_;
}

void UpdateTestCaseResponse::setTestcaseNumber(const std::string& value)
{
    testcaseNumber_ = value;
    testcaseNumberIsSet_ = true;
}

bool UpdateTestCaseResponse::testcaseNumberIsSet() const
{
    return testcaseNumberIsSet_;
}

void UpdateTestCaseResponse::unsettestcaseNumber()
{
    testcaseNumberIsSet_ = false;
}

int32_t UpdateTestCaseResponse::getRankId() const
{
    return rankId_;
}

void UpdateTestCaseResponse::setRankId(int32_t value)
{
    rankId_ = value;
    rankIdIsSet_ = true;
}

bool UpdateTestCaseResponse::rankIdIsSet() const
{
    return rankIdIsSet_;
}

void UpdateTestCaseResponse::unsetrankId()
{
    rankIdIsSet_ = false;
}

std::string UpdateTestCaseResponse::getStatusId() const
{
    return statusId_;
}

void UpdateTestCaseResponse::setStatusId(const std::string& value)
{
    statusId_ = value;
    statusIdIsSet_ = true;
}

bool UpdateTestCaseResponse::statusIdIsSet() const
{
    return statusIdIsSet_;
}

void UpdateTestCaseResponse::unsetstatusId()
{
    statusIdIsSet_ = false;
}

AssignedUserInfo UpdateTestCaseResponse::getAssignedUser() const
{
    return assignedUser_;
}

void UpdateTestCaseResponse::setAssignedUser(const AssignedUserInfo& value)
{
    assignedUser_ = value;
    assignedUserIsSet_ = true;
}

bool UpdateTestCaseResponse::assignedUserIsSet() const
{
    return assignedUserIsSet_;
}

void UpdateTestCaseResponse::unsetassignedUser()
{
    assignedUserIsSet_ = false;
}

int32_t UpdateTestCaseResponse::getExecuteCount() const
{
    return executeCount_;
}

void UpdateTestCaseResponse::setExecuteCount(int32_t value)
{
    executeCount_ = value;
    executeCountIsSet_ = true;
}

bool UpdateTestCaseResponse::executeCountIsSet() const
{
    return executeCountIsSet_;
}

void UpdateTestCaseResponse::unsetexecuteCount()
{
    executeCountIsSet_ = false;
}

std::string UpdateTestCaseResponse::getResultId() const
{
    return resultId_;
}

void UpdateTestCaseResponse::setResultId(const std::string& value)
{
    resultId_ = value;
    resultIdIsSet_ = true;
}

bool UpdateTestCaseResponse::resultIdIsSet() const
{
    return resultIdIsSet_;
}

void UpdateTestCaseResponse::unsetresultId()
{
    resultIdIsSet_ = false;
}

ExtendInfo UpdateTestCaseResponse::getExtendInfo() const
{
    return extendInfo_;
}

void UpdateTestCaseResponse::setExtendInfo(const ExtendInfo& value)
{
    extendInfo_ = value;
    extendInfoIsSet_ = true;
}

bool UpdateTestCaseResponse::extendInfoIsSet() const
{
    return extendInfoIsSet_;
}

void UpdateTestCaseResponse::unsetextendInfo()
{
    extendInfoIsSet_ = false;
}

std::string UpdateTestCaseResponse::getErrorCode() const
{
    return errorCode_;
}

void UpdateTestCaseResponse::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool UpdateTestCaseResponse::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void UpdateTestCaseResponse::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string UpdateTestCaseResponse::getErrorMsg() const
{
    return errorMsg_;
}

void UpdateTestCaseResponse::setErrorMsg(const std::string& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool UpdateTestCaseResponse::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void UpdateTestCaseResponse::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

}
}
}
}
}


