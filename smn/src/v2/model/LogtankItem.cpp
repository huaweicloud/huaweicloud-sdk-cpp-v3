

#include "huaweicloud/smn/v2/model/LogtankItem.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




LogtankItem::LogtankItem()
{
    id_ = "";
    idIsSet_ = false;
    logGroupId_ = "";
    logGroupIdIsSet_ = false;
    logStreamId_ = "";
    logStreamIdIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    updateTime_ = "";
    updateTimeIsSet_ = false;
}

LogtankItem::~LogtankItem() = default;

void LogtankItem::validate()
{
}

web::json::value LogtankItem::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(logGroupIdIsSet_) {
        val[utility::conversions::to_string_t("log_group_id")] = ModelBase::toJson(logGroupId_);
    }
    if(logStreamIdIsSet_) {
        val[utility::conversions::to_string_t("log_stream_id")] = ModelBase::toJson(logStreamId_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }

    return val;
}

bool LogtankItem::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("log_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogGroupId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
        }
    }
    return ok;
}

std::string LogtankItem::getId() const
{
    return id_;
}

void LogtankItem::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool LogtankItem::idIsSet() const
{
    return idIsSet_;
}

void LogtankItem::unsetid()
{
    idIsSet_ = false;
}

std::string LogtankItem::getLogGroupId() const
{
    return logGroupId_;
}

void LogtankItem::setLogGroupId(const std::string& value)
{
    logGroupId_ = value;
    logGroupIdIsSet_ = true;
}

bool LogtankItem::logGroupIdIsSet() const
{
    return logGroupIdIsSet_;
}

void LogtankItem::unsetlogGroupId()
{
    logGroupIdIsSet_ = false;
}

std::string LogtankItem::getLogStreamId() const
{
    return logStreamId_;
}

void LogtankItem::setLogStreamId(const std::string& value)
{
    logStreamId_ = value;
    logStreamIdIsSet_ = true;
}

bool LogtankItem::logStreamIdIsSet() const
{
    return logStreamIdIsSet_;
}

void LogtankItem::unsetlogStreamId()
{
    logStreamIdIsSet_ = false;
}

std::string LogtankItem::getCreateTime() const
{
    return createTime_;
}

void LogtankItem::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool LogtankItem::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void LogtankItem::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string LogtankItem::getUpdateTime() const
{
    return updateTime_;
}

void LogtankItem::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool LogtankItem::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void LogtankItem::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

}
}
}
}
}


