

#include "huaweicloud/gaussdb/v3/model/CreateChLtsConfigRequestBody_log_configs.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




CreateChLtsConfigRequestBody_log_configs::CreateChLtsConfigRequestBody_log_configs()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    logType_ = "";
    logTypeIsSet_ = false;
    ltsGroupId_ = "";
    ltsGroupIdIsSet_ = false;
    ltsStreamId_ = "";
    ltsStreamIdIsSet_ = false;
}

CreateChLtsConfigRequestBody_log_configs::~CreateChLtsConfigRequestBody_log_configs() = default;

void CreateChLtsConfigRequestBody_log_configs::validate()
{
}

web::json::value CreateChLtsConfigRequestBody_log_configs::toJson() const
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
bool CreateChLtsConfigRequestBody_log_configs::fromJson(const web::json::value& val)
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
    return ok;
}


std::string CreateChLtsConfigRequestBody_log_configs::getInstanceId() const
{
    return instanceId_;
}

void CreateChLtsConfigRequestBody_log_configs::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CreateChLtsConfigRequestBody_log_configs::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CreateChLtsConfigRequestBody_log_configs::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string CreateChLtsConfigRequestBody_log_configs::getLogType() const
{
    return logType_;
}

void CreateChLtsConfigRequestBody_log_configs::setLogType(const std::string& value)
{
    logType_ = value;
    logTypeIsSet_ = true;
}

bool CreateChLtsConfigRequestBody_log_configs::logTypeIsSet() const
{
    return logTypeIsSet_;
}

void CreateChLtsConfigRequestBody_log_configs::unsetlogType()
{
    logTypeIsSet_ = false;
}

std::string CreateChLtsConfigRequestBody_log_configs::getLtsGroupId() const
{
    return ltsGroupId_;
}

void CreateChLtsConfigRequestBody_log_configs::setLtsGroupId(const std::string& value)
{
    ltsGroupId_ = value;
    ltsGroupIdIsSet_ = true;
}

bool CreateChLtsConfigRequestBody_log_configs::ltsGroupIdIsSet() const
{
    return ltsGroupIdIsSet_;
}

void CreateChLtsConfigRequestBody_log_configs::unsetltsGroupId()
{
    ltsGroupIdIsSet_ = false;
}

std::string CreateChLtsConfigRequestBody_log_configs::getLtsStreamId() const
{
    return ltsStreamId_;
}

void CreateChLtsConfigRequestBody_log_configs::setLtsStreamId(const std::string& value)
{
    ltsStreamId_ = value;
    ltsStreamIdIsSet_ = true;
}

bool CreateChLtsConfigRequestBody_log_configs::ltsStreamIdIsSet() const
{
    return ltsStreamIdIsSet_;
}

void CreateChLtsConfigRequestBody_log_configs::unsetltsStreamId()
{
    ltsStreamIdIsSet_ = false;
}

}
}
}
}
}


