

#include "huaweicloud/gaussdb/v3/model/KillProcessTaskReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




KillProcessTaskReq::KillProcessTaskReq()
{
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
}

KillProcessTaskReq::~KillProcessTaskReq() = default;

void KillProcessTaskReq::validate()
{
}

web::json::value KillProcessTaskReq::toJson() const
{
    web::json::value val = web::json::value::object();

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

    return val;
}
bool KillProcessTaskReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    return ok;
}


std::string KillProcessTaskReq::getUser() const
{
    return user_;
}

void KillProcessTaskReq::setUser(const std::string& value)
{
    user_ = value;
    userIsSet_ = true;
}

bool KillProcessTaskReq::userIsSet() const
{
    return userIsSet_;
}

void KillProcessTaskReq::unsetuser()
{
    userIsSet_ = false;
}

std::string KillProcessTaskReq::getHost() const
{
    return host_;
}

void KillProcessTaskReq::setHost(const std::string& value)
{
    host_ = value;
    hostIsSet_ = true;
}

bool KillProcessTaskReq::hostIsSet() const
{
    return hostIsSet_;
}

void KillProcessTaskReq::unsethost()
{
    hostIsSet_ = false;
}

std::string KillProcessTaskReq::getDb() const
{
    return db_;
}

void KillProcessTaskReq::setDb(const std::string& value)
{
    db_ = value;
    dbIsSet_ = true;
}

bool KillProcessTaskReq::dbIsSet() const
{
    return dbIsSet_;
}

void KillProcessTaskReq::unsetdb()
{
    dbIsSet_ = false;
}

std::string KillProcessTaskReq::getCommand() const
{
    return command_;
}

void KillProcessTaskReq::setCommand(const std::string& value)
{
    command_ = value;
    commandIsSet_ = true;
}

bool KillProcessTaskReq::commandIsSet() const
{
    return commandIsSet_;
}

void KillProcessTaskReq::unsetcommand()
{
    commandIsSet_ = false;
}

std::string KillProcessTaskReq::getInfo() const
{
    return info_;
}

void KillProcessTaskReq::setInfo(const std::string& value)
{
    info_ = value;
    infoIsSet_ = true;
}

bool KillProcessTaskReq::infoIsSet() const
{
    return infoIsSet_;
}

void KillProcessTaskReq::unsetinfo()
{
    infoIsSet_ = false;
}

std::string KillProcessTaskReq::getTime() const
{
    return time_;
}

void KillProcessTaskReq::setTime(const std::string& value)
{
    time_ = value;
    timeIsSet_ = true;
}

bool KillProcessTaskReq::timeIsSet() const
{
    return timeIsSet_;
}

void KillProcessTaskReq::unsettime()
{
    timeIsSet_ = false;
}

std::string KillProcessTaskReq::getEndTime() const
{
    return endTime_;
}

void KillProcessTaskReq::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool KillProcessTaskReq::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void KillProcessTaskReq::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string KillProcessTaskReq::getMode() const
{
    return mode_;
}

void KillProcessTaskReq::setMode(const std::string& value)
{
    mode_ = value;
    modeIsSet_ = true;
}

bool KillProcessTaskReq::modeIsSet() const
{
    return modeIsSet_;
}

void KillProcessTaskReq::unsetmode()
{
    modeIsSet_ = false;
}

}
}
}
}
}


