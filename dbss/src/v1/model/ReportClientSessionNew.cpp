

#include "huaweicloud/dbss/v1/model/ReportClientSessionNew.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ReportClientSessionNew::ReportClientSessionNew()
{
    dbId_ = "";
    dbIdIsSet_ = false;
    dbIp_ = "";
    dbIpIsSet_ = false;
    dbName_ = "";
    dbNameIsSet_ = false;
    sessionNum_ = 0L;
    sessionNumIsSet_ = false;
}

ReportClientSessionNew::~ReportClientSessionNew() = default;

void ReportClientSessionNew::validate()
{
}

web::json::value ReportClientSessionNew::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dbIdIsSet_) {
        val[utility::conversions::to_string_t("db_id")] = ModelBase::toJson(dbId_);
    }
    if(dbIpIsSet_) {
        val[utility::conversions::to_string_t("db_ip")] = ModelBase::toJson(dbIp_);
    }
    if(dbNameIsSet_) {
        val[utility::conversions::to_string_t("db_name")] = ModelBase::toJson(dbName_);
    }
    if(sessionNumIsSet_) {
        val[utility::conversions::to_string_t("session_num")] = ModelBase::toJson(sessionNum_);
    }

    return val;
}
bool ReportClientSessionNew::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("db_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("db_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbIp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("db_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("session_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("session_num"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSessionNum(refVal);
        }
    }
    return ok;
}


std::string ReportClientSessionNew::getDbId() const
{
    return dbId_;
}

void ReportClientSessionNew::setDbId(const std::string& value)
{
    dbId_ = value;
    dbIdIsSet_ = true;
}

bool ReportClientSessionNew::dbIdIsSet() const
{
    return dbIdIsSet_;
}

void ReportClientSessionNew::unsetdbId()
{
    dbIdIsSet_ = false;
}

std::string ReportClientSessionNew::getDbIp() const
{
    return dbIp_;
}

void ReportClientSessionNew::setDbIp(const std::string& value)
{
    dbIp_ = value;
    dbIpIsSet_ = true;
}

bool ReportClientSessionNew::dbIpIsSet() const
{
    return dbIpIsSet_;
}

void ReportClientSessionNew::unsetdbIp()
{
    dbIpIsSet_ = false;
}

std::string ReportClientSessionNew::getDbName() const
{
    return dbName_;
}

void ReportClientSessionNew::setDbName(const std::string& value)
{
    dbName_ = value;
    dbNameIsSet_ = true;
}

bool ReportClientSessionNew::dbNameIsSet() const
{
    return dbNameIsSet_;
}

void ReportClientSessionNew::unsetdbName()
{
    dbNameIsSet_ = false;
}

int64_t ReportClientSessionNew::getSessionNum() const
{
    return sessionNum_;
}

void ReportClientSessionNew::setSessionNum(int64_t value)
{
    sessionNum_ = value;
    sessionNumIsSet_ = true;
}

bool ReportClientSessionNew::sessionNumIsSet() const
{
    return sessionNumIsSet_;
}

void ReportClientSessionNew::unsetsessionNum()
{
    sessionNumIsSet_ = false;
}

}
}
}
}
}


