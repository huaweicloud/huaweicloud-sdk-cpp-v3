

#include "huaweicloud/dbss/v1/model/ReportAccountSessionNew.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ReportAccountSessionNew::ReportAccountSessionNew()
{
    dbId_ = "";
    dbIdIsSet_ = false;
    dbIp_ = "";
    dbIpIsSet_ = false;
    dbName_ = "";
    dbNameIsSet_ = false;
    dbUser_ = "";
    dbUserIsSet_ = false;
    sessionNum_ = 0L;
    sessionNumIsSet_ = false;
}

ReportAccountSessionNew::~ReportAccountSessionNew() = default;

void ReportAccountSessionNew::validate()
{
}

web::json::value ReportAccountSessionNew::toJson() const
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
    if(dbUserIsSet_) {
        val[utility::conversions::to_string_t("db_user")] = ModelBase::toJson(dbUser_);
    }
    if(sessionNumIsSet_) {
        val[utility::conversions::to_string_t("session_num")] = ModelBase::toJson(sessionNum_);
    }

    return val;
}
bool ReportAccountSessionNew::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("db_user"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_user"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbUser(refVal);
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


std::string ReportAccountSessionNew::getDbId() const
{
    return dbId_;
}

void ReportAccountSessionNew::setDbId(const std::string& value)
{
    dbId_ = value;
    dbIdIsSet_ = true;
}

bool ReportAccountSessionNew::dbIdIsSet() const
{
    return dbIdIsSet_;
}

void ReportAccountSessionNew::unsetdbId()
{
    dbIdIsSet_ = false;
}

std::string ReportAccountSessionNew::getDbIp() const
{
    return dbIp_;
}

void ReportAccountSessionNew::setDbIp(const std::string& value)
{
    dbIp_ = value;
    dbIpIsSet_ = true;
}

bool ReportAccountSessionNew::dbIpIsSet() const
{
    return dbIpIsSet_;
}

void ReportAccountSessionNew::unsetdbIp()
{
    dbIpIsSet_ = false;
}

std::string ReportAccountSessionNew::getDbName() const
{
    return dbName_;
}

void ReportAccountSessionNew::setDbName(const std::string& value)
{
    dbName_ = value;
    dbNameIsSet_ = true;
}

bool ReportAccountSessionNew::dbNameIsSet() const
{
    return dbNameIsSet_;
}

void ReportAccountSessionNew::unsetdbName()
{
    dbNameIsSet_ = false;
}

std::string ReportAccountSessionNew::getDbUser() const
{
    return dbUser_;
}

void ReportAccountSessionNew::setDbUser(const std::string& value)
{
    dbUser_ = value;
    dbUserIsSet_ = true;
}

bool ReportAccountSessionNew::dbUserIsSet() const
{
    return dbUserIsSet_;
}

void ReportAccountSessionNew::unsetdbUser()
{
    dbUserIsSet_ = false;
}

int64_t ReportAccountSessionNew::getSessionNum() const
{
    return sessionNum_;
}

void ReportAccountSessionNew::setSessionNum(int64_t value)
{
    sessionNum_ = value;
    sessionNumIsSet_ = true;
}

bool ReportAccountSessionNew::sessionNumIsSet() const
{
    return sessionNumIsSet_;
}

void ReportAccountSessionNew::unsetsessionNum()
{
    sessionNumIsSet_ = false;
}

}
}
}
}
}


