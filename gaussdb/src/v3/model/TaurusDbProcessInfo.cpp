

#include "huaweicloud/gaussdb/v3/model/TaurusDbProcessInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




TaurusDbProcessInfo::TaurusDbProcessInfo()
{
    id_ = 0L;
    idIsSet_ = false;
    user_ = "";
    userIsSet_ = false;
    host_ = "";
    hostIsSet_ = false;
    db_ = "";
    dbIsSet_ = false;
    command_ = "";
    commandIsSet_ = false;
    time_ = 0L;
    timeIsSet_ = false;
    state_ = "";
    stateIsSet_ = false;
    info_ = "";
    infoIsSet_ = false;
}

TaurusDbProcessInfo::~TaurusDbProcessInfo() = default;

void TaurusDbProcessInfo::validate()
{
}

web::json::value TaurusDbProcessInfo::toJson() const
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
    if(dbIsSet_) {
        val[utility::conversions::to_string_t("db")] = ModelBase::toJson(db_);
    }
    if(commandIsSet_) {
        val[utility::conversions::to_string_t("command")] = ModelBase::toJson(command_);
    }
    if(timeIsSet_) {
        val[utility::conversions::to_string_t("time")] = ModelBase::toJson(time_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(infoIsSet_) {
        val[utility::conversions::to_string_t("info")] = ModelBase::toJson(info_);
    }

    return val;
}
bool TaurusDbProcessInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("host"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("host"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHost(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("command"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("command"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommand(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("info"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInfo(refVal);
        }
    }
    return ok;
}


int64_t TaurusDbProcessInfo::getId() const
{
    return id_;
}

void TaurusDbProcessInfo::setId(int64_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool TaurusDbProcessInfo::idIsSet() const
{
    return idIsSet_;
}

void TaurusDbProcessInfo::unsetid()
{
    idIsSet_ = false;
}

std::string TaurusDbProcessInfo::getUser() const
{
    return user_;
}

void TaurusDbProcessInfo::setUser(const std::string& value)
{
    user_ = value;
    userIsSet_ = true;
}

bool TaurusDbProcessInfo::userIsSet() const
{
    return userIsSet_;
}

void TaurusDbProcessInfo::unsetuser()
{
    userIsSet_ = false;
}

std::string TaurusDbProcessInfo::getHost() const
{
    return host_;
}

void TaurusDbProcessInfo::setHost(const std::string& value)
{
    host_ = value;
    hostIsSet_ = true;
}

bool TaurusDbProcessInfo::hostIsSet() const
{
    return hostIsSet_;
}

void TaurusDbProcessInfo::unsethost()
{
    hostIsSet_ = false;
}

std::string TaurusDbProcessInfo::getDb() const
{
    return db_;
}

void TaurusDbProcessInfo::setDb(const std::string& value)
{
    db_ = value;
    dbIsSet_ = true;
}

bool TaurusDbProcessInfo::dbIsSet() const
{
    return dbIsSet_;
}

void TaurusDbProcessInfo::unsetdb()
{
    dbIsSet_ = false;
}

std::string TaurusDbProcessInfo::getCommand() const
{
    return command_;
}

void TaurusDbProcessInfo::setCommand(const std::string& value)
{
    command_ = value;
    commandIsSet_ = true;
}

bool TaurusDbProcessInfo::commandIsSet() const
{
    return commandIsSet_;
}

void TaurusDbProcessInfo::unsetcommand()
{
    commandIsSet_ = false;
}

int64_t TaurusDbProcessInfo::getTime() const
{
    return time_;
}

void TaurusDbProcessInfo::setTime(int64_t value)
{
    time_ = value;
    timeIsSet_ = true;
}

bool TaurusDbProcessInfo::timeIsSet() const
{
    return timeIsSet_;
}

void TaurusDbProcessInfo::unsettime()
{
    timeIsSet_ = false;
}

std::string TaurusDbProcessInfo::getState() const
{
    return state_;
}

void TaurusDbProcessInfo::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool TaurusDbProcessInfo::stateIsSet() const
{
    return stateIsSet_;
}

void TaurusDbProcessInfo::unsetstate()
{
    stateIsSet_ = false;
}

std::string TaurusDbProcessInfo::getInfo() const
{
    return info_;
}

void TaurusDbProcessInfo::setInfo(const std::string& value)
{
    info_ = value;
    infoIsSet_ = true;
}

bool TaurusDbProcessInfo::infoIsSet() const
{
    return infoIsSet_;
}

void TaurusDbProcessInfo::unsetinfo()
{
    infoIsSet_ = false;
}

}
}
}
}
}


