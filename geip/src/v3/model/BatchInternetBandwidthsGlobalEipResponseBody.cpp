

#include "huaweicloud/geip/v3/model/BatchInternetBandwidthsGlobalEipResponseBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




BatchInternetBandwidthsGlobalEipResponseBody::BatchInternetBandwidthsGlobalEipResponseBody()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

BatchInternetBandwidthsGlobalEipResponseBody::~BatchInternetBandwidthsGlobalEipResponseBody() = default;

void BatchInternetBandwidthsGlobalEipResponseBody::validate()
{
}

web::json::value BatchInternetBandwidthsGlobalEipResponseBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool BatchInternetBandwidthsGlobalEipResponseBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
        }
    }
    return ok;
}


std::string BatchInternetBandwidthsGlobalEipResponseBody::getJobId() const
{
    return jobId_;
}

void BatchInternetBandwidthsGlobalEipResponseBody::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool BatchInternetBandwidthsGlobalEipResponseBody::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void BatchInternetBandwidthsGlobalEipResponseBody::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


