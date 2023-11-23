

#include "huaweicloud/dds/v3/model/ListLtsLogPolicyRespondBody_lts_configs.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ListLtsLogPolicyRespondBody_lts_configs::ListLtsLogPolicyRespondBody_lts_configs()
{
    logTypeIsSet_ = false;
    ltsGroupId_ = "";
    ltsGroupIdIsSet_ = false;
    ltsStreamId_ = "";
    ltsStreamIdIsSet_ = false;
    enabled_ = false;
    enabledIsSet_ = false;
}

ListLtsLogPolicyRespondBody_lts_configs::~ListLtsLogPolicyRespondBody_lts_configs() = default;

void ListLtsLogPolicyRespondBody_lts_configs::validate()
{
}

web::json::value ListLtsLogPolicyRespondBody_lts_configs::toJson() const
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
bool ListLtsLogPolicyRespondBody_lts_configs::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("log_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_type"));
        if(!fieldValue.is_null())
        {
            LtsLogType refVal;
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


LtsLogType ListLtsLogPolicyRespondBody_lts_configs::getLogType() const
{
    return logType_;
}

void ListLtsLogPolicyRespondBody_lts_configs::setLogType(const LtsLogType& value)
{
    logType_ = value;
    logTypeIsSet_ = true;
}

bool ListLtsLogPolicyRespondBody_lts_configs::logTypeIsSet() const
{
    return logTypeIsSet_;
}

void ListLtsLogPolicyRespondBody_lts_configs::unsetlogType()
{
    logTypeIsSet_ = false;
}

std::string ListLtsLogPolicyRespondBody_lts_configs::getLtsGroupId() const
{
    return ltsGroupId_;
}

void ListLtsLogPolicyRespondBody_lts_configs::setLtsGroupId(const std::string& value)
{
    ltsGroupId_ = value;
    ltsGroupIdIsSet_ = true;
}

bool ListLtsLogPolicyRespondBody_lts_configs::ltsGroupIdIsSet() const
{
    return ltsGroupIdIsSet_;
}

void ListLtsLogPolicyRespondBody_lts_configs::unsetltsGroupId()
{
    ltsGroupIdIsSet_ = false;
}

std::string ListLtsLogPolicyRespondBody_lts_configs::getLtsStreamId() const
{
    return ltsStreamId_;
}

void ListLtsLogPolicyRespondBody_lts_configs::setLtsStreamId(const std::string& value)
{
    ltsStreamId_ = value;
    ltsStreamIdIsSet_ = true;
}

bool ListLtsLogPolicyRespondBody_lts_configs::ltsStreamIdIsSet() const
{
    return ltsStreamIdIsSet_;
}

void ListLtsLogPolicyRespondBody_lts_configs::unsetltsStreamId()
{
    ltsStreamIdIsSet_ = false;
}

bool ListLtsLogPolicyRespondBody_lts_configs::isEnabled() const
{
    return enabled_;
}

void ListLtsLogPolicyRespondBody_lts_configs::setEnabled(bool value)
{
    enabled_ = value;
    enabledIsSet_ = true;
}

bool ListLtsLogPolicyRespondBody_lts_configs::enabledIsSet() const
{
    return enabledIsSet_;
}

void ListLtsLogPolicyRespondBody_lts_configs::unsetenabled()
{
    enabledIsSet_ = false;
}

}
}
}
}
}


