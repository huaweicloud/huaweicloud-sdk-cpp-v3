

#include "huaweicloud/gaussdbfornosql/v3/model/InstanceLogConfigDetail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




InstanceLogConfigDetail::InstanceLogConfigDetail()
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

InstanceLogConfigDetail::~InstanceLogConfigDetail() = default;

void InstanceLogConfigDetail::validate()
{
}

web::json::value InstanceLogConfigDetail::toJson() const
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
bool InstanceLogConfigDetail::fromJson(const web::json::value& val)
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


std::string InstanceLogConfigDetail::getLogType() const
{
    return logType_;
}

void InstanceLogConfigDetail::setLogType(const std::string& value)
{
    logType_ = value;
    logTypeIsSet_ = true;
}

bool InstanceLogConfigDetail::logTypeIsSet() const
{
    return logTypeIsSet_;
}

void InstanceLogConfigDetail::unsetlogType()
{
    logTypeIsSet_ = false;
}

std::string InstanceLogConfigDetail::getLtsGroupId() const
{
    return ltsGroupId_;
}

void InstanceLogConfigDetail::setLtsGroupId(const std::string& value)
{
    ltsGroupId_ = value;
    ltsGroupIdIsSet_ = true;
}

bool InstanceLogConfigDetail::ltsGroupIdIsSet() const
{
    return ltsGroupIdIsSet_;
}

void InstanceLogConfigDetail::unsetltsGroupId()
{
    ltsGroupIdIsSet_ = false;
}

std::string InstanceLogConfigDetail::getLtsStreamId() const
{
    return ltsStreamId_;
}

void InstanceLogConfigDetail::setLtsStreamId(const std::string& value)
{
    ltsStreamId_ = value;
    ltsStreamIdIsSet_ = true;
}

bool InstanceLogConfigDetail::ltsStreamIdIsSet() const
{
    return ltsStreamIdIsSet_;
}

void InstanceLogConfigDetail::unsetltsStreamId()
{
    ltsStreamIdIsSet_ = false;
}

bool InstanceLogConfigDetail::isEnabled() const
{
    return enabled_;
}

void InstanceLogConfigDetail::setEnabled(bool value)
{
    enabled_ = value;
    enabledIsSet_ = true;
}

bool InstanceLogConfigDetail::enabledIsSet() const
{
    return enabledIsSet_;
}

void InstanceLogConfigDetail::unsetenabled()
{
    enabledIsSet_ = false;
}

}
}
}
}
}


