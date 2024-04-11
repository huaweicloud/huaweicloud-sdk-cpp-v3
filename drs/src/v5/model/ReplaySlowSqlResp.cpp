

#include "huaweicloud/drs/v5/model/ReplaySlowSqlResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ReplaySlowSqlResp::ReplaySlowSqlResp()
{
    objectType_ = "";
    objectTypeIsSet_ = false;
    slowSql_ = "";
    slowSqlIsSet_ = false;
    oldTime_ = "";
    oldTimeIsSet_ = false;
    replayTime_ = "";
    replayTimeIsSet_ = false;
}

ReplaySlowSqlResp::~ReplaySlowSqlResp() = default;

void ReplaySlowSqlResp::validate()
{
}

web::json::value ReplaySlowSqlResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(objectTypeIsSet_) {
        val[utility::conversions::to_string_t("object_type")] = ModelBase::toJson(objectType_);
    }
    if(slowSqlIsSet_) {
        val[utility::conversions::to_string_t("slow_sql")] = ModelBase::toJson(slowSql_);
    }
    if(oldTimeIsSet_) {
        val[utility::conversions::to_string_t("old_time")] = ModelBase::toJson(oldTime_);
    }
    if(replayTimeIsSet_) {
        val[utility::conversions::to_string_t("replay_time")] = ModelBase::toJson(replayTime_);
    }

    return val;
}
bool ReplaySlowSqlResp::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("object_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("object_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObjectType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("slow_sql"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("slow_sql"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSlowSql(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("old_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("old_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOldTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("replay_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("replay_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReplayTime(refVal);
        }
    }
    return ok;
}


std::string ReplaySlowSqlResp::getObjectType() const
{
    return objectType_;
}

void ReplaySlowSqlResp::setObjectType(const std::string& value)
{
    objectType_ = value;
    objectTypeIsSet_ = true;
}

bool ReplaySlowSqlResp::objectTypeIsSet() const
{
    return objectTypeIsSet_;
}

void ReplaySlowSqlResp::unsetobjectType()
{
    objectTypeIsSet_ = false;
}

std::string ReplaySlowSqlResp::getSlowSql() const
{
    return slowSql_;
}

void ReplaySlowSqlResp::setSlowSql(const std::string& value)
{
    slowSql_ = value;
    slowSqlIsSet_ = true;
}

bool ReplaySlowSqlResp::slowSqlIsSet() const
{
    return slowSqlIsSet_;
}

void ReplaySlowSqlResp::unsetslowSql()
{
    slowSqlIsSet_ = false;
}

std::string ReplaySlowSqlResp::getOldTime() const
{
    return oldTime_;
}

void ReplaySlowSqlResp::setOldTime(const std::string& value)
{
    oldTime_ = value;
    oldTimeIsSet_ = true;
}

bool ReplaySlowSqlResp::oldTimeIsSet() const
{
    return oldTimeIsSet_;
}

void ReplaySlowSqlResp::unsetoldTime()
{
    oldTimeIsSet_ = false;
}

std::string ReplaySlowSqlResp::getReplayTime() const
{
    return replayTime_;
}

void ReplaySlowSqlResp::setReplayTime(const std::string& value)
{
    replayTime_ = value;
    replayTimeIsSet_ = true;
}

bool ReplaySlowSqlResp::replayTimeIsSet() const
{
    return replayTimeIsSet_;
}

void ReplaySlowSqlResp::unsetreplayTime()
{
    replayTimeIsSet_ = false;
}

}
}
}
}
}


