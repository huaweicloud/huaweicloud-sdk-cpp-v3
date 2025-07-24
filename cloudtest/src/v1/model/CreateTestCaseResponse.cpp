

#include "huaweicloud/cloudtest/v1/model/CreateTestCaseResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




CreateTestCaseResponse::CreateTestCaseResponse()
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

CreateTestCaseResponse::~CreateTestCaseResponse() = default;

void CreateTestCaseResponse::validate()
{
}

web::json::value CreateTestCaseResponse::toJson() const
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
bool CreateTestCaseResponse::fromJson(const web::json::value& val)
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


std::string CreateTestCaseResponse::getTestcaseId() const
{
    return testcaseId_;
}

void CreateTestCaseResponse::setTestcaseId(const std::string& value)
{
    testcaseId_ = value;
    testcaseIdIsSet_ = true;
}

bool CreateTestCaseResponse::testcaseIdIsSet() const
{
    return testcaseIdIsSet_;
}

void CreateTestCaseResponse::unsettestcaseId()
{
    testcaseIdIsSet_ = false;
}

std::string CreateTestCaseResponse::getProjectId() const
{
    return projectId_;
}

void CreateTestCaseResponse::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool CreateTestCaseResponse::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void CreateTestCaseResponse::unsetprojectId()
{
    projectIdIsSet_ = false;
}

int32_t CreateTestCaseResponse::getServiceId() const
{
    return serviceId_;
}

void CreateTestCaseResponse::setServiceId(int32_t value)
{
    serviceId_ = value;
    serviceIdIsSet_ = true;
}

bool CreateTestCaseResponse::serviceIdIsSet() const
{
    return serviceIdIsSet_;
}

void CreateTestCaseResponse::unsetserviceId()
{
    serviceIdIsSet_ = false;
}

std::string CreateTestCaseResponse::getName() const
{
    return name_;
}

void CreateTestCaseResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateTestCaseResponse::nameIsSet() const
{
    return nameIsSet_;
}

void CreateTestCaseResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string CreateTestCaseResponse::getTestcaseNumber() const
{
    return testcaseNumber_;
}

void CreateTestCaseResponse::setTestcaseNumber(const std::string& value)
{
    testcaseNumber_ = value;
    testcaseNumberIsSet_ = true;
}

bool CreateTestCaseResponse::testcaseNumberIsSet() const
{
    return testcaseNumberIsSet_;
}

void CreateTestCaseResponse::unsettestcaseNumber()
{
    testcaseNumberIsSet_ = false;
}

int32_t CreateTestCaseResponse::getRankId() const
{
    return rankId_;
}

void CreateTestCaseResponse::setRankId(int32_t value)
{
    rankId_ = value;
    rankIdIsSet_ = true;
}

bool CreateTestCaseResponse::rankIdIsSet() const
{
    return rankIdIsSet_;
}

void CreateTestCaseResponse::unsetrankId()
{
    rankIdIsSet_ = false;
}

std::string CreateTestCaseResponse::getStatusId() const
{
    return statusId_;
}

void CreateTestCaseResponse::setStatusId(const std::string& value)
{
    statusId_ = value;
    statusIdIsSet_ = true;
}

bool CreateTestCaseResponse::statusIdIsSet() const
{
    return statusIdIsSet_;
}

void CreateTestCaseResponse::unsetstatusId()
{
    statusIdIsSet_ = false;
}

AssignedUserInfo CreateTestCaseResponse::getAssignedUser() const
{
    return assignedUser_;
}

void CreateTestCaseResponse::setAssignedUser(const AssignedUserInfo& value)
{
    assignedUser_ = value;
    assignedUserIsSet_ = true;
}

bool CreateTestCaseResponse::assignedUserIsSet() const
{
    return assignedUserIsSet_;
}

void CreateTestCaseResponse::unsetassignedUser()
{
    assignedUserIsSet_ = false;
}

int32_t CreateTestCaseResponse::getExecuteCount() const
{
    return executeCount_;
}

void CreateTestCaseResponse::setExecuteCount(int32_t value)
{
    executeCount_ = value;
    executeCountIsSet_ = true;
}

bool CreateTestCaseResponse::executeCountIsSet() const
{
    return executeCountIsSet_;
}

void CreateTestCaseResponse::unsetexecuteCount()
{
    executeCountIsSet_ = false;
}

std::string CreateTestCaseResponse::getResultId() const
{
    return resultId_;
}

void CreateTestCaseResponse::setResultId(const std::string& value)
{
    resultId_ = value;
    resultIdIsSet_ = true;
}

bool CreateTestCaseResponse::resultIdIsSet() const
{
    return resultIdIsSet_;
}

void CreateTestCaseResponse::unsetresultId()
{
    resultIdIsSet_ = false;
}

ExtendInfo CreateTestCaseResponse::getExtendInfo() const
{
    return extendInfo_;
}

void CreateTestCaseResponse::setExtendInfo(const ExtendInfo& value)
{
    extendInfo_ = value;
    extendInfoIsSet_ = true;
}

bool CreateTestCaseResponse::extendInfoIsSet() const
{
    return extendInfoIsSet_;
}

void CreateTestCaseResponse::unsetextendInfo()
{
    extendInfoIsSet_ = false;
}

std::string CreateTestCaseResponse::getErrorCode() const
{
    return errorCode_;
}

void CreateTestCaseResponse::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool CreateTestCaseResponse::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void CreateTestCaseResponse::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string CreateTestCaseResponse::getErrorMsg() const
{
    return errorMsg_;
}

void CreateTestCaseResponse::setErrorMsg(const std::string& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool CreateTestCaseResponse::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void CreateTestCaseResponse::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

}
}
}
}
}


