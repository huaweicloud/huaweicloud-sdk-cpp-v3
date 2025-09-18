

#include "huaweicloud/projectman/v4/model/ShowProjectWorkHoursResponseBody_work_hours.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ShowProjectWorkHoursResponseBody_work_hours::ShowProjectWorkHoursResponseBody_work_hours()
{
    projectName_ = "";
    projectNameIsSet_ = false;
    nickName_ = "";
    nickNameIsSet_ = false;
    userId_ = "";
    userIdIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
    workDate_ = "";
    workDateIsSet_ = false;
    workHoursNum_ = "";
    workHoursNumIsSet_ = false;
    summary_ = "";
    summaryIsSet_ = false;
    workHoursTypeName_ = "";
    workHoursTypeNameIsSet_ = false;
    issueId_ = 0;
    issueIdIsSet_ = false;
    issueType_ = "";
    issueTypeIsSet_ = false;
    subject_ = "";
    subjectIsSet_ = false;
    createdTime_ = "";
    createdTimeIsSet_ = false;
    closedTime_ = "";
    closedTimeIsSet_ = false;
    workHoursCreatedTime_ = "";
    workHoursCreatedTimeIsSet_ = false;
    workHoursUpdatedTime_ = "";
    workHoursUpdatedTimeIsSet_ = false;
}

ShowProjectWorkHoursResponseBody_work_hours::~ShowProjectWorkHoursResponseBody_work_hours() = default;

void ShowProjectWorkHoursResponseBody_work_hours::validate()
{
}

web::json::value ShowProjectWorkHoursResponseBody_work_hours::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectNameIsSet_) {
        val[utility::conversions::to_string_t("project_name")] = ModelBase::toJson(projectName_);
    }
    if(nickNameIsSet_) {
        val[utility::conversions::to_string_t("nick_name")] = ModelBase::toJson(nickName_);
    }
    if(userIdIsSet_) {
        val[utility::conversions::to_string_t("user_id")] = ModelBase::toJson(userId_);
    }
    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }
    if(workDateIsSet_) {
        val[utility::conversions::to_string_t("work_date")] = ModelBase::toJson(workDate_);
    }
    if(workHoursNumIsSet_) {
        val[utility::conversions::to_string_t("work_hours_num")] = ModelBase::toJson(workHoursNum_);
    }
    if(summaryIsSet_) {
        val[utility::conversions::to_string_t("summary")] = ModelBase::toJson(summary_);
    }
    if(workHoursTypeNameIsSet_) {
        val[utility::conversions::to_string_t("work_hours_type_name")] = ModelBase::toJson(workHoursTypeName_);
    }
    if(issueIdIsSet_) {
        val[utility::conversions::to_string_t("issue_id")] = ModelBase::toJson(issueId_);
    }
    if(issueTypeIsSet_) {
        val[utility::conversions::to_string_t("issue_type")] = ModelBase::toJson(issueType_);
    }
    if(subjectIsSet_) {
        val[utility::conversions::to_string_t("subject")] = ModelBase::toJson(subject_);
    }
    if(createdTimeIsSet_) {
        val[utility::conversions::to_string_t("created_time")] = ModelBase::toJson(createdTime_);
    }
    if(closedTimeIsSet_) {
        val[utility::conversions::to_string_t("closed_time")] = ModelBase::toJson(closedTime_);
    }
    if(workHoursCreatedTimeIsSet_) {
        val[utility::conversions::to_string_t("work_hours_created_time")] = ModelBase::toJson(workHoursCreatedTime_);
    }
    if(workHoursUpdatedTimeIsSet_) {
        val[utility::conversions::to_string_t("work_hours_updated_time")] = ModelBase::toJson(workHoursUpdatedTime_);
    }

    return val;
}
bool ShowProjectWorkHoursResponseBody_work_hours::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("project_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("nick_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nick_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNickName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("work_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("work_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("work_hours_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("work_hours_num"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkHoursNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("summary"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("summary"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSummary(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("work_hours_type_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("work_hours_type_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkHoursTypeName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("issue_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issue_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssueId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("issue_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issue_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssueType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subject"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subject"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubject(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("closed_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("closed_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClosedTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("work_hours_created_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("work_hours_created_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkHoursCreatedTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("work_hours_updated_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("work_hours_updated_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkHoursUpdatedTime(refVal);
        }
    }
    return ok;
}


std::string ShowProjectWorkHoursResponseBody_work_hours::getProjectName() const
{
    return projectName_;
}

void ShowProjectWorkHoursResponseBody_work_hours::setProjectName(const std::string& value)
{
    projectName_ = value;
    projectNameIsSet_ = true;
}

bool ShowProjectWorkHoursResponseBody_work_hours::projectNameIsSet() const
{
    return projectNameIsSet_;
}

void ShowProjectWorkHoursResponseBody_work_hours::unsetprojectName()
{
    projectNameIsSet_ = false;
}

std::string ShowProjectWorkHoursResponseBody_work_hours::getNickName() const
{
    return nickName_;
}

void ShowProjectWorkHoursResponseBody_work_hours::setNickName(const std::string& value)
{
    nickName_ = value;
    nickNameIsSet_ = true;
}

bool ShowProjectWorkHoursResponseBody_work_hours::nickNameIsSet() const
{
    return nickNameIsSet_;
}

void ShowProjectWorkHoursResponseBody_work_hours::unsetnickName()
{
    nickNameIsSet_ = false;
}

std::string ShowProjectWorkHoursResponseBody_work_hours::getUserId() const
{
    return userId_;
}

void ShowProjectWorkHoursResponseBody_work_hours::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool ShowProjectWorkHoursResponseBody_work_hours::userIdIsSet() const
{
    return userIdIsSet_;
}

void ShowProjectWorkHoursResponseBody_work_hours::unsetuserId()
{
    userIdIsSet_ = false;
}

std::string ShowProjectWorkHoursResponseBody_work_hours::getUserName() const
{
    return userName_;
}

void ShowProjectWorkHoursResponseBody_work_hours::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool ShowProjectWorkHoursResponseBody_work_hours::userNameIsSet() const
{
    return userNameIsSet_;
}

void ShowProjectWorkHoursResponseBody_work_hours::unsetuserName()
{
    userNameIsSet_ = false;
}

std::string ShowProjectWorkHoursResponseBody_work_hours::getWorkDate() const
{
    return workDate_;
}

void ShowProjectWorkHoursResponseBody_work_hours::setWorkDate(const std::string& value)
{
    workDate_ = value;
    workDateIsSet_ = true;
}

bool ShowProjectWorkHoursResponseBody_work_hours::workDateIsSet() const
{
    return workDateIsSet_;
}

void ShowProjectWorkHoursResponseBody_work_hours::unsetworkDate()
{
    workDateIsSet_ = false;
}

std::string ShowProjectWorkHoursResponseBody_work_hours::getWorkHoursNum() const
{
    return workHoursNum_;
}

void ShowProjectWorkHoursResponseBody_work_hours::setWorkHoursNum(const std::string& value)
{
    workHoursNum_ = value;
    workHoursNumIsSet_ = true;
}

bool ShowProjectWorkHoursResponseBody_work_hours::workHoursNumIsSet() const
{
    return workHoursNumIsSet_;
}

void ShowProjectWorkHoursResponseBody_work_hours::unsetworkHoursNum()
{
    workHoursNumIsSet_ = false;
}

std::string ShowProjectWorkHoursResponseBody_work_hours::getSummary() const
{
    return summary_;
}

void ShowProjectWorkHoursResponseBody_work_hours::setSummary(const std::string& value)
{
    summary_ = value;
    summaryIsSet_ = true;
}

bool ShowProjectWorkHoursResponseBody_work_hours::summaryIsSet() const
{
    return summaryIsSet_;
}

void ShowProjectWorkHoursResponseBody_work_hours::unsetsummary()
{
    summaryIsSet_ = false;
}

std::string ShowProjectWorkHoursResponseBody_work_hours::getWorkHoursTypeName() const
{
    return workHoursTypeName_;
}

void ShowProjectWorkHoursResponseBody_work_hours::setWorkHoursTypeName(const std::string& value)
{
    workHoursTypeName_ = value;
    workHoursTypeNameIsSet_ = true;
}

bool ShowProjectWorkHoursResponseBody_work_hours::workHoursTypeNameIsSet() const
{
    return workHoursTypeNameIsSet_;
}

void ShowProjectWorkHoursResponseBody_work_hours::unsetworkHoursTypeName()
{
    workHoursTypeNameIsSet_ = false;
}

int32_t ShowProjectWorkHoursResponseBody_work_hours::getIssueId() const
{
    return issueId_;
}

void ShowProjectWorkHoursResponseBody_work_hours::setIssueId(int32_t value)
{
    issueId_ = value;
    issueIdIsSet_ = true;
}

bool ShowProjectWorkHoursResponseBody_work_hours::issueIdIsSet() const
{
    return issueIdIsSet_;
}

void ShowProjectWorkHoursResponseBody_work_hours::unsetissueId()
{
    issueIdIsSet_ = false;
}

std::string ShowProjectWorkHoursResponseBody_work_hours::getIssueType() const
{
    return issueType_;
}

void ShowProjectWorkHoursResponseBody_work_hours::setIssueType(const std::string& value)
{
    issueType_ = value;
    issueTypeIsSet_ = true;
}

bool ShowProjectWorkHoursResponseBody_work_hours::issueTypeIsSet() const
{
    return issueTypeIsSet_;
}

void ShowProjectWorkHoursResponseBody_work_hours::unsetissueType()
{
    issueTypeIsSet_ = false;
}

std::string ShowProjectWorkHoursResponseBody_work_hours::getSubject() const
{
    return subject_;
}

void ShowProjectWorkHoursResponseBody_work_hours::setSubject(const std::string& value)
{
    subject_ = value;
    subjectIsSet_ = true;
}

bool ShowProjectWorkHoursResponseBody_work_hours::subjectIsSet() const
{
    return subjectIsSet_;
}

void ShowProjectWorkHoursResponseBody_work_hours::unsetsubject()
{
    subjectIsSet_ = false;
}

std::string ShowProjectWorkHoursResponseBody_work_hours::getCreatedTime() const
{
    return createdTime_;
}

void ShowProjectWorkHoursResponseBody_work_hours::setCreatedTime(const std::string& value)
{
    createdTime_ = value;
    createdTimeIsSet_ = true;
}

bool ShowProjectWorkHoursResponseBody_work_hours::createdTimeIsSet() const
{
    return createdTimeIsSet_;
}

void ShowProjectWorkHoursResponseBody_work_hours::unsetcreatedTime()
{
    createdTimeIsSet_ = false;
}

std::string ShowProjectWorkHoursResponseBody_work_hours::getClosedTime() const
{
    return closedTime_;
}

void ShowProjectWorkHoursResponseBody_work_hours::setClosedTime(const std::string& value)
{
    closedTime_ = value;
    closedTimeIsSet_ = true;
}

bool ShowProjectWorkHoursResponseBody_work_hours::closedTimeIsSet() const
{
    return closedTimeIsSet_;
}

void ShowProjectWorkHoursResponseBody_work_hours::unsetclosedTime()
{
    closedTimeIsSet_ = false;
}

std::string ShowProjectWorkHoursResponseBody_work_hours::getWorkHoursCreatedTime() const
{
    return workHoursCreatedTime_;
}

void ShowProjectWorkHoursResponseBody_work_hours::setWorkHoursCreatedTime(const std::string& value)
{
    workHoursCreatedTime_ = value;
    workHoursCreatedTimeIsSet_ = true;
}

bool ShowProjectWorkHoursResponseBody_work_hours::workHoursCreatedTimeIsSet() const
{
    return workHoursCreatedTimeIsSet_;
}

void ShowProjectWorkHoursResponseBody_work_hours::unsetworkHoursCreatedTime()
{
    workHoursCreatedTimeIsSet_ = false;
}

std::string ShowProjectWorkHoursResponseBody_work_hours::getWorkHoursUpdatedTime() const
{
    return workHoursUpdatedTime_;
}

void ShowProjectWorkHoursResponseBody_work_hours::setWorkHoursUpdatedTime(const std::string& value)
{
    workHoursUpdatedTime_ = value;
    workHoursUpdatedTimeIsSet_ = true;
}

bool ShowProjectWorkHoursResponseBody_work_hours::workHoursUpdatedTimeIsSet() const
{
    return workHoursUpdatedTimeIsSet_;
}

void ShowProjectWorkHoursResponseBody_work_hours::unsetworkHoursUpdatedTime()
{
    workHoursUpdatedTimeIsSet_ = false;
}

}
}
}
}
}


