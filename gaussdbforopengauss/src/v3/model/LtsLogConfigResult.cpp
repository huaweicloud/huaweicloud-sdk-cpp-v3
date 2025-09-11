

#include "huaweicloud/gaussdbforopengauss/v3/model/LtsLogConfigResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




LtsLogConfigResult::LtsLogConfigResult()
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

LtsLogConfigResult::~LtsLogConfigResult() = default;

void LtsLogConfigResult::validate()
{
}

web::json::value LtsLogConfigResult::toJson() const
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
bool LtsLogConfigResult::fromJson(const web::json::value& val)
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


std::string LtsLogConfigResult::getLogType() const
{
    return logType_;
}

void LtsLogConfigResult::setLogType(const std::string& value)
{
    logType_ = value;
    logTypeIsSet_ = true;
}

bool LtsLogConfigResult::logTypeIsSet() const
{
    return logTypeIsSet_;
}

void LtsLogConfigResult::unsetlogType()
{
    logTypeIsSet_ = false;
}

std::string LtsLogConfigResult::getLtsGroupId() const
{
    return ltsGroupId_;
}

void LtsLogConfigResult::setLtsGroupId(const std::string& value)
{
    ltsGroupId_ = value;
    ltsGroupIdIsSet_ = true;
}

bool LtsLogConfigResult::ltsGroupIdIsSet() const
{
    return ltsGroupIdIsSet_;
}

void LtsLogConfigResult::unsetltsGroupId()
{
    ltsGroupIdIsSet_ = false;
}

std::string LtsLogConfigResult::getLtsStreamId() const
{
    return ltsStreamId_;
}

void LtsLogConfigResult::setLtsStreamId(const std::string& value)
{
    ltsStreamId_ = value;
    ltsStreamIdIsSet_ = true;
}

bool LtsLogConfigResult::ltsStreamIdIsSet() const
{
    return ltsStreamIdIsSet_;
}

void LtsLogConfigResult::unsetltsStreamId()
{
    ltsStreamIdIsSet_ = false;
}

bool LtsLogConfigResult::isEnabled() const
{
    return enabled_;
}

void LtsLogConfigResult::setEnabled(bool value)
{
    enabled_ = value;
    enabledIsSet_ = true;
}

bool LtsLogConfigResult::enabledIsSet() const
{
    return enabledIsSet_;
}

void LtsLogConfigResult::unsetenabled()
{
    enabledIsSet_ = false;
}

}
}
}
}
}


