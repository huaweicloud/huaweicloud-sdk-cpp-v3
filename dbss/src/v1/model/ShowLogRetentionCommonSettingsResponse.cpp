

#include "huaweicloud/dbss/v1/model/ShowLogRetentionCommonSettingsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ShowLogRetentionCommonSettingsResponse::ShowLogRetentionCommonSettingsResponse()
{
    logRetentionIsSet_ = false;
    dataUsageLimit_ = 0;
    dataUsageLimitIsSet_ = false;
}

ShowLogRetentionCommonSettingsResponse::~ShowLogRetentionCommonSettingsResponse() = default;

void ShowLogRetentionCommonSettingsResponse::validate()
{
}

web::json::value ShowLogRetentionCommonSettingsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(logRetentionIsSet_) {
        val[utility::conversions::to_string_t("log_retention")] = ModelBase::toJson(logRetention_);
    }
    if(dataUsageLimitIsSet_) {
        val[utility::conversions::to_string_t("data_usage_limit")] = ModelBase::toJson(dataUsageLimit_);
    }

    return val;
}
bool ShowLogRetentionCommonSettingsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("log_retention"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_retention"));
        if(!fieldValue.is_null())
        {
            CommonSettingsResponse_log_retention refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogRetention(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data_usage_limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_usage_limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataUsageLimit(refVal);
        }
    }
    return ok;
}


CommonSettingsResponse_log_retention ShowLogRetentionCommonSettingsResponse::getLogRetention() const
{
    return logRetention_;
}

void ShowLogRetentionCommonSettingsResponse::setLogRetention(const CommonSettingsResponse_log_retention& value)
{
    logRetention_ = value;
    logRetentionIsSet_ = true;
}

bool ShowLogRetentionCommonSettingsResponse::logRetentionIsSet() const
{
    return logRetentionIsSet_;
}

void ShowLogRetentionCommonSettingsResponse::unsetlogRetention()
{
    logRetentionIsSet_ = false;
}

int32_t ShowLogRetentionCommonSettingsResponse::getDataUsageLimit() const
{
    return dataUsageLimit_;
}

void ShowLogRetentionCommonSettingsResponse::setDataUsageLimit(int32_t value)
{
    dataUsageLimit_ = value;
    dataUsageLimitIsSet_ = true;
}

bool ShowLogRetentionCommonSettingsResponse::dataUsageLimitIsSet() const
{
    return dataUsageLimitIsSet_;
}

void ShowLogRetentionCommonSettingsResponse::unsetdataUsageLimit()
{
    dataUsageLimitIsSet_ = false;
}

}
}
}
}
}


