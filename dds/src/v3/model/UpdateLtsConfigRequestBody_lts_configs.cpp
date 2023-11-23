

#include "huaweicloud/dds/v3/model/UpdateLtsConfigRequestBody_lts_configs.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




UpdateLtsConfigRequestBody_lts_configs::UpdateLtsConfigRequestBody_lts_configs()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    logTypeIsSet_ = false;
    ltsGroupId_ = "";
    ltsGroupIdIsSet_ = false;
    ltsStreamId_ = "";
    ltsStreamIdIsSet_ = false;
}

UpdateLtsConfigRequestBody_lts_configs::~UpdateLtsConfigRequestBody_lts_configs() = default;

void UpdateLtsConfigRequestBody_lts_configs::validate()
{
}

web::json::value UpdateLtsConfigRequestBody_lts_configs::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(logTypeIsSet_) {
        val[utility::conversions::to_string_t("log_type")] = ModelBase::toJson(logType_);
    }
    if(ltsGroupIdIsSet_) {
        val[utility::conversions::to_string_t("lts_group_id")] = ModelBase::toJson(ltsGroupId_);
    }
    if(ltsStreamIdIsSet_) {
        val[utility::conversions::to_string_t("lts_stream_id")] = ModelBase::toJson(ltsStreamId_);
    }

    return val;
}
bool UpdateLtsConfigRequestBody_lts_configs::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
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
    return ok;
}


std::string UpdateLtsConfigRequestBody_lts_configs::getInstanceId() const
{
    return instanceId_;
}

void UpdateLtsConfigRequestBody_lts_configs::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateLtsConfigRequestBody_lts_configs::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateLtsConfigRequestBody_lts_configs::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

LtsLogType UpdateLtsConfigRequestBody_lts_configs::getLogType() const
{
    return logType_;
}

void UpdateLtsConfigRequestBody_lts_configs::setLogType(const LtsLogType& value)
{
    logType_ = value;
    logTypeIsSet_ = true;
}

bool UpdateLtsConfigRequestBody_lts_configs::logTypeIsSet() const
{
    return logTypeIsSet_;
}

void UpdateLtsConfigRequestBody_lts_configs::unsetlogType()
{
    logTypeIsSet_ = false;
}

std::string UpdateLtsConfigRequestBody_lts_configs::getLtsGroupId() const
{
    return ltsGroupId_;
}

void UpdateLtsConfigRequestBody_lts_configs::setLtsGroupId(const std::string& value)
{
    ltsGroupId_ = value;
    ltsGroupIdIsSet_ = true;
}

bool UpdateLtsConfigRequestBody_lts_configs::ltsGroupIdIsSet() const
{
    return ltsGroupIdIsSet_;
}

void UpdateLtsConfigRequestBody_lts_configs::unsetltsGroupId()
{
    ltsGroupIdIsSet_ = false;
}

std::string UpdateLtsConfigRequestBody_lts_configs::getLtsStreamId() const
{
    return ltsStreamId_;
}

void UpdateLtsConfigRequestBody_lts_configs::setLtsStreamId(const std::string& value)
{
    ltsStreamId_ = value;
    ltsStreamIdIsSet_ = true;
}

bool UpdateLtsConfigRequestBody_lts_configs::ltsStreamIdIsSet() const
{
    return ltsStreamIdIsSet_;
}

void UpdateLtsConfigRequestBody_lts_configs::unsetltsStreamId()
{
    ltsStreamIdIsSet_ = false;
}

}
}
}
}
}


