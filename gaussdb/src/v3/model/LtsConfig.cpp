

#include "huaweicloud/gaussdb/v3/model/LtsConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




LtsConfig::LtsConfig()
{
    logType_ = "";
    logTypeIsSet_ = false;
    ltsGroupId_ = "";
    ltsGroupIdIsSet_ = false;
    ltsStreamId_ = "";
    ltsStreamIdIsSet_ = false;
    enabled_ = false;
    enabledIsSet_ = false;
}

LtsConfig::~LtsConfig() = default;

void LtsConfig::validate()
{
}

web::json::value LtsConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(logTypeIsSet_) {
        val[utility::conversions::to_string_t("log_type")] = ModelBase::toJson(logType_);
    }
    if(ltsGroupIdIsSet_) {
        val[utility::conversions::to_string_t("lts_group_id")] = ModelBase::toJson(ltsGroupId_);
    }
    if(ltsStreamIdIsSet_) {
        val[utility::conversions::to_string_t("lts_stream_id")] = ModelBase::toJson(ltsStreamId_);
    }
    if(enabledIsSet_) {
        val[utility::conversions::to_string_t("enabled")] = ModelBase::toJson(enabled_);
    }

    return val;
}
bool LtsConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("log_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lts_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lts_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLtsGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lts_stream_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lts_stream_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLtsStreamId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enabled"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnabled(refVal);
        }
    }
    return ok;
}


std::string LtsConfig::getLogType() const
{
    return logType_;
}

void LtsConfig::setLogType(const std::string& value)
{
    logType_ = value;
    logTypeIsSet_ = true;
}

bool LtsConfig::logTypeIsSet() const
{
    return logTypeIsSet_;
}

void LtsConfig::unsetlogType()
{
    logTypeIsSet_ = false;
}

std::string LtsConfig::getLtsGroupId() const
{
    return ltsGroupId_;
}

void LtsConfig::setLtsGroupId(const std::string& value)
{
    ltsGroupId_ = value;
    ltsGroupIdIsSet_ = true;
}

bool LtsConfig::ltsGroupIdIsSet() const
{
    return ltsGroupIdIsSet_;
}

void LtsConfig::unsetltsGroupId()
{
    ltsGroupIdIsSet_ = false;
}

std::string LtsConfig::getLtsStreamId() const
{
    return ltsStreamId_;
}

void LtsConfig::setLtsStreamId(const std::string& value)
{
    ltsStreamId_ = value;
    ltsStreamIdIsSet_ = true;
}

bool LtsConfig::ltsStreamIdIsSet() const
{
    return ltsStreamIdIsSet_;
}

void LtsConfig::unsetltsStreamId()
{
    ltsStreamIdIsSet_ = false;
}

bool LtsConfig::isEnabled() const
{
    return enabled_;
}

void LtsConfig::setEnabled(bool value)
{
    enabled_ = value;
    enabledIsSet_ = true;
}

bool LtsConfig::enabledIsSet() const
{
    return enabledIsSet_;
}

void LtsConfig::unsetenabled()
{
    enabledIsSet_ = false;
}

}
}
}
}
}


