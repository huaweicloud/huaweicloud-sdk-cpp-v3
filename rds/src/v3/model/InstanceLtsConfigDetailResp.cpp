

#include "huaweicloud/rds/v3/model/InstanceLtsConfigDetailResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




InstanceLtsConfigDetailResp::InstanceLtsConfigDetailResp()
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

InstanceLtsConfigDetailResp::~InstanceLtsConfigDetailResp() = default;

void InstanceLtsConfigDetailResp::validate()
{
}

web::json::value InstanceLtsConfigDetailResp::toJson() const
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
bool InstanceLtsConfigDetailResp::fromJson(const web::json::value& val)
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


std::string InstanceLtsConfigDetailResp::getLogType() const
{
    return logType_;
}

void InstanceLtsConfigDetailResp::setLogType(const std::string& value)
{
    logType_ = value;
    logTypeIsSet_ = true;
}

bool InstanceLtsConfigDetailResp::logTypeIsSet() const
{
    return logTypeIsSet_;
}

void InstanceLtsConfigDetailResp::unsetlogType()
{
    logTypeIsSet_ = false;
}

std::string InstanceLtsConfigDetailResp::getLtsGroupId() const
{
    return ltsGroupId_;
}

void InstanceLtsConfigDetailResp::setLtsGroupId(const std::string& value)
{
    ltsGroupId_ = value;
    ltsGroupIdIsSet_ = true;
}

bool InstanceLtsConfigDetailResp::ltsGroupIdIsSet() const
{
    return ltsGroupIdIsSet_;
}

void InstanceLtsConfigDetailResp::unsetltsGroupId()
{
    ltsGroupIdIsSet_ = false;
}

std::string InstanceLtsConfigDetailResp::getLtsStreamId() const
{
    return ltsStreamId_;
}

void InstanceLtsConfigDetailResp::setLtsStreamId(const std::string& value)
{
    ltsStreamId_ = value;
    ltsStreamIdIsSet_ = true;
}

bool InstanceLtsConfigDetailResp::ltsStreamIdIsSet() const
{
    return ltsStreamIdIsSet_;
}

void InstanceLtsConfigDetailResp::unsetltsStreamId()
{
    ltsStreamIdIsSet_ = false;
}

bool InstanceLtsConfigDetailResp::isEnabled() const
{
    return enabled_;
}

void InstanceLtsConfigDetailResp::setEnabled(bool value)
{
    enabled_ = value;
    enabledIsSet_ = true;
}

bool InstanceLtsConfigDetailResp::enabledIsSet() const
{
    return enabledIsSet_;
}

void InstanceLtsConfigDetailResp::unsetenabled()
{
    enabledIsSet_ = false;
}

}
}
}
}
}


