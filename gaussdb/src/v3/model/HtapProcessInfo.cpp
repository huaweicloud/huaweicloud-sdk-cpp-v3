

#include "huaweicloud/gaussdb/v3/model/HtapProcessInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




HtapProcessInfo::HtapProcessInfo()
{
    id_ = "";
    idIsSet_ = false;
    user_ = "";
    userIsSet_ = false;
    host_ = "";
    hostIsSet_ = false;
    state_ = "";
    stateIsSet_ = false;
    database_ = "";
    databaseIsSet_ = false;
    sqlStatement_ = "";
    sqlStatementIsSet_ = false;
    duration_ = "";
    durationIsSet_ = false;
    command_ = "";
    commandIsSet_ = false;
}

HtapProcessInfo::~HtapProcessInfo() = default;

void HtapProcessInfo::validate()
{
}

web::json::value HtapProcessInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(userIsSet_) {
        val[utility::conversions::to_string_t("user")] = ModelBase::toJson(user_);
    }
    if(hostIsSet_) {
        val[utility::conversions::to_string_t("host")] = ModelBase::toJson(host_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(databaseIsSet_) {
        val[utility::conversions::to_string_t("database")] = ModelBase::toJson(database_);
    }
    if(sqlStatementIsSet_) {
        val[utility::conversions::to_string_t("sql_statement")] = ModelBase::toJson(sqlStatement_);
    }
    if(durationIsSet_) {
        val[utility::conversions::to_string_t("duration")] = ModelBase::toJson(duration_);
    }
    if(commandIsSet_) {
        val[utility::conversions::to_string_t("command")] = ModelBase::toJson(command_);
    }

    return val;
}
bool HtapProcessInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
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
    if(val.has_field(utility::conversions::to_string_t("host"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("host"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHost(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("database"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("database"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabase(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sql_statement"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sql_statement"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSqlStatement(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("duration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("duration"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDuration(refVal);
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
    return ok;
}


std::string HtapProcessInfo::getId() const
{
    return id_;
}

void HtapProcessInfo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool HtapProcessInfo::idIsSet() const
{
    return idIsSet_;
}

void HtapProcessInfo::unsetid()
{
    idIsSet_ = false;
}

std::string HtapProcessInfo::getUser() const
{
    return user_;
}

void HtapProcessInfo::setUser(const std::string& value)
{
    user_ = value;
    userIsSet_ = true;
}

bool HtapProcessInfo::userIsSet() const
{
    return userIsSet_;
}

void HtapProcessInfo::unsetuser()
{
    userIsSet_ = false;
}

std::string HtapProcessInfo::getHost() const
{
    return host_;
}

void HtapProcessInfo::setHost(const std::string& value)
{
    host_ = value;
    hostIsSet_ = true;
}

bool HtapProcessInfo::hostIsSet() const
{
    return hostIsSet_;
}

void HtapProcessInfo::unsethost()
{
    hostIsSet_ = false;
}

std::string HtapProcessInfo::getState() const
{
    return state_;
}

void HtapProcessInfo::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool HtapProcessInfo::stateIsSet() const
{
    return stateIsSet_;
}

void HtapProcessInfo::unsetstate()
{
    stateIsSet_ = false;
}

std::string HtapProcessInfo::getDatabase() const
{
    return database_;
}

void HtapProcessInfo::setDatabase(const std::string& value)
{
    database_ = value;
    databaseIsSet_ = true;
}

bool HtapProcessInfo::databaseIsSet() const
{
    return databaseIsSet_;
}

void HtapProcessInfo::unsetdatabase()
{
    databaseIsSet_ = false;
}

std::string HtapProcessInfo::getSqlStatement() const
{
    return sqlStatement_;
}

void HtapProcessInfo::setSqlStatement(const std::string& value)
{
    sqlStatement_ = value;
    sqlStatementIsSet_ = true;
}

bool HtapProcessInfo::sqlStatementIsSet() const
{
    return sqlStatementIsSet_;
}

void HtapProcessInfo::unsetsqlStatement()
{
    sqlStatementIsSet_ = false;
}

std::string HtapProcessInfo::getDuration() const
{
    return duration_;
}

void HtapProcessInfo::setDuration(const std::string& value)
{
    duration_ = value;
    durationIsSet_ = true;
}

bool HtapProcessInfo::durationIsSet() const
{
    return durationIsSet_;
}

void HtapProcessInfo::unsetduration()
{
    durationIsSet_ = false;
}

std::string HtapProcessInfo::getCommand() const
{
    return command_;
}

void HtapProcessInfo::setCommand(const std::string& value)
{
    command_ = value;
    commandIsSet_ = true;
}

bool HtapProcessInfo::commandIsSet() const
{
    return commandIsSet_;
}

void HtapProcessInfo::unsetcommand()
{
    commandIsSet_ = false;
}

}
}
}
}
}


