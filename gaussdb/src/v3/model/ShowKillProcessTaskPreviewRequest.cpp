

#include "huaweicloud/gaussdb/v3/model/ShowKillProcessTaskPreviewRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowKillProcessTaskPreviewRequest::ShowKillProcessTaskPreviewRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    time_ = "";
    timeIsSet_ = false;
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
}

ShowKillProcessTaskPreviewRequest::~ShowKillProcessTaskPreviewRequest() = default;

void ShowKillProcessTaskPreviewRequest::validate()
{
}

web::json::value ShowKillProcessTaskPreviewRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(timeIsSet_) {
        val[utility::conversions::to_string_t("time")] = ModelBase::toJson(time_);
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

    return val;
}
bool ShowKillProcessTaskPreviewRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTime(refVal);
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
    return ok;
}


std::string ShowKillProcessTaskPreviewRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowKillProcessTaskPreviewRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowKillProcessTaskPreviewRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowKillProcessTaskPreviewRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowKillProcessTaskPreviewRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowKillProcessTaskPreviewRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowKillProcessTaskPreviewRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowKillProcessTaskPreviewRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowKillProcessTaskPreviewRequest::getTime() const
{
    return time_;
}

void ShowKillProcessTaskPreviewRequest::setTime(const std::string& value)
{
    time_ = value;
    timeIsSet_ = true;
}

bool ShowKillProcessTaskPreviewRequest::timeIsSet() const
{
    return timeIsSet_;
}

void ShowKillProcessTaskPreviewRequest::unsettime()
{
    timeIsSet_ = false;
}

std::string ShowKillProcessTaskPreviewRequest::getUser() const
{
    return user_;
}

void ShowKillProcessTaskPreviewRequest::setUser(const std::string& value)
{
    user_ = value;
    userIsSet_ = true;
}

bool ShowKillProcessTaskPreviewRequest::userIsSet() const
{
    return userIsSet_;
}

void ShowKillProcessTaskPreviewRequest::unsetuser()
{
    userIsSet_ = false;
}

std::string ShowKillProcessTaskPreviewRequest::getHost() const
{
    return host_;
}

void ShowKillProcessTaskPreviewRequest::setHost(const std::string& value)
{
    host_ = value;
    hostIsSet_ = true;
}

bool ShowKillProcessTaskPreviewRequest::hostIsSet() const
{
    return hostIsSet_;
}

void ShowKillProcessTaskPreviewRequest::unsethost()
{
    hostIsSet_ = false;
}

std::string ShowKillProcessTaskPreviewRequest::getDb() const
{
    return db_;
}

void ShowKillProcessTaskPreviewRequest::setDb(const std::string& value)
{
    db_ = value;
    dbIsSet_ = true;
}

bool ShowKillProcessTaskPreviewRequest::dbIsSet() const
{
    return dbIsSet_;
}

void ShowKillProcessTaskPreviewRequest::unsetdb()
{
    dbIsSet_ = false;
}

std::string ShowKillProcessTaskPreviewRequest::getCommand() const
{
    return command_;
}

void ShowKillProcessTaskPreviewRequest::setCommand(const std::string& value)
{
    command_ = value;
    commandIsSet_ = true;
}

bool ShowKillProcessTaskPreviewRequest::commandIsSet() const
{
    return commandIsSet_;
}

void ShowKillProcessTaskPreviewRequest::unsetcommand()
{
    commandIsSet_ = false;
}

std::string ShowKillProcessTaskPreviewRequest::getInfo() const
{
    return info_;
}

void ShowKillProcessTaskPreviewRequest::setInfo(const std::string& value)
{
    info_ = value;
    infoIsSet_ = true;
}

bool ShowKillProcessTaskPreviewRequest::infoIsSet() const
{
    return infoIsSet_;
}

void ShowKillProcessTaskPreviewRequest::unsetinfo()
{
    infoIsSet_ = false;
}

}
}
}
}
}


