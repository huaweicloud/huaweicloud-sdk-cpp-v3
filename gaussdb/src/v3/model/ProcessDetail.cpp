

#include "huaweicloud/gaussdb/v3/model/ProcessDetail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ProcessDetail::ProcessDetail()
{
    id_ = 0L;
    idIsSet_ = false;
    user_ = "";
    userIsSet_ = false;
    db_ = "";
    dbIsSet_ = false;
    state_ = "";
    stateIsSet_ = false;
    command_ = "";
    commandIsSet_ = false;
    sqlInfo_ = "";
    sqlInfoIsSet_ = false;
    stateDuration_ = 0L;
    stateDurationIsSet_ = false;
}

ProcessDetail::~ProcessDetail() = default;

void ProcessDetail::validate()
{
}

web::json::value ProcessDetail::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(userIsSet_) {
        val[utility::conversions::to_string_t("user")] = ModelBase::toJson(user_);
    }
    if(dbIsSet_) {
        val[utility::conversions::to_string_t("db")] = ModelBase::toJson(db_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(commandIsSet_) {
        val[utility::conversions::to_string_t("command")] = ModelBase::toJson(command_);
    }
    if(sqlInfoIsSet_) {
        val[utility::conversions::to_string_t("sql_info")] = ModelBase::toJson(sqlInfo_);
    }
    if(stateDurationIsSet_) {
        val[utility::conversions::to_string_t("state_duration")] = ModelBase::toJson(stateDuration_);
    }

    return val;
}
bool ProcessDetail::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUser(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("db"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDb(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("command"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("command"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommand(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sql_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sql_info"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSqlInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("state_duration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("state_duration"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStateDuration(refVal);
        }
    }
    return ok;
}


int64_t ProcessDetail::getId() const
{
    return id_;
}

void ProcessDetail::setId(int64_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ProcessDetail::idIsSet() const
{
    return idIsSet_;
}

void ProcessDetail::unsetid()
{
    idIsSet_ = false;
}

std::string ProcessDetail::getUser() const
{
    return user_;
}

void ProcessDetail::setUser(const std::string& value)
{
    user_ = value;
    userIsSet_ = true;
}

bool ProcessDetail::userIsSet() const
{
    return userIsSet_;
}

void ProcessDetail::unsetuser()
{
    userIsSet_ = false;
}

std::string ProcessDetail::getDb() const
{
    return db_;
}

void ProcessDetail::setDb(const std::string& value)
{
    db_ = value;
    dbIsSet_ = true;
}

bool ProcessDetail::dbIsSet() const
{
    return dbIsSet_;
}

void ProcessDetail::unsetdb()
{
    dbIsSet_ = false;
}

std::string ProcessDetail::getState() const
{
    return state_;
}

void ProcessDetail::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool ProcessDetail::stateIsSet() const
{
    return stateIsSet_;
}

void ProcessDetail::unsetstate()
{
    stateIsSet_ = false;
}

std::string ProcessDetail::getCommand() const
{
    return command_;
}

void ProcessDetail::setCommand(const std::string& value)
{
    command_ = value;
    commandIsSet_ = true;
}

bool ProcessDetail::commandIsSet() const
{
    return commandIsSet_;
}

void ProcessDetail::unsetcommand()
{
    commandIsSet_ = false;
}

std::string ProcessDetail::getSqlInfo() const
{
    return sqlInfo_;
}

void ProcessDetail::setSqlInfo(const std::string& value)
{
    sqlInfo_ = value;
    sqlInfoIsSet_ = true;
}

bool ProcessDetail::sqlInfoIsSet() const
{
    return sqlInfoIsSet_;
}

void ProcessDetail::unsetsqlInfo()
{
    sqlInfoIsSet_ = false;
}

int64_t ProcessDetail::getStateDuration() const
{
    return stateDuration_;
}

void ProcessDetail::setStateDuration(int64_t value)
{
    stateDuration_ = value;
    stateDurationIsSet_ = true;
}

bool ProcessDetail::stateDurationIsSet() const
{
    return stateDurationIsSet_;
}

void ProcessDetail::unsetstateDuration()
{
    stateDurationIsSet_ = false;
}

}
}
}
}
}


