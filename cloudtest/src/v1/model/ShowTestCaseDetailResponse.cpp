

#include "huaweicloud/cloudtest/v1/model/ShowTestCaseDetailResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowTestCaseDetailResponse::ShowTestCaseDetailResponse()
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

ShowTestCaseDetailResponse::~ShowTestCaseDetailResponse() = default;

void ShowTestCaseDetailResponse::validate()
{
}

web::json::value ShowTestCaseDetailResponse::toJson() const
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
bool ShowTestCaseDetailResponse::fromJson(const web::json::value& val)
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


std::string ShowTestCaseDetailResponse::getTestcaseId() const
{
    return testcaseId_;
}

void ShowTestCaseDetailResponse::setTestcaseId(const std::string& value)
{
    testcaseId_ = value;
    testcaseIdIsSet_ = true;
}

bool ShowTestCaseDetailResponse::testcaseIdIsSet() const
{
    return testcaseIdIsSet_;
}

void ShowTestCaseDetailResponse::unsettestcaseId()
{
    testcaseIdIsSet_ = false;
}

std::string ShowTestCaseDetailResponse::getProjectId() const
{
    return projectId_;
}

void ShowTestCaseDetailResponse::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowTestCaseDetailResponse::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowTestCaseDetailResponse::unsetprojectId()
{
    projectIdIsSet_ = false;
}

int32_t ShowTestCaseDetailResponse::getServiceId() const
{
    return serviceId_;
}

void ShowTestCaseDetailResponse::setServiceId(int32_t value)
{
    serviceId_ = value;
    serviceIdIsSet_ = true;
}

bool ShowTestCaseDetailResponse::serviceIdIsSet() const
{
    return serviceIdIsSet_;
}

void ShowTestCaseDetailResponse::unsetserviceId()
{
    serviceIdIsSet_ = false;
}

std::string ShowTestCaseDetailResponse::getName() const
{
    return name_;
}

void ShowTestCaseDetailResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShowTestCaseDetailResponse::nameIsSet() const
{
    return nameIsSet_;
}

void ShowTestCaseDetailResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string ShowTestCaseDetailResponse::getTestcaseNumber() const
{
    return testcaseNumber_;
}

void ShowTestCaseDetailResponse::setTestcaseNumber(const std::string& value)
{
    testcaseNumber_ = value;
    testcaseNumberIsSet_ = true;
}

bool ShowTestCaseDetailResponse::testcaseNumberIsSet() const
{
    return testcaseNumberIsSet_;
}

void ShowTestCaseDetailResponse::unsettestcaseNumber()
{
    testcaseNumberIsSet_ = false;
}

int32_t ShowTestCaseDetailResponse::getRankId() const
{
    return rankId_;
}

void ShowTestCaseDetailResponse::setRankId(int32_t value)
{
    rankId_ = value;
    rankIdIsSet_ = true;
}

bool ShowTestCaseDetailResponse::rankIdIsSet() const
{
    return rankIdIsSet_;
}

void ShowTestCaseDetailResponse::unsetrankId()
{
    rankIdIsSet_ = false;
}

std::string ShowTestCaseDetailResponse::getStatusId() const
{
    return statusId_;
}

void ShowTestCaseDetailResponse::setStatusId(const std::string& value)
{
    statusId_ = value;
    statusIdIsSet_ = true;
}

bool ShowTestCaseDetailResponse::statusIdIsSet() const
{
    return statusIdIsSet_;
}

void ShowTestCaseDetailResponse::unsetstatusId()
{
    statusIdIsSet_ = false;
}

AssignedUserInfo ShowTestCaseDetailResponse::getAssignedUser() const
{
    return assignedUser_;
}

void ShowTestCaseDetailResponse::setAssignedUser(const AssignedUserInfo& value)
{
    assignedUser_ = value;
    assignedUserIsSet_ = true;
}

bool ShowTestCaseDetailResponse::assignedUserIsSet() const
{
    return assignedUserIsSet_;
}

void ShowTestCaseDetailResponse::unsetassignedUser()
{
    assignedUserIsSet_ = false;
}

int32_t ShowTestCaseDetailResponse::getExecuteCount() const
{
    return executeCount_;
}

void ShowTestCaseDetailResponse::setExecuteCount(int32_t value)
{
    executeCount_ = value;
    executeCountIsSet_ = true;
}

bool ShowTestCaseDetailResponse::executeCountIsSet() const
{
    return executeCountIsSet_;
}

void ShowTestCaseDetailResponse::unsetexecuteCount()
{
    executeCountIsSet_ = false;
}

std::string ShowTestCaseDetailResponse::getResultId() const
{
    return resultId_;
}

void ShowTestCaseDetailResponse::setResultId(const std::string& value)
{
    resultId_ = value;
    resultIdIsSet_ = true;
}

bool ShowTestCaseDetailResponse::resultIdIsSet() const
{
    return resultIdIsSet_;
}

void ShowTestCaseDetailResponse::unsetresultId()
{
    resultIdIsSet_ = false;
}

ExtendInfo ShowTestCaseDetailResponse::getExtendInfo() const
{
    return extendInfo_;
}

void ShowTestCaseDetailResponse::setExtendInfo(const ExtendInfo& value)
{
    extendInfo_ = value;
    extendInfoIsSet_ = true;
}

bool ShowTestCaseDetailResponse::extendInfoIsSet() const
{
    return extendInfoIsSet_;
}

void ShowTestCaseDetailResponse::unsetextendInfo()
{
    extendInfoIsSet_ = false;
}

std::string ShowTestCaseDetailResponse::getErrorCode() const
{
    return errorCode_;
}

void ShowTestCaseDetailResponse::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool ShowTestCaseDetailResponse::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void ShowTestCaseDetailResponse::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string ShowTestCaseDetailResponse::getErrorMsg() const
{
    return errorMsg_;
}

void ShowTestCaseDetailResponse::setErrorMsg(const std::string& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool ShowTestCaseDetailResponse::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void ShowTestCaseDetailResponse::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

}
}
}
}
}


