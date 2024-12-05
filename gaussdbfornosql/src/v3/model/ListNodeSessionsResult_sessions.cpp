

#include "huaweicloud/gaussdbfornosql/v3/model/ListNodeSessionsResult_sessions.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ListNodeSessionsResult_sessions::ListNodeSessionsResult_sessions()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    cmd_ = "";
    cmdIsSet_ = false;
    age_ = "";
    ageIsSet_ = false;
    idle_ = "";
    idleIsSet_ = false;
    db_ = "";
    dbIsSet_ = false;
    addr_ = "";
    addrIsSet_ = false;
    fd_ = "";
    fdIsSet_ = false;
    sub_ = "";
    subIsSet_ = false;
    psub_ = "";
    psubIsSet_ = false;
    multi_ = "";
    multiIsSet_ = false;
}

ListNodeSessionsResult_sessions::~ListNodeSessionsResult_sessions() = default;

void ListNodeSessionsResult_sessions::validate()
{
}

web::json::value ListNodeSessionsResult_sessions::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(cmdIsSet_) {
        val[utility::conversions::to_string_t("cmd")] = ModelBase::toJson(cmd_);
    }
    if(ageIsSet_) {
        val[utility::conversions::to_string_t("age")] = ModelBase::toJson(age_);
    }
    if(idleIsSet_) {
        val[utility::conversions::to_string_t("idle")] = ModelBase::toJson(idle_);
    }
    if(dbIsSet_) {
        val[utility::conversions::to_string_t("db")] = ModelBase::toJson(db_);
    }
    if(addrIsSet_) {
        val[utility::conversions::to_string_t("addr")] = ModelBase::toJson(addr_);
    }
    if(fdIsSet_) {
        val[utility::conversions::to_string_t("fd")] = ModelBase::toJson(fd_);
    }
    if(subIsSet_) {
        val[utility::conversions::to_string_t("sub")] = ModelBase::toJson(sub_);
    }
    if(psubIsSet_) {
        val[utility::conversions::to_string_t("psub")] = ModelBase::toJson(psub_);
    }
    if(multiIsSet_) {
        val[utility::conversions::to_string_t("multi")] = ModelBase::toJson(multi_);
    }

    return val;
}
bool ListNodeSessionsResult_sessions::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cmd"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cmd"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCmd(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("age"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("age"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAge(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("idle"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("idle"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIdle(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("addr"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("addr"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddr(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fd"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fd"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFd(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sub"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sub"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSub(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("psub"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("psub"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPsub(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("multi"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("multi"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMulti(refVal);
        }
    }
    return ok;
}


std::string ListNodeSessionsResult_sessions::getId() const
{
    return id_;
}

void ListNodeSessionsResult_sessions::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListNodeSessionsResult_sessions::idIsSet() const
{
    return idIsSet_;
}

void ListNodeSessionsResult_sessions::unsetid()
{
    idIsSet_ = false;
}

std::string ListNodeSessionsResult_sessions::getName() const
{
    return name_;
}

void ListNodeSessionsResult_sessions::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListNodeSessionsResult_sessions::nameIsSet() const
{
    return nameIsSet_;
}

void ListNodeSessionsResult_sessions::unsetname()
{
    nameIsSet_ = false;
}

std::string ListNodeSessionsResult_sessions::getCmd() const
{
    return cmd_;
}

void ListNodeSessionsResult_sessions::setCmd(const std::string& value)
{
    cmd_ = value;
    cmdIsSet_ = true;
}

bool ListNodeSessionsResult_sessions::cmdIsSet() const
{
    return cmdIsSet_;
}

void ListNodeSessionsResult_sessions::unsetcmd()
{
    cmdIsSet_ = false;
}

std::string ListNodeSessionsResult_sessions::getAge() const
{
    return age_;
}

void ListNodeSessionsResult_sessions::setAge(const std::string& value)
{
    age_ = value;
    ageIsSet_ = true;
}

bool ListNodeSessionsResult_sessions::ageIsSet() const
{
    return ageIsSet_;
}

void ListNodeSessionsResult_sessions::unsetage()
{
    ageIsSet_ = false;
}

std::string ListNodeSessionsResult_sessions::getIdle() const
{
    return idle_;
}

void ListNodeSessionsResult_sessions::setIdle(const std::string& value)
{
    idle_ = value;
    idleIsSet_ = true;
}

bool ListNodeSessionsResult_sessions::idleIsSet() const
{
    return idleIsSet_;
}

void ListNodeSessionsResult_sessions::unsetidle()
{
    idleIsSet_ = false;
}

std::string ListNodeSessionsResult_sessions::getDb() const
{
    return db_;
}

void ListNodeSessionsResult_sessions::setDb(const std::string& value)
{
    db_ = value;
    dbIsSet_ = true;
}

bool ListNodeSessionsResult_sessions::dbIsSet() const
{
    return dbIsSet_;
}

void ListNodeSessionsResult_sessions::unsetdb()
{
    dbIsSet_ = false;
}

std::string ListNodeSessionsResult_sessions::getAddr() const
{
    return addr_;
}

void ListNodeSessionsResult_sessions::setAddr(const std::string& value)
{
    addr_ = value;
    addrIsSet_ = true;
}

bool ListNodeSessionsResult_sessions::addrIsSet() const
{
    return addrIsSet_;
}

void ListNodeSessionsResult_sessions::unsetaddr()
{
    addrIsSet_ = false;
}

std::string ListNodeSessionsResult_sessions::getFd() const
{
    return fd_;
}

void ListNodeSessionsResult_sessions::setFd(const std::string& value)
{
    fd_ = value;
    fdIsSet_ = true;
}

bool ListNodeSessionsResult_sessions::fdIsSet() const
{
    return fdIsSet_;
}

void ListNodeSessionsResult_sessions::unsetfd()
{
    fdIsSet_ = false;
}

std::string ListNodeSessionsResult_sessions::getSub() const
{
    return sub_;
}

void ListNodeSessionsResult_sessions::setSub(const std::string& value)
{
    sub_ = value;
    subIsSet_ = true;
}

bool ListNodeSessionsResult_sessions::subIsSet() const
{
    return subIsSet_;
}

void ListNodeSessionsResult_sessions::unsetsub()
{
    subIsSet_ = false;
}

std::string ListNodeSessionsResult_sessions::getPsub() const
{
    return psub_;
}

void ListNodeSessionsResult_sessions::setPsub(const std::string& value)
{
    psub_ = value;
    psubIsSet_ = true;
}

bool ListNodeSessionsResult_sessions::psubIsSet() const
{
    return psubIsSet_;
}

void ListNodeSessionsResult_sessions::unsetpsub()
{
    psubIsSet_ = false;
}

std::string ListNodeSessionsResult_sessions::getMulti() const
{
    return multi_;
}

void ListNodeSessionsResult_sessions::setMulti(const std::string& value)
{
    multi_ = value;
    multiIsSet_ = true;
}

bool ListNodeSessionsResult_sessions::multiIsSet() const
{
    return multiIsSet_;
}

void ListNodeSessionsResult_sessions::unsetmulti()
{
    multiIsSet_ = false;
}

}
}
}
}
}


