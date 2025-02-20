

#include "huaweicloud/drs/v5/model/TimelineInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




TimelineInfo::TimelineInfo()
{
    name_ = "";
    nameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    operationTime_ = "";
    operationTimeIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
}

TimelineInfo::~TimelineInfo() = default;

void TimelineInfo::validate()
{
}

web::json::value TimelineInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(operationTimeIsSet_) {
        val[utility::conversions::to_string_t("operation_time")] = ModelBase::toJson(operationTime_);
    }
    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }

    return val;
}
bool TimelineInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("operation_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operation_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperationTime(refVal);
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
    return ok;
}


std::string TimelineInfo::getName() const
{
    return name_;
}

void TimelineInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool TimelineInfo::nameIsSet() const
{
    return nameIsSet_;
}

void TimelineInfo::unsetname()
{
    nameIsSet_ = false;
}

std::string TimelineInfo::getStatus() const
{
    return status_;
}

void TimelineInfo::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool TimelineInfo::statusIsSet() const
{
    return statusIsSet_;
}

void TimelineInfo::unsetstatus()
{
    statusIsSet_ = false;
}

std::string TimelineInfo::getOperationTime() const
{
    return operationTime_;
}

void TimelineInfo::setOperationTime(const std::string& value)
{
    operationTime_ = value;
    operationTimeIsSet_ = true;
}

bool TimelineInfo::operationTimeIsSet() const
{
    return operationTimeIsSet_;
}

void TimelineInfo::unsetoperationTime()
{
    operationTimeIsSet_ = false;
}

std::string TimelineInfo::getUserName() const
{
    return userName_;
}

void TimelineInfo::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool TimelineInfo::userNameIsSet() const
{
    return userNameIsSet_;
}

void TimelineInfo::unsetuserName()
{
    userNameIsSet_ = false;
}

}
}
}
}
}


