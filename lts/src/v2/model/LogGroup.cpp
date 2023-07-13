

#include "huaweicloud/lts/v2/model/LogGroup.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




LogGroup::LogGroup()
{
    creationTime_ = 0L;
    creationTimeIsSet_ = false;
    logGroupName_ = "";
    logGroupNameIsSet_ = false;
    logGroupId_ = "";
    logGroupIdIsSet_ = false;
    ttlInDays_ = 0;
    ttlInDaysIsSet_ = false;
    tagIsSet_ = false;
}

LogGroup::~LogGroup() = default;

void LogGroup::validate()
{
}

web::json::value LogGroup::toJson() const
{
    web::json::value val = web::json::value::object();

    if(creationTimeIsSet_) {
        val[utility::conversions::to_string_t("creation_time")] = ModelBase::toJson(creationTime_);
    }
    if(logGroupNameIsSet_) {
        val[utility::conversions::to_string_t("log_group_name")] = ModelBase::toJson(logGroupName_);
    }
    if(logGroupIdIsSet_) {
        val[utility::conversions::to_string_t("log_group_id")] = ModelBase::toJson(logGroupId_);
    }
    if(ttlInDaysIsSet_) {
        val[utility::conversions::to_string_t("ttl_in_days")] = ModelBase::toJson(ttlInDays_);
    }
    if(tagIsSet_) {
        val[utility::conversions::to_string_t("tag")] = ModelBase::toJson(tag_);
    }

    return val;
}

bool LogGroup::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("creation_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creation_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreationTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_group_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_group_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogGroupName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ttl_in_days"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ttl_in_days"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTtlInDays(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tag"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTag(refVal);
        }
    }
    return ok;
}

int64_t LogGroup::getCreationTime() const
{
    return creationTime_;
}

void LogGroup::setCreationTime(int64_t value)
{
    creationTime_ = value;
    creationTimeIsSet_ = true;
}

bool LogGroup::creationTimeIsSet() const
{
    return creationTimeIsSet_;
}

void LogGroup::unsetcreationTime()
{
    creationTimeIsSet_ = false;
}

std::string LogGroup::getLogGroupName() const
{
    return logGroupName_;
}

void LogGroup::setLogGroupName(const std::string& value)
{
    logGroupName_ = value;
    logGroupNameIsSet_ = true;
}

bool LogGroup::logGroupNameIsSet() const
{
    return logGroupNameIsSet_;
}

void LogGroup::unsetlogGroupName()
{
    logGroupNameIsSet_ = false;
}

std::string LogGroup::getLogGroupId() const
{
    return logGroupId_;
}

void LogGroup::setLogGroupId(const std::string& value)
{
    logGroupId_ = value;
    logGroupIdIsSet_ = true;
}

bool LogGroup::logGroupIdIsSet() const
{
    return logGroupIdIsSet_;
}

void LogGroup::unsetlogGroupId()
{
    logGroupIdIsSet_ = false;
}

int32_t LogGroup::getTtlInDays() const
{
    return ttlInDays_;
}

void LogGroup::setTtlInDays(int32_t value)
{
    ttlInDays_ = value;
    ttlInDaysIsSet_ = true;
}

bool LogGroup::ttlInDaysIsSet() const
{
    return ttlInDaysIsSet_;
}

void LogGroup::unsetttlInDays()
{
    ttlInDaysIsSet_ = false;
}

std::map<std::string, std::string>& LogGroup::getTag()
{
    return tag_;
}

void LogGroup::setTag(const std::map<std::string, std::string>& value)
{
    tag_ = value;
    tagIsSet_ = true;
}

bool LogGroup::tagIsSet() const
{
    return tagIsSet_;
}

void LogGroup::unsettag()
{
    tagIsSet_ = false;
}

}
}
}
}
}


