

#include "huaweicloud/lts/v2/model/UpdateLogGroupResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




UpdateLogGroupResponse::UpdateLogGroupResponse()
{
    creationTime_ = 0L;
    creationTimeIsSet_ = false;
    logGroupName_ = "";
    logGroupNameIsSet_ = false;
    logGroupId_ = "";
    logGroupIdIsSet_ = false;
    ttlInDays_ = 0;
    ttlInDaysIsSet_ = false;
}

UpdateLogGroupResponse::~UpdateLogGroupResponse() = default;

void UpdateLogGroupResponse::validate()
{
}

web::json::value UpdateLogGroupResponse::toJson() const
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

    return val;
}

bool UpdateLogGroupResponse::fromJson(const web::json::value& val)
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
    return ok;
}

int64_t UpdateLogGroupResponse::getCreationTime() const
{
    return creationTime_;
}

void UpdateLogGroupResponse::setCreationTime(int64_t value)
{
    creationTime_ = value;
    creationTimeIsSet_ = true;
}

bool UpdateLogGroupResponse::creationTimeIsSet() const
{
    return creationTimeIsSet_;
}

void UpdateLogGroupResponse::unsetcreationTime()
{
    creationTimeIsSet_ = false;
}

std::string UpdateLogGroupResponse::getLogGroupName() const
{
    return logGroupName_;
}

void UpdateLogGroupResponse::setLogGroupName(const std::string& value)
{
    logGroupName_ = value;
    logGroupNameIsSet_ = true;
}

bool UpdateLogGroupResponse::logGroupNameIsSet() const
{
    return logGroupNameIsSet_;
}

void UpdateLogGroupResponse::unsetlogGroupName()
{
    logGroupNameIsSet_ = false;
}

std::string UpdateLogGroupResponse::getLogGroupId() const
{
    return logGroupId_;
}

void UpdateLogGroupResponse::setLogGroupId(const std::string& value)
{
    logGroupId_ = value;
    logGroupIdIsSet_ = true;
}

bool UpdateLogGroupResponse::logGroupIdIsSet() const
{
    return logGroupIdIsSet_;
}

void UpdateLogGroupResponse::unsetlogGroupId()
{
    logGroupIdIsSet_ = false;
}

int32_t UpdateLogGroupResponse::getTtlInDays() const
{
    return ttlInDays_;
}

void UpdateLogGroupResponse::setTtlInDays(int32_t value)
{
    ttlInDays_ = value;
    ttlInDaysIsSet_ = true;
}

bool UpdateLogGroupResponse::ttlInDaysIsSet() const
{
    return ttlInDaysIsSet_;
}

void UpdateLogGroupResponse::unsetttlInDays()
{
    ttlInDaysIsSet_ = false;
}

}
}
}
}
}


