

#include "huaweicloud/rgc/v1/model/AccessLoggingBucketBaseline.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




AccessLoggingBucketBaseline::AccessLoggingBucketBaseline()
{
    retentionDays_ = 0;
    retentionDaysIsSet_ = false;
    enableMultiAz_ = false;
    enableMultiAzIsSet_ = false;
}

AccessLoggingBucketBaseline::~AccessLoggingBucketBaseline() = default;

void AccessLoggingBucketBaseline::validate()
{
}

web::json::value AccessLoggingBucketBaseline::toJson() const
{
    web::json::value val = web::json::value::object();

    if(retentionDaysIsSet_) {
        val[utility::conversions::to_string_t("retention_days")] = ModelBase::toJson(retentionDays_);
    }
    if(enableMultiAzIsSet_) {
        val[utility::conversions::to_string_t("enable_multi_az")] = ModelBase::toJson(enableMultiAz_);
    }

    return val;
}
bool AccessLoggingBucketBaseline::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("retention_days"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("retention_days"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRetentionDays(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enable_multi_az"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable_multi_az"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableMultiAz(refVal);
        }
    }
    return ok;
}


int32_t AccessLoggingBucketBaseline::getRetentionDays() const
{
    return retentionDays_;
}

void AccessLoggingBucketBaseline::setRetentionDays(int32_t value)
{
    retentionDays_ = value;
    retentionDaysIsSet_ = true;
}

bool AccessLoggingBucketBaseline::retentionDaysIsSet() const
{
    return retentionDaysIsSet_;
}

void AccessLoggingBucketBaseline::unsetretentionDays()
{
    retentionDaysIsSet_ = false;
}

bool AccessLoggingBucketBaseline::isEnableMultiAz() const
{
    return enableMultiAz_;
}

void AccessLoggingBucketBaseline::setEnableMultiAz(bool value)
{
    enableMultiAz_ = value;
    enableMultiAzIsSet_ = true;
}

bool AccessLoggingBucketBaseline::enableMultiAzIsSet() const
{
    return enableMultiAzIsSet_;
}

void AccessLoggingBucketBaseline::unsetenableMultiAz()
{
    enableMultiAzIsSet_ = false;
}

}
}
}
}
}


