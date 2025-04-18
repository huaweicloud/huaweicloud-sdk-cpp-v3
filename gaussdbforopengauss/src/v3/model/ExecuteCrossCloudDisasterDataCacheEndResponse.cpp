

#include "huaweicloud/gaussdbforopengauss/v3/model/ExecuteCrossCloudDisasterDataCacheEndResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ExecuteCrossCloudDisasterDataCacheEndResponse::ExecuteCrossCloudDisasterDataCacheEndResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

ExecuteCrossCloudDisasterDataCacheEndResponse::~ExecuteCrossCloudDisasterDataCacheEndResponse() = default;

void ExecuteCrossCloudDisasterDataCacheEndResponse::validate()
{
}

web::json::value ExecuteCrossCloudDisasterDataCacheEndResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool ExecuteCrossCloudDisasterDataCacheEndResponse::fromJson(const web::json::value& val)
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


std::string ExecuteCrossCloudDisasterDataCacheEndResponse::getJobId() const
{
    return jobId_;
}

void ExecuteCrossCloudDisasterDataCacheEndResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ExecuteCrossCloudDisasterDataCacheEndResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ExecuteCrossCloudDisasterDataCacheEndResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


