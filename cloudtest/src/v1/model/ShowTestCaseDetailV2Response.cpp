

#include "huaweicloud/cloudtest/v1/model/ShowTestCaseDetailV2Response.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowTestCaseDetailV2Response::ShowTestCaseDetailV2Response()
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

ShowTestCaseDetailV2Response::~ShowTestCaseDetailV2Response() = default;

void ShowTestCaseDetailV2Response::validate()
{
}

web::json::value ShowTestCaseDetailV2Response::toJson() const
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
bool ShowTestCaseDetailV2Response::fromJson(const web::json::value& val)
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


std::string ShowTestCaseDetailV2Response::getTestcaseId() const
{
    return testcaseId_;
}

void ShowTestCaseDetailV2Response::setTestcaseId(const std::string& value)
{
    testcaseId_ = value;
    testcaseIdIsSet_ = true;
}

bool ShowTestCaseDetailV2Response::testcaseIdIsSet() const
{
    return testcaseIdIsSet_;
}

void ShowTestCaseDetailV2Response::unsettestcaseId()
{
    testcaseIdIsSet_ = false;
}

std::string ShowTestCaseDetailV2Response::getProjectId() const
{
    return projectId_;
}

void ShowTestCaseDetailV2Response::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowTestCaseDetailV2Response::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowTestCaseDetailV2Response::unsetprojectId()
{
    projectIdIsSet_ = false;
}

int32_t ShowTestCaseDetailV2Response::getServiceId() const
{
    return serviceId_;
}

void ShowTestCaseDetailV2Response::setServiceId(int32_t value)
{
    serviceId_ = value;
    serviceIdIsSet_ = true;
}

bool ShowTestCaseDetailV2Response::serviceIdIsSet() const
{
    return serviceIdIsSet_;
}

void ShowTestCaseDetailV2Response::unsetserviceId()
{
    serviceIdIsSet_ = false;
}

std::string ShowTestCaseDetailV2Response::getName() const
{
    return name_;
}

void ShowTestCaseDetailV2Response::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShowTestCaseDetailV2Response::nameIsSet() const
{
    return nameIsSet_;
}

void ShowTestCaseDetailV2Response::unsetname()
{
    nameIsSet_ = false;
}

std::string ShowTestCaseDetailV2Response::getTestcaseNumber() const
{
    return testcaseNumber_;
}

void ShowTestCaseDetailV2Response::setTestcaseNumber(const std::string& value)
{
    testcaseNumber_ = value;
    testcaseNumberIsSet_ = true;
}

bool ShowTestCaseDetailV2Response::testcaseNumberIsSet() const
{
    return testcaseNumberIsSet_;
}

void ShowTestCaseDetailV2Response::unsettestcaseNumber()
{
    testcaseNumberIsSet_ = false;
}

int32_t ShowTestCaseDetailV2Response::getRankId() const
{
    return rankId_;
}

void ShowTestCaseDetailV2Response::setRankId(int32_t value)
{
    rankId_ = value;
    rankIdIsSet_ = true;
}

bool ShowTestCaseDetailV2Response::rankIdIsSet() const
{
    return rankIdIsSet_;
}

void ShowTestCaseDetailV2Response::unsetrankId()
{
    rankIdIsSet_ = false;
}

std::string ShowTestCaseDetailV2Response::getStatusId() const
{
    return statusId_;
}

void ShowTestCaseDetailV2Response::setStatusId(const std::string& value)
{
    statusId_ = value;
    statusIdIsSet_ = true;
}

bool ShowTestCaseDetailV2Response::statusIdIsSet() const
{
    return statusIdIsSet_;
}

void ShowTestCaseDetailV2Response::unsetstatusId()
{
    statusIdIsSet_ = false;
}

AssignedUserInfo ShowTestCaseDetailV2Response::getAssignedUser() const
{
    return assignedUser_;
}

void ShowTestCaseDetailV2Response::setAssignedUser(const AssignedUserInfo& value)
{
    assignedUser_ = value;
    assignedUserIsSet_ = true;
}

bool ShowTestCaseDetailV2Response::assignedUserIsSet() const
{
    return assignedUserIsSet_;
}

void ShowTestCaseDetailV2Response::unsetassignedUser()
{
    assignedUserIsSet_ = false;
}

int32_t ShowTestCaseDetailV2Response::getExecuteCount() const
{
    return executeCount_;
}

void ShowTestCaseDetailV2Response::setExecuteCount(int32_t value)
{
    executeCount_ = value;
    executeCountIsSet_ = true;
}

bool ShowTestCaseDetailV2Response::executeCountIsSet() const
{
    return executeCountIsSet_;
}

void ShowTestCaseDetailV2Response::unsetexecuteCount()
{
    executeCountIsSet_ = false;
}

std::string ShowTestCaseDetailV2Response::getResultId() const
{
    return resultId_;
}

void ShowTestCaseDetailV2Response::setResultId(const std::string& value)
{
    resultId_ = value;
    resultIdIsSet_ = true;
}

bool ShowTestCaseDetailV2Response::resultIdIsSet() const
{
    return resultIdIsSet_;
}

void ShowTestCaseDetailV2Response::unsetresultId()
{
    resultIdIsSet_ = false;
}

ExtendInfo ShowTestCaseDetailV2Response::getExtendInfo() const
{
    return extendInfo_;
}

void ShowTestCaseDetailV2Response::setExtendInfo(const ExtendInfo& value)
{
    extendInfo_ = value;
    extendInfoIsSet_ = true;
}

bool ShowTestCaseDetailV2Response::extendInfoIsSet() const
{
    return extendInfoIsSet_;
}

void ShowTestCaseDetailV2Response::unsetextendInfo()
{
    extendInfoIsSet_ = false;
}

std::string ShowTestCaseDetailV2Response::getErrorCode() const
{
    return errorCode_;
}

void ShowTestCaseDetailV2Response::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool ShowTestCaseDetailV2Response::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void ShowTestCaseDetailV2Response::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string ShowTestCaseDetailV2Response::getErrorMsg() const
{
    return errorMsg_;
}

void ShowTestCaseDetailV2Response::setErrorMsg(const std::string& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool ShowTestCaseDetailV2Response::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void ShowTestCaseDetailV2Response::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

}
}
}
}
}


