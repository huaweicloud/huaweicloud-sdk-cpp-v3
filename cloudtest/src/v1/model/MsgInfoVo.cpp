

#include "huaweicloud/cloudtest/v1/model/MsgInfoVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




MsgInfoVo::MsgInfoVo()
{
    alertChannels_ = "";
    alertChannelsIsSet_ = false;
    alertGroups_ = "";
    alertGroupsIsSet_ = false;
    alertLevel_ = 0;
    alertLevelIsSet_ = false;
    alertNum_ = 0;
    alertNumIsSet_ = false;
    alertTime_ = utility::datetime();
    alertTimeIsSet_ = false;
    alertType_ = "";
    alertTypeIsSet_ = false;
    content_ = "";
    contentIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    link_ = "";
    linkIsSet_ = false;
    locationNames_ = "";
    locationNamesIsSet_ = false;
    sendAlertType_ = "";
    sendAlertTypeIsSet_ = false;
    subTaskCaseId_ = "";
    subTaskCaseIdIsSet_ = false;
    subTaskCaseStartTime_ = utility::datetime();
    subTaskCaseStartTimeIsSet_ = false;
    subTaskId_ = "";
    subTaskIdIsSet_ = false;
    subTaskStartTime_ = utility::datetime();
    subTaskStartTimeIsSet_ = false;
    taskId_ = "";
    taskIdIsSet_ = false;
    taskName_ = "";
    taskNameIsSet_ = false;
    testCaseId_ = "";
    testCaseIdIsSet_ = false;
    testCaseName_ = "";
    testCaseNameIsSet_ = false;
    testSuiteType_ = 0;
    testSuiteTypeIsSet_ = false;
}

MsgInfoVo::~MsgInfoVo() = default;

void MsgInfoVo::validate()
{
}

web::json::value MsgInfoVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(alertChannelsIsSet_) {
        val[utility::conversions::to_string_t("alert_channels")] = ModelBase::toJson(alertChannels_);
    }
    if(alertGroupsIsSet_) {
        val[utility::conversions::to_string_t("alert_groups")] = ModelBase::toJson(alertGroups_);
    }
    if(alertLevelIsSet_) {
        val[utility::conversions::to_string_t("alert_level")] = ModelBase::toJson(alertLevel_);
    }
    if(alertNumIsSet_) {
        val[utility::conversions::to_string_t("alert_num")] = ModelBase::toJson(alertNum_);
    }
    if(alertTimeIsSet_) {
        val[utility::conversions::to_string_t("alert_time")] = ModelBase::toJson(alertTime_);
    }
    if(alertTypeIsSet_) {
        val[utility::conversions::to_string_t("alert_type")] = ModelBase::toJson(alertType_);
    }
    if(contentIsSet_) {
        val[utility::conversions::to_string_t("content")] = ModelBase::toJson(content_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(linkIsSet_) {
        val[utility::conversions::to_string_t("link")] = ModelBase::toJson(link_);
    }
    if(locationNamesIsSet_) {
        val[utility::conversions::to_string_t("location_names")] = ModelBase::toJson(locationNames_);
    }
    if(sendAlertTypeIsSet_) {
        val[utility::conversions::to_string_t("send_alert_type")] = ModelBase::toJson(sendAlertType_);
    }
    if(subTaskCaseIdIsSet_) {
        val[utility::conversions::to_string_t("sub_task_case_id")] = ModelBase::toJson(subTaskCaseId_);
    }
    if(subTaskCaseStartTimeIsSet_) {
        val[utility::conversions::to_string_t("sub_task_case_start_time")] = ModelBase::toJson(subTaskCaseStartTime_);
    }
    if(subTaskIdIsSet_) {
        val[utility::conversions::to_string_t("sub_task_id")] = ModelBase::toJson(subTaskId_);
    }
    if(subTaskStartTimeIsSet_) {
        val[utility::conversions::to_string_t("sub_task_start_time")] = ModelBase::toJson(subTaskStartTime_);
    }
    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }
    if(taskNameIsSet_) {
        val[utility::conversions::to_string_t("task_name")] = ModelBase::toJson(taskName_);
    }
    if(testCaseIdIsSet_) {
        val[utility::conversions::to_string_t("test_case_id")] = ModelBase::toJson(testCaseId_);
    }
    if(testCaseNameIsSet_) {
        val[utility::conversions::to_string_t("test_case_name")] = ModelBase::toJson(testCaseName_);
    }
    if(testSuiteTypeIsSet_) {
        val[utility::conversions::to_string_t("test_suite_type")] = ModelBase::toJson(testSuiteType_);
    }

    return val;
}
bool MsgInfoVo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("alert_channels"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alert_channels"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlertChannels(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("alert_groups"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alert_groups"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlertGroups(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("alert_level"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alert_level"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlertLevel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("alert_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alert_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlertNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("alert_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alert_time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlertTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("alert_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alert_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlertType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("content"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("content"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContent(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("link"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("link"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLink(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("location_names"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("location_names"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLocationNames(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("send_alert_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("send_alert_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSendAlertType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sub_task_case_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sub_task_case_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubTaskCaseId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sub_task_case_start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sub_task_case_start_time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubTaskCaseStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sub_task_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sub_task_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubTaskId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sub_task_start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sub_task_start_time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubTaskStartTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("test_case_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("test_case_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestCaseId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("test_suite_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("test_suite_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestSuiteType(refVal);
        }
    }
    return ok;
}


std::string MsgInfoVo::getAlertChannels() const
{
    return alertChannels_;
}

void MsgInfoVo::setAlertChannels(const std::string& value)
{
    alertChannels_ = value;
    alertChannelsIsSet_ = true;
}

bool MsgInfoVo::alertChannelsIsSet() const
{
    return alertChannelsIsSet_;
}

void MsgInfoVo::unsetalertChannels()
{
    alertChannelsIsSet_ = false;
}

std::string MsgInfoVo::getAlertGroups() const
{
    return alertGroups_;
}

void MsgInfoVo::setAlertGroups(const std::string& value)
{
    alertGroups_ = value;
    alertGroupsIsSet_ = true;
}

bool MsgInfoVo::alertGroupsIsSet() const
{
    return alertGroupsIsSet_;
}

void MsgInfoVo::unsetalertGroups()
{
    alertGroupsIsSet_ = false;
}

int32_t MsgInfoVo::getAlertLevel() const
{
    return alertLevel_;
}

void MsgInfoVo::setAlertLevel(int32_t value)
{
    alertLevel_ = value;
    alertLevelIsSet_ = true;
}

bool MsgInfoVo::alertLevelIsSet() const
{
    return alertLevelIsSet_;
}

void MsgInfoVo::unsetalertLevel()
{
    alertLevelIsSet_ = false;
}

int32_t MsgInfoVo::getAlertNum() const
{
    return alertNum_;
}

void MsgInfoVo::setAlertNum(int32_t value)
{
    alertNum_ = value;
    alertNumIsSet_ = true;
}

bool MsgInfoVo::alertNumIsSet() const
{
    return alertNumIsSet_;
}

void MsgInfoVo::unsetalertNum()
{
    alertNumIsSet_ = false;
}

utility::datetime MsgInfoVo::getAlertTime() const
{
    return alertTime_;
}

void MsgInfoVo::setAlertTime(const utility::datetime& value)
{
    alertTime_ = value;
    alertTimeIsSet_ = true;
}

bool MsgInfoVo::alertTimeIsSet() const
{
    return alertTimeIsSet_;
}

void MsgInfoVo::unsetalertTime()
{
    alertTimeIsSet_ = false;
}

std::string MsgInfoVo::getAlertType() const
{
    return alertType_;
}

void MsgInfoVo::setAlertType(const std::string& value)
{
    alertType_ = value;
    alertTypeIsSet_ = true;
}

bool MsgInfoVo::alertTypeIsSet() const
{
    return alertTypeIsSet_;
}

void MsgInfoVo::unsetalertType()
{
    alertTypeIsSet_ = false;
}

std::string MsgInfoVo::getContent() const
{
    return content_;
}

void MsgInfoVo::setContent(const std::string& value)
{
    content_ = value;
    contentIsSet_ = true;
}

bool MsgInfoVo::contentIsSet() const
{
    return contentIsSet_;
}

void MsgInfoVo::unsetcontent()
{
    contentIsSet_ = false;
}

std::string MsgInfoVo::getId() const
{
    return id_;
}

void MsgInfoVo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool MsgInfoVo::idIsSet() const
{
    return idIsSet_;
}

void MsgInfoVo::unsetid()
{
    idIsSet_ = false;
}

std::string MsgInfoVo::getLink() const
{
    return link_;
}

void MsgInfoVo::setLink(const std::string& value)
{
    link_ = value;
    linkIsSet_ = true;
}

bool MsgInfoVo::linkIsSet() const
{
    return linkIsSet_;
}

void MsgInfoVo::unsetlink()
{
    linkIsSet_ = false;
}

std::string MsgInfoVo::getLocationNames() const
{
    return locationNames_;
}

void MsgInfoVo::setLocationNames(const std::string& value)
{
    locationNames_ = value;
    locationNamesIsSet_ = true;
}

bool MsgInfoVo::locationNamesIsSet() const
{
    return locationNamesIsSet_;
}

void MsgInfoVo::unsetlocationNames()
{
    locationNamesIsSet_ = false;
}

std::string MsgInfoVo::getSendAlertType() const
{
    return sendAlertType_;
}

void MsgInfoVo::setSendAlertType(const std::string& value)
{
    sendAlertType_ = value;
    sendAlertTypeIsSet_ = true;
}

bool MsgInfoVo::sendAlertTypeIsSet() const
{
    return sendAlertTypeIsSet_;
}

void MsgInfoVo::unsetsendAlertType()
{
    sendAlertTypeIsSet_ = false;
}

std::string MsgInfoVo::getSubTaskCaseId() const
{
    return subTaskCaseId_;
}

void MsgInfoVo::setSubTaskCaseId(const std::string& value)
{
    subTaskCaseId_ = value;
    subTaskCaseIdIsSet_ = true;
}

bool MsgInfoVo::subTaskCaseIdIsSet() const
{
    return subTaskCaseIdIsSet_;
}

void MsgInfoVo::unsetsubTaskCaseId()
{
    subTaskCaseIdIsSet_ = false;
}

utility::datetime MsgInfoVo::getSubTaskCaseStartTime() const
{
    return subTaskCaseStartTime_;
}

void MsgInfoVo::setSubTaskCaseStartTime(const utility::datetime& value)
{
    subTaskCaseStartTime_ = value;
    subTaskCaseStartTimeIsSet_ = true;
}

bool MsgInfoVo::subTaskCaseStartTimeIsSet() const
{
    return subTaskCaseStartTimeIsSet_;
}

void MsgInfoVo::unsetsubTaskCaseStartTime()
{
    subTaskCaseStartTimeIsSet_ = false;
}

std::string MsgInfoVo::getSubTaskId() const
{
    return subTaskId_;
}

void MsgInfoVo::setSubTaskId(const std::string& value)
{
    subTaskId_ = value;
    subTaskIdIsSet_ = true;
}

bool MsgInfoVo::subTaskIdIsSet() const
{
    return subTaskIdIsSet_;
}

void MsgInfoVo::unsetsubTaskId()
{
    subTaskIdIsSet_ = false;
}

utility::datetime MsgInfoVo::getSubTaskStartTime() const
{
    return subTaskStartTime_;
}

void MsgInfoVo::setSubTaskStartTime(const utility::datetime& value)
{
    subTaskStartTime_ = value;
    subTaskStartTimeIsSet_ = true;
}

bool MsgInfoVo::subTaskStartTimeIsSet() const
{
    return subTaskStartTimeIsSet_;
}

void MsgInfoVo::unsetsubTaskStartTime()
{
    subTaskStartTimeIsSet_ = false;
}

std::string MsgInfoVo::getTaskId() const
{
    return taskId_;
}

void MsgInfoVo::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool MsgInfoVo::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void MsgInfoVo::unsettaskId()
{
    taskIdIsSet_ = false;
}

std::string MsgInfoVo::getTaskName() const
{
    return taskName_;
}

void MsgInfoVo::setTaskName(const std::string& value)
{
    taskName_ = value;
    taskNameIsSet_ = true;
}

bool MsgInfoVo::taskNameIsSet() const
{
    return taskNameIsSet_;
}

void MsgInfoVo::unsettaskName()
{
    taskNameIsSet_ = false;
}

std::string MsgInfoVo::getTestCaseId() const
{
    return testCaseId_;
}

void MsgInfoVo::setTestCaseId(const std::string& value)
{
    testCaseId_ = value;
    testCaseIdIsSet_ = true;
}

bool MsgInfoVo::testCaseIdIsSet() const
{
    return testCaseIdIsSet_;
}

void MsgInfoVo::unsettestCaseId()
{
    testCaseIdIsSet_ = false;
}

std::string MsgInfoVo::getTestCaseName() const
{
    return testCaseName_;
}

void MsgInfoVo::setTestCaseName(const std::string& value)
{
    testCaseName_ = value;
    testCaseNameIsSet_ = true;
}

bool MsgInfoVo::testCaseNameIsSet() const
{
    return testCaseNameIsSet_;
}

void MsgInfoVo::unsettestCaseName()
{
    testCaseNameIsSet_ = false;
}

int32_t MsgInfoVo::getTestSuiteType() const
{
    return testSuiteType_;
}

void MsgInfoVo::setTestSuiteType(int32_t value)
{
    testSuiteType_ = value;
    testSuiteTypeIsSet_ = true;
}

bool MsgInfoVo::testSuiteTypeIsSet() const
{
    return testSuiteTypeIsSet_;
}

void MsgInfoVo::unsettestSuiteType()
{
    testSuiteTypeIsSet_ = false;
}

}
}
}
}
}


