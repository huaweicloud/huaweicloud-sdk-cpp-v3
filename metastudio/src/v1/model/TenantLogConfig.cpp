

#include "huaweicloud/metastudio/v1/model/TenantLogConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




TenantLogConfig::TenantLogConfig()
{
    logGroupId_ = "";
    logGroupIdIsSet_ = false;
    logStreamId_ = "";
    logStreamIdIsSet_ = false;
}

TenantLogConfig::~TenantLogConfig() = default;

void TenantLogConfig::validate()
{
}

web::json::value TenantLogConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(logGroupIdIsSet_) {
        val[utility::conversions::to_string_t("log_group_id")] = ModelBase::toJson(logGroupId_);
    }
    if(logStreamIdIsSet_) {
        val[utility::conversions::to_string_t("log_stream_id")] = ModelBase::toJson(logStreamId_);
    }

    return val;
}
bool TenantLogConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


std::string TenantLogConfig::getLogGroupId() const
{
    return logGroupId_;
}

void TenantLogConfig::setLogGroupId(const std::string& value)
{
    logGroupId_ = value;
    logGroupIdIsSet_ = true;
}

bool TenantLogConfig::logGroupIdIsSet() const
{
    return logGroupIdIsSet_;
}

void TenantLogConfig::unsetlogGroupId()
{
    logGroupIdIsSet_ = false;
}

std::string TenantLogConfig::getLogStreamId() const
{
    return logStreamId_;
}

void TenantLogConfig::setLogStreamId(const std::string& value)
{
    logStreamId_ = value;
    logStreamIdIsSet_ = true;
}

bool TenantLogConfig::logStreamIdIsSet() const
{
    return logStreamIdIsSet_;
}

void TenantLogConfig::unsetlogStreamId()
{
    logStreamIdIsSet_ = false;
}

}
}
}
}
}


