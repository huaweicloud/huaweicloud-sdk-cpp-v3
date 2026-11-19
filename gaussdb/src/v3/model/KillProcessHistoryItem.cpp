

#include "huaweicloud/gaussdb/v3/model/KillProcessHistoryItem.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




KillProcessHistoryItem::KillProcessHistoryItem()
{
    taskId_ = "";
    taskIdIsSet_ = false;
    sessionId_ = "";
    sessionIdIsSet_ = false;
    killTime_ = "";
    killTimeIsSet_ = false;
    mode_ = "";
    modeIsSet_ = false;
    user_ = "";
    userIsSet_ = false;
    host_ = "";
    hostIsSet_ = false;
    db_ = "";
    dbIsSet_ = false;
    command_ = "";
    commandIsSet_ = false;
    time_ = "";
    timeIsSet_ = false;
    info_ = "";
    infoIsSet_ = false;
    state_ = "";
    stateIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    nodeId_ = "";
    nodeIdIsSet_ = false;
}

KillProcessHistoryItem::~KillProcessHistoryItem() = default;

void KillProcessHistoryItem::validate()
{
}

web::json::value KillProcessHistoryItem::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }
    if(sessionIdIsSet_) {
        val[utility::conversions::to_string_t("session_id")] = ModelBase::toJson(sessionId_);
    }
    if(killTimeIsSet_) {
        val[utility::conversions::to_string_t("kill_time")] = ModelBase::toJson(killTime_);
    }
    if(modeIsSet_) {
        val[utility::conversions::to_string_t("mode")] = ModelBase::toJson(mode_);
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
    if(infoIsSet_) {
        val[utility::conversions::to_string_t("info")] = ModelBase::toJson(info_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
    }

    return val;
}
bool KillProcessHistoryItem::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("task_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("session_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("session_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSessionId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("kill_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("kill_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKillTime(refVal);
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
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setState(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("node_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeId(refVal);
        }
    }
    return ok;
}


std::string KillProcessHistoryItem::getTaskId() const
{
    return taskId_;
}

void KillProcessHistoryItem::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool KillProcessHistoryItem::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void KillProcessHistoryItem::unsettaskId()
{
    taskIdIsSet_ = false;
}

std::string KillProcessHistoryItem::getSessionId() const
{
    return sessionId_;
}

void KillProcessHistoryItem::setSessionId(const std::string& value)
{
    sessionId_ = value;
    sessionIdIsSet_ = true;
}

bool KillProcessHistoryItem::sessionIdIsSet() const
{
    return sessionIdIsSet_;
}

void KillProcessHistoryItem::unsetsessionId()
{
    sessionIdIsSet_ = false;
}

std::string KillProcessHistoryItem::getKillTime() const
{
    return killTime_;
}

void KillProcessHistoryItem::setKillTime(const std::string& value)
{
    killTime_ = value;
    killTimeIsSet_ = true;
}

bool KillProcessHistoryItem::killTimeIsSet() const
{
    return killTimeIsSet_;
}

void KillProcessHistoryItem::unsetkillTime()
{
    killTimeIsSet_ = false;
}

std::string KillProcessHistoryItem::getMode() const
{
    return mode_;
}

void KillProcessHistoryItem::setMode(const std::string& value)
{
    mode_ = value;
    modeIsSet_ = true;
}

bool KillProcessHistoryItem::modeIsSet() const
{
    return modeIsSet_;
}

void KillProcessHistoryItem::unsetmode()
{
    modeIsSet_ = false;
}

std::string KillProcessHistoryItem::getUser() const
{
    return user_;
}

void KillProcessHistoryItem::setUser(const std::string& value)
{
    user_ = value;
    userIsSet_ = true;
}

bool KillProcessHistoryItem::userIsSet() const
{
    return userIsSet_;
}

void KillProcessHistoryItem::unsetuser()
{
    userIsSet_ = false;
}

std::string KillProcessHistoryItem::getHost() const
{
    return host_;
}

void KillProcessHistoryItem::setHost(const std::string& value)
{
    host_ = value;
    hostIsSet_ = true;
}

bool KillProcessHistoryItem::hostIsSet() const
{
    return hostIsSet_;
}

void KillProcessHistoryItem::unsethost()
{
    hostIsSet_ = false;
}

std::string KillProcessHistoryItem::getDb() const
{
    return db_;
}

void KillProcessHistoryItem::setDb(const std::string& value)
{
    db_ = value;
    dbIsSet_ = true;
}

bool KillProcessHistoryItem::dbIsSet() const
{
    return dbIsSet_;
}

void KillProcessHistoryItem::unsetdb()
{
    dbIsSet_ = false;
}

std::string KillProcessHistoryItem::getCommand() const
{
    return command_;
}

void KillProcessHistoryItem::setCommand(const std::string& value)
{
    command_ = value;
    commandIsSet_ = true;
}

bool KillProcessHistoryItem::commandIsSet() const
{
    return commandIsSet_;
}

void KillProcessHistoryItem::unsetcommand()
{
    commandIsSet_ = false;
}

std::string KillProcessHistoryItem::getTime() const
{
    return time_;
}

void KillProcessHistoryItem::setTime(const std::string& value)
{
    time_ = value;
    timeIsSet_ = true;
}

bool KillProcessHistoryItem::timeIsSet() const
{
    return timeIsSet_;
}

void KillProcessHistoryItem::unsettime()
{
    timeIsSet_ = false;
}

std::string KillProcessHistoryItem::getInfo() const
{
    return info_;
}

void KillProcessHistoryItem::setInfo(const std::string& value)
{
    info_ = value;
    infoIsSet_ = true;
}

bool KillProcessHistoryItem::infoIsSet() const
{
    return infoIsSet_;
}

void KillProcessHistoryItem::unsetinfo()
{
    infoIsSet_ = false;
}

std::string KillProcessHistoryItem::getState() const
{
    return state_;
}

void KillProcessHistoryItem::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool KillProcessHistoryItem::stateIsSet() const
{
    return stateIsSet_;
}

void KillProcessHistoryItem::unsetstate()
{
    stateIsSet_ = false;
}

std::string KillProcessHistoryItem::getInstanceId() const
{
    return instanceId_;
}

void KillProcessHistoryItem::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool KillProcessHistoryItem::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void KillProcessHistoryItem::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string KillProcessHistoryItem::getNodeId() const
{
    return nodeId_;
}

void KillProcessHistoryItem::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool KillProcessHistoryItem::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void KillProcessHistoryItem::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

}
}
}
}
}


