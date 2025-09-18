

#include "huaweicloud/projectman/v4/model/AddIssueWorkHoursResponseBody_added_work_hours.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




AddIssueWorkHoursResponseBody_added_work_hours::AddIssueWorkHoursResponseBody_added_work_hours()
{
    workHoursId_ = "";
    workHoursIdIsSet_ = false;
    issueId_ = 0;
    issueIdIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
    userNickName_ = "";
    userNickNameIsSet_ = false;
    workDate_ = "";
    workDateIsSet_ = false;
    workHours_ = "";
    workHoursIsSet_ = false;
    workHoursTypeName_ = "";
    workHoursTypeNameIsSet_ = false;
}

AddIssueWorkHoursResponseBody_added_work_hours::~AddIssueWorkHoursResponseBody_added_work_hours() = default;

void AddIssueWorkHoursResponseBody_added_work_hours::validate()
{
}

web::json::value AddIssueWorkHoursResponseBody_added_work_hours::toJson() const
{
    web::json::value val = web::json::value::object();

    if(workHoursIdIsSet_) {
        val[utility::conversions::to_string_t("work_hours_id")] = ModelBase::toJson(workHoursId_);
    }
    if(issueIdIsSet_) {
        val[utility::conversions::to_string_t("issue_id")] = ModelBase::toJson(issueId_);
    }
    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }
    if(userNickNameIsSet_) {
        val[utility::conversions::to_string_t("user_nick_name")] = ModelBase::toJson(userNickName_);
    }
    if(workDateIsSet_) {
        val[utility::conversions::to_string_t("work_date")] = ModelBase::toJson(workDate_);
    }
    if(workHoursIsSet_) {
        val[utility::conversions::to_string_t("work_hours")] = ModelBase::toJson(workHours_);
    }
    if(workHoursTypeNameIsSet_) {
        val[utility::conversions::to_string_t("work_hours_type_name")] = ModelBase::toJson(workHoursTypeName_);
    }

    return val;
}
bool AddIssueWorkHoursResponseBody_added_work_hours::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("work_hours_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("work_hours_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkHoursId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("user_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_nick_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_nick_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserNickName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("work_hours"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("work_hours"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkHours(refVal);
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
    return ok;
}


std::string AddIssueWorkHoursResponseBody_added_work_hours::getWorkHoursId() const
{
    return workHoursId_;
}

void AddIssueWorkHoursResponseBody_added_work_hours::setWorkHoursId(const std::string& value)
{
    workHoursId_ = value;
    workHoursIdIsSet_ = true;
}

bool AddIssueWorkHoursResponseBody_added_work_hours::workHoursIdIsSet() const
{
    return workHoursIdIsSet_;
}

void AddIssueWorkHoursResponseBody_added_work_hours::unsetworkHoursId()
{
    workHoursIdIsSet_ = false;
}

int32_t AddIssueWorkHoursResponseBody_added_work_hours::getIssueId() const
{
    return issueId_;
}

void AddIssueWorkHoursResponseBody_added_work_hours::setIssueId(int32_t value)
{
    issueId_ = value;
    issueIdIsSet_ = true;
}

bool AddIssueWorkHoursResponseBody_added_work_hours::issueIdIsSet() const
{
    return issueIdIsSet_;
}

void AddIssueWorkHoursResponseBody_added_work_hours::unsetissueId()
{
    issueIdIsSet_ = false;
}

std::string AddIssueWorkHoursResponseBody_added_work_hours::getUserName() const
{
    return userName_;
}

void AddIssueWorkHoursResponseBody_added_work_hours::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool AddIssueWorkHoursResponseBody_added_work_hours::userNameIsSet() const
{
    return userNameIsSet_;
}

void AddIssueWorkHoursResponseBody_added_work_hours::unsetuserName()
{
    userNameIsSet_ = false;
}

std::string AddIssueWorkHoursResponseBody_added_work_hours::getUserNickName() const
{
    return userNickName_;
}

void AddIssueWorkHoursResponseBody_added_work_hours::setUserNickName(const std::string& value)
{
    userNickName_ = value;
    userNickNameIsSet_ = true;
}

bool AddIssueWorkHoursResponseBody_added_work_hours::userNickNameIsSet() const
{
    return userNickNameIsSet_;
}

void AddIssueWorkHoursResponseBody_added_work_hours::unsetuserNickName()
{
    userNickNameIsSet_ = false;
}

std::string AddIssueWorkHoursResponseBody_added_work_hours::getWorkDate() const
{
    return workDate_;
}

void AddIssueWorkHoursResponseBody_added_work_hours::setWorkDate(const std::string& value)
{
    workDate_ = value;
    workDateIsSet_ = true;
}

bool AddIssueWorkHoursResponseBody_added_work_hours::workDateIsSet() const
{
    return workDateIsSet_;
}

void AddIssueWorkHoursResponseBody_added_work_hours::unsetworkDate()
{
    workDateIsSet_ = false;
}

std::string AddIssueWorkHoursResponseBody_added_work_hours::getWorkHours() const
{
    return workHours_;
}

void AddIssueWorkHoursResponseBody_added_work_hours::setWorkHours(const std::string& value)
{
    workHours_ = value;
    workHoursIsSet_ = true;
}

bool AddIssueWorkHoursResponseBody_added_work_hours::workHoursIsSet() const
{
    return workHoursIsSet_;
}

void AddIssueWorkHoursResponseBody_added_work_hours::unsetworkHours()
{
    workHoursIsSet_ = false;
}

std::string AddIssueWorkHoursResponseBody_added_work_hours::getWorkHoursTypeName() const
{
    return workHoursTypeName_;
}

void AddIssueWorkHoursResponseBody_added_work_hours::setWorkHoursTypeName(const std::string& value)
{
    workHoursTypeName_ = value;
    workHoursTypeNameIsSet_ = true;
}

bool AddIssueWorkHoursResponseBody_added_work_hours::workHoursTypeNameIsSet() const
{
    return workHoursTypeNameIsSet_;
}

void AddIssueWorkHoursResponseBody_added_work_hours::unsetworkHoursTypeName()
{
    workHoursTypeNameIsSet_ = false;
}

}
}
}
}
}


