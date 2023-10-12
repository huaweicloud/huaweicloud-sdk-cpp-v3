

#include "huaweicloud/drs/v5/model/TaskLogInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




TaskLogInfo::TaskLogInfo()
{
    level_ = "";
    levelIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
}

TaskLogInfo::~TaskLogInfo() = default;

void TaskLogInfo::validate()
{
}

web::json::value TaskLogInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(levelIsSet_) {
        val[utility::conversions::to_string_t("level")] = ModelBase::toJson(level_);
    }
    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }

    return val;
}
bool TaskLogInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("level"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("level"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLevel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMessage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    return ok;
}


std::string TaskLogInfo::getLevel() const
{
    return level_;
}

void TaskLogInfo::setLevel(const std::string& value)
{
    level_ = value;
    levelIsSet_ = true;
}

bool TaskLogInfo::levelIsSet() const
{
    return levelIsSet_;
}

void TaskLogInfo::unsetlevel()
{
    levelIsSet_ = false;
}

std::string TaskLogInfo::getMessage() const
{
    return message_;
}

void TaskLogInfo::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool TaskLogInfo::messageIsSet() const
{
    return messageIsSet_;
}

void TaskLogInfo::unsetmessage()
{
    messageIsSet_ = false;
}

std::string TaskLogInfo::getCreateTime() const
{
    return createTime_;
}

void TaskLogInfo::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool TaskLogInfo::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void TaskLogInfo::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

}
}
}
}
}


