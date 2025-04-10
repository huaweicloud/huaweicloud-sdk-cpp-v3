

#include "huaweicloud/gaussdbforopengauss/v3/model/ExecuteCrossCloudDisasterDataCacheStartResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ExecuteCrossCloudDisasterDataCacheStartResponse::ExecuteCrossCloudDisasterDataCacheStartResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

ExecuteCrossCloudDisasterDataCacheStartResponse::~ExecuteCrossCloudDisasterDataCacheStartResponse() = default;

void ExecuteCrossCloudDisasterDataCacheStartResponse::validate()
{
}

web::json::value ExecuteCrossCloudDisasterDataCacheStartResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool ExecuteCrossCloudDisasterDataCacheStartResponse::fromJson(const web::json::value& val)
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


std::string ExecuteCrossCloudDisasterDataCacheStartResponse::getJobId() const
{
    return jobId_;
}

void ExecuteCrossCloudDisasterDataCacheStartResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ExecuteCrossCloudDisasterDataCacheStartResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ExecuteCrossCloudDisasterDataCacheStartResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


