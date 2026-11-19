

#include "huaweicloud/gaussdb/v3/model/KillProcessItem.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




KillProcessItem::KillProcessItem()
{
    id_ = "";
    idIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    user_ = "";
    userIsSet_ = false;
    host_ = "";
    hostIsSet_ = false;
    db_ = "";
    dbIsSet_ = false;
    command_ = "";
    commandIsSet_ = false;
    info_ = "";
    infoIsSet_ = false;
    time_ = "";
    timeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    mode_ = "";
    modeIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

KillProcessItem::~KillProcessItem() = default;

void KillProcessItem::validate()
{
}

web::json::value KillProcessItem::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
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
    if(infoIsSet_) {
        val[utility::conversions::to_string_t("info")] = ModelBase::toJson(info_);
    }
    if(timeIsSet_) {
        val[utility::conversions::to_string_t("time")] = ModelBase::toJson(time_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(modeIsSet_) {
        val[utility::conversions::to_string_t("mode")] = ModelBase::toJson(mode_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool KillProcessItem::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("info"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMode(refVal);
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
    return ok;
}


std::string KillProcessItem::getId() const
{
    return id_;
}

void KillProcessItem::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool KillProcessItem::idIsSet() const
{
    return idIsSet_;
}

void KillProcessItem::unsetid()
{
    idIsSet_ = false;
}

std::string KillProcessItem::getInstanceId() const
{
    return instanceId_;
}

void KillProcessItem::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool KillProcessItem::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void KillProcessItem::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string KillProcessItem::getUser() const
{
    return user_;
}

void KillProcessItem::setUser(const std::string& value)
{
    user_ = value;
    userIsSet_ = true;
}

bool KillProcessItem::userIsSet() const
{
    return userIsSet_;
}

void KillProcessItem::unsetuser()
{
    userIsSet_ = false;
}

std::string KillProcessItem::getHost() const
{
    return host_;
}

void KillProcessItem::setHost(const std::string& value)
{
    host_ = value;
    hostIsSet_ = true;
}

bool KillProcessItem::hostIsSet() const
{
    return hostIsSet_;
}

void KillProcessItem::unsethost()
{
    hostIsSet_ = false;
}

std::string KillProcessItem::getDb() const
{
    return db_;
}

void KillProcessItem::setDb(const std::string& value)
{
    db_ = value;
    dbIsSet_ = true;
}

bool KillProcessItem::dbIsSet() const
{
    return dbIsSet_;
}

void KillProcessItem::unsetdb()
{
    dbIsSet_ = false;
}

std::string KillProcessItem::getCommand() const
{
    return command_;
}

void KillProcessItem::setCommand(const std::string& value)
{
    command_ = value;
    commandIsSet_ = true;
}

bool KillProcessItem::commandIsSet() const
{
    return commandIsSet_;
}

void KillProcessItem::unsetcommand()
{
    commandIsSet_ = false;
}

std::string KillProcessItem::getInfo() const
{
    return info_;
}

void KillProcessItem::setInfo(const std::string& value)
{
    info_ = value;
    infoIsSet_ = true;
}

bool KillProcessItem::infoIsSet() const
{
    return infoIsSet_;
}

void KillProcessItem::unsetinfo()
{
    infoIsSet_ = false;
}

std::string KillProcessItem::getTime() const
{
    return time_;
}

void KillProcessItem::setTime(const std::string& value)
{
    time_ = value;
    timeIsSet_ = true;
}

bool KillProcessItem::timeIsSet() const
{
    return timeIsSet_;
}

void KillProcessItem::unsettime()
{
    timeIsSet_ = false;
}

std::string KillProcessItem::getEndTime() const
{
    return endTime_;
}

void KillProcessItem::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool KillProcessItem::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void KillProcessItem::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string KillProcessItem::getMode() const
{
    return mode_;
}

void KillProcessItem::setMode(const std::string& value)
{
    mode_ = value;
    modeIsSet_ = true;
}

bool KillProcessItem::modeIsSet() const
{
    return modeIsSet_;
}

void KillProcessItem::unsetmode()
{
    modeIsSet_ = false;
}

std::string KillProcessItem::getStatus() const
{
    return status_;
}

void KillProcessItem::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool KillProcessItem::statusIsSet() const
{
    return statusIsSet_;
}

void KillProcessItem::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


