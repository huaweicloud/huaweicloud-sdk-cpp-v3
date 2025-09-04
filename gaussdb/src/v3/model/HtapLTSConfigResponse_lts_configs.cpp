

#include "huaweicloud/gaussdb/v3/model/HtapLTSConfigResponse_lts_configs.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




HtapLTSConfigResponse_lts_configs::HtapLTSConfigResponse_lts_configs()
{
    logType_ = "";
    logTypeIsSet_ = false;
    ltsGroupId_ = "";
    ltsGroupIdIsSet_ = false;
    ltsStreamId_ = "";
    ltsStreamIdIsSet_ = false;
    enabled_ = "";
    enabledIsSet_ = false;
}

HtapLTSConfigResponse_lts_configs::~HtapLTSConfigResponse_lts_configs() = default;

void HtapLTSConfigResponse_lts_configs::validate()
{
}

web::json::value HtapLTSConfigResponse_lts_configs::toJson() const
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
bool HtapLTSConfigResponse_lts_configs::fromJson(const web::json::value& val)
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
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnabled(refVal);
        }
    }
    return ok;
}


std::string HtapLTSConfigResponse_lts_configs::getLogType() const
{
    return logType_;
}

void HtapLTSConfigResponse_lts_configs::setLogType(const std::string& value)
{
    logType_ = value;
    logTypeIsSet_ = true;
}

bool HtapLTSConfigResponse_lts_configs::logTypeIsSet() const
{
    return logTypeIsSet_;
}

void HtapLTSConfigResponse_lts_configs::unsetlogType()
{
    logTypeIsSet_ = false;
}

std::string HtapLTSConfigResponse_lts_configs::getLtsGroupId() const
{
    return ltsGroupId_;
}

void HtapLTSConfigResponse_lts_configs::setLtsGroupId(const std::string& value)
{
    ltsGroupId_ = value;
    ltsGroupIdIsSet_ = true;
}

bool HtapLTSConfigResponse_lts_configs::ltsGroupIdIsSet() const
{
    return ltsGroupIdIsSet_;
}

void HtapLTSConfigResponse_lts_configs::unsetltsGroupId()
{
    ltsGroupIdIsSet_ = false;
}

std::string HtapLTSConfigResponse_lts_configs::getLtsStreamId() const
{
    return ltsStreamId_;
}

void HtapLTSConfigResponse_lts_configs::setLtsStreamId(const std::string& value)
{
    ltsStreamId_ = value;
    ltsStreamIdIsSet_ = true;
}

bool HtapLTSConfigResponse_lts_configs::ltsStreamIdIsSet() const
{
    return ltsStreamIdIsSet_;
}

void HtapLTSConfigResponse_lts_configs::unsetltsStreamId()
{
    ltsStreamIdIsSet_ = false;
}

std::string HtapLTSConfigResponse_lts_configs::getEnabled() const
{
    return enabled_;
}

void HtapLTSConfigResponse_lts_configs::setEnabled(const std::string& value)
{
    enabled_ = value;
    enabledIsSet_ = true;
}

bool HtapLTSConfigResponse_lts_configs::enabledIsSet() const
{
    return enabledIsSet_;
}

void HtapLTSConfigResponse_lts_configs::unsetenabled()
{
    enabledIsSet_ = false;
}

}
}
}
}
}


