

#include "huaweicloud/modelarts/v1/model/LtsConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




LtsConfig::LtsConfig()
{
    status_ = "";
    statusIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    logGroupId_ = "";
    logGroupIdIsSet_ = false;
    logStreamId_ = "";
    logStreamIdIsSet_ = false;
}

LtsConfig::~LtsConfig() = default;

void LtsConfig::validate()
{
}

web::json::value LtsConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(logGroupIdIsSet_) {
        val[utility::conversions::to_string_t("log_group_id")] = ModelBase::toJson(logGroupId_);
    }
    if(logStreamIdIsSet_) {
        val[utility::conversions::to_string_t("log_stream_id")] = ModelBase::toJson(logStreamId_);
    }

    return val;
}
bool LtsConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("log_stream_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_stream_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogStreamId(refVal);
        }
    }
    return ok;
}


std::string LtsConfig::getStatus() const
{
    return status_;
}

void LtsConfig::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool LtsConfig::statusIsSet() const
{
    return statusIsSet_;
}

void LtsConfig::unsetstatus()
{
    statusIsSet_ = false;
}

std::string LtsConfig::getType() const
{
    return type_;
}

void LtsConfig::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool LtsConfig::typeIsSet() const
{
    return typeIsSet_;
}

void LtsConfig::unsettype()
{
    typeIsSet_ = false;
}

std::string LtsConfig::getLogGroupId() const
{
    return logGroupId_;
}

void LtsConfig::setLogGroupId(const std::string& value)
{
    logGroupId_ = value;
    logGroupIdIsSet_ = true;
}

bool LtsConfig::logGroupIdIsSet() const
{
    return logGroupIdIsSet_;
}

void LtsConfig::unsetlogGroupId()
{
    logGroupIdIsSet_ = false;
}

std::string LtsConfig::getLogStreamId() const
{
    return logStreamId_;
}

void LtsConfig::setLogStreamId(const std::string& value)
{
    logStreamId_ = value;
    logStreamIdIsSet_ = true;
}

bool LtsConfig::logStreamIdIsSet() const
{
    return logStreamIdIsSet_;
}

void LtsConfig::unsetlogStreamId()
{
    logStreamIdIsSet_ = false;
}

}
}
}
}
}


