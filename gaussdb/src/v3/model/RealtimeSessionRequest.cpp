

#include "huaweicloud/gaussdb/v3/model/RealtimeSessionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




RealtimeSessionRequest::RealtimeSessionRequest()
{
    filter_ = "";
    filterIsSet_ = false;
    slowProcessThreshold_ = 0;
    slowProcessThresholdIsSet_ = false;
    user_ = "";
    userIsSet_ = false;
    host_ = "";
    hostIsSet_ = false;
    db_ = "";
    dbIsSet_ = false;
    command_ = "";
    commandIsSet_ = false;
    sqlKey_ = "";
    sqlKeyIsSet_ = false;
    sortKey_ = "";
    sortKeyIsSet_ = false;
    sortDir_ = "";
    sortDirIsSet_ = false;
}

RealtimeSessionRequest::~RealtimeSessionRequest() = default;

void RealtimeSessionRequest::validate()
{
}

web::json::value RealtimeSessionRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(filterIsSet_) {
        val[utility::conversions::to_string_t("filter")] = ModelBase::toJson(filter_);
    }
    if(slowProcessThresholdIsSet_) {
        val[utility::conversions::to_string_t("slow_process_threshold")] = ModelBase::toJson(slowProcessThreshold_);
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
    if(sqlKeyIsSet_) {
        val[utility::conversions::to_string_t("sql_key")] = ModelBase::toJson(sqlKey_);
    }
    if(sortKeyIsSet_) {
        val[utility::conversions::to_string_t("sort_key")] = ModelBase::toJson(sortKey_);
    }
    if(sortDirIsSet_) {
        val[utility::conversions::to_string_t("sort_dir")] = ModelBase::toJson(sortDir_);
    }

    return val;
}
bool RealtimeSessionRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("filter"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("filter"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFilter(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("slow_process_threshold"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("slow_process_threshold"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSlowProcessThreshold(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("sql_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sql_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSqlKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort_dir"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_dir"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortDir(refVal);
        }
    }
    return ok;
}


std::string RealtimeSessionRequest::getFilter() const
{
    return filter_;
}

void RealtimeSessionRequest::setFilter(const std::string& value)
{
    filter_ = value;
    filterIsSet_ = true;
}

bool RealtimeSessionRequest::filterIsSet() const
{
    return filterIsSet_;
}

void RealtimeSessionRequest::unsetfilter()
{
    filterIsSet_ = false;
}

int32_t RealtimeSessionRequest::getSlowProcessThreshold() const
{
    return slowProcessThreshold_;
}

void RealtimeSessionRequest::setSlowProcessThreshold(int32_t value)
{
    slowProcessThreshold_ = value;
    slowProcessThresholdIsSet_ = true;
}

bool RealtimeSessionRequest::slowProcessThresholdIsSet() const
{
    return slowProcessThresholdIsSet_;
}

void RealtimeSessionRequest::unsetslowProcessThreshold()
{
    slowProcessThresholdIsSet_ = false;
}

std::string RealtimeSessionRequest::getUser() const
{
    return user_;
}

void RealtimeSessionRequest::setUser(const std::string& value)
{
    user_ = value;
    userIsSet_ = true;
}

bool RealtimeSessionRequest::userIsSet() const
{
    return userIsSet_;
}

void RealtimeSessionRequest::unsetuser()
{
    userIsSet_ = false;
}

std::string RealtimeSessionRequest::getHost() const
{
    return host_;
}

void RealtimeSessionRequest::setHost(const std::string& value)
{
    host_ = value;
    hostIsSet_ = true;
}

bool RealtimeSessionRequest::hostIsSet() const
{
    return hostIsSet_;
}

void RealtimeSessionRequest::unsethost()
{
    hostIsSet_ = false;
}

std::string RealtimeSessionRequest::getDb() const
{
    return db_;
}

void RealtimeSessionRequest::setDb(const std::string& value)
{
    db_ = value;
    dbIsSet_ = true;
}

bool RealtimeSessionRequest::dbIsSet() const
{
    return dbIsSet_;
}

void RealtimeSessionRequest::unsetdb()
{
    dbIsSet_ = false;
}

std::string RealtimeSessionRequest::getCommand() const
{
    return command_;
}

void RealtimeSessionRequest::setCommand(const std::string& value)
{
    command_ = value;
    commandIsSet_ = true;
}

bool RealtimeSessionRequest::commandIsSet() const
{
    return commandIsSet_;
}

void RealtimeSessionRequest::unsetcommand()
{
    commandIsSet_ = false;
}

std::string RealtimeSessionRequest::getSqlKey() const
{
    return sqlKey_;
}

void RealtimeSessionRequest::setSqlKey(const std::string& value)
{
    sqlKey_ = value;
    sqlKeyIsSet_ = true;
}

bool RealtimeSessionRequest::sqlKeyIsSet() const
{
    return sqlKeyIsSet_;
}

void RealtimeSessionRequest::unsetsqlKey()
{
    sqlKeyIsSet_ = false;
}

std::string RealtimeSessionRequest::getSortKey() const
{
    return sortKey_;
}

void RealtimeSessionRequest::setSortKey(const std::string& value)
{
    sortKey_ = value;
    sortKeyIsSet_ = true;
}

bool RealtimeSessionRequest::sortKeyIsSet() const
{
    return sortKeyIsSet_;
}

void RealtimeSessionRequest::unsetsortKey()
{
    sortKeyIsSet_ = false;
}

std::string RealtimeSessionRequest::getSortDir() const
{
    return sortDir_;
}

void RealtimeSessionRequest::setSortDir(const std::string& value)
{
    sortDir_ = value;
    sortDirIsSet_ = true;
}

bool RealtimeSessionRequest::sortDirIsSet() const
{
    return sortDirIsSet_;
}

void RealtimeSessionRequest::unsetsortDir()
{
    sortDirIsSet_ = false;
}

}
}
}
}
}


