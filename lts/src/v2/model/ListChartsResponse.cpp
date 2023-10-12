

#include "huaweicloud/lts/v2/model/ListChartsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




ListChartsResponse::ListChartsResponse()
{
    id_ = "";
    idIsSet_ = false;
    sql_ = "";
    sqlIsSet_ = false;
    title_ = "";
    titleIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    logGroupId_ = "";
    logGroupIdIsSet_ = false;
    logGroupName_ = "";
    logGroupNameIsSet_ = false;
    logStreamId_ = "";
    logStreamIdIsSet_ = false;
    logStreamName_ = "";
    logStreamNameIsSet_ = false;
    configIsSet_ = false;
}

ListChartsResponse::~ListChartsResponse() = default;

void ListChartsResponse::validate()
{
}

web::json::value ListChartsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(sqlIsSet_) {
        val[utility::conversions::to_string_t("sql")] = ModelBase::toJson(sql_);
    }
    if(titleIsSet_) {
        val[utility::conversions::to_string_t("title")] = ModelBase::toJson(title_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(logGroupIdIsSet_) {
        val[utility::conversions::to_string_t("log_group_id")] = ModelBase::toJson(logGroupId_);
    }
    if(logGroupNameIsSet_) {
        val[utility::conversions::to_string_t("log_group_name")] = ModelBase::toJson(logGroupName_);
    }
    if(logStreamIdIsSet_) {
        val[utility::conversions::to_string_t("log_stream_id")] = ModelBase::toJson(logStreamId_);
    }
    if(logStreamNameIsSet_) {
        val[utility::conversions::to_string_t("log_stream_name")] = ModelBase::toJson(logStreamName_);
    }
    if(configIsSet_) {
        val[utility::conversions::to_string_t("config")] = ModelBase::toJson(config_);
    }

    return val;
}
bool ListChartsResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("sql"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sql"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSql(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("title"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("title"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTitle(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_group_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_group_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogGroupName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_stream_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_stream_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogStreamId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_stream_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_stream_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogStreamName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("config"));
        if(!fieldValue.is_null())
        {
            ChartConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfig(refVal);
        }
    }
    return ok;
}


std::string ListChartsResponse::getId() const
{
    return id_;
}

void ListChartsResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListChartsResponse::idIsSet() const
{
    return idIsSet_;
}

void ListChartsResponse::unsetid()
{
    idIsSet_ = false;
}

std::string ListChartsResponse::getSql() const
{
    return sql_;
}

void ListChartsResponse::setSql(const std::string& value)
{
    sql_ = value;
    sqlIsSet_ = true;
}

bool ListChartsResponse::sqlIsSet() const
{
    return sqlIsSet_;
}

void ListChartsResponse::unsetsql()
{
    sqlIsSet_ = false;
}

std::string ListChartsResponse::getTitle() const
{
    return title_;
}

void ListChartsResponse::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool ListChartsResponse::titleIsSet() const
{
    return titleIsSet_;
}

void ListChartsResponse::unsettitle()
{
    titleIsSet_ = false;
}

std::string ListChartsResponse::getType() const
{
    return type_;
}

void ListChartsResponse::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ListChartsResponse::typeIsSet() const
{
    return typeIsSet_;
}

void ListChartsResponse::unsettype()
{
    typeIsSet_ = false;
}

std::string ListChartsResponse::getLogGroupId() const
{
    return logGroupId_;
}

void ListChartsResponse::setLogGroupId(const std::string& value)
{
    logGroupId_ = value;
    logGroupIdIsSet_ = true;
}

bool ListChartsResponse::logGroupIdIsSet() const
{
    return logGroupIdIsSet_;
}

void ListChartsResponse::unsetlogGroupId()
{
    logGroupIdIsSet_ = false;
}

std::string ListChartsResponse::getLogGroupName() const
{
    return logGroupName_;
}

void ListChartsResponse::setLogGroupName(const std::string& value)
{
    logGroupName_ = value;
    logGroupNameIsSet_ = true;
}

bool ListChartsResponse::logGroupNameIsSet() const
{
    return logGroupNameIsSet_;
}

void ListChartsResponse::unsetlogGroupName()
{
    logGroupNameIsSet_ = false;
}

std::string ListChartsResponse::getLogStreamId() const
{
    return logStreamId_;
}

void ListChartsResponse::setLogStreamId(const std::string& value)
{
    logStreamId_ = value;
    logStreamIdIsSet_ = true;
}

bool ListChartsResponse::logStreamIdIsSet() const
{
    return logStreamIdIsSet_;
}

void ListChartsResponse::unsetlogStreamId()
{
    logStreamIdIsSet_ = false;
}

std::string ListChartsResponse::getLogStreamName() const
{
    return logStreamName_;
}

void ListChartsResponse::setLogStreamName(const std::string& value)
{
    logStreamName_ = value;
    logStreamNameIsSet_ = true;
}

bool ListChartsResponse::logStreamNameIsSet() const
{
    return logStreamNameIsSet_;
}

void ListChartsResponse::unsetlogStreamName()
{
    logStreamNameIsSet_ = false;
}

ChartConfig ListChartsResponse::getConfig() const
{
    return config_;
}

void ListChartsResponse::setConfig(const ChartConfig& value)
{
    config_ = value;
    configIsSet_ = true;
}

bool ListChartsResponse::configIsSet() const
{
    return configIsSet_;
}

void ListChartsResponse::unsetconfig()
{
    configIsSet_ = false;
}

}
}
}
}
}


