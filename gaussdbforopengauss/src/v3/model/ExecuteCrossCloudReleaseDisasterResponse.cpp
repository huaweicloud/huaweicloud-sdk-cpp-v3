

#include "huaweicloud/gaussdbforopengauss/v3/model/ExecuteCrossCloudReleaseDisasterResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ExecuteCrossCloudReleaseDisasterResponse::ExecuteCrossCloudReleaseDisasterResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

ExecuteCrossCloudReleaseDisasterResponse::~ExecuteCrossCloudReleaseDisasterResponse() = default;

void ExecuteCrossCloudReleaseDisasterResponse::validate()
{
}

web::json::value ExecuteCrossCloudReleaseDisasterResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool ExecuteCrossCloudReleaseDisasterResponse::fromJson(const web::json::value& val)
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


std::string ExecuteCrossCloudReleaseDisasterResponse::getJobId() const
{
    return jobId_;
}

void ExecuteCrossCloudReleaseDisasterResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ExecuteCrossCloudReleaseDisasterResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ExecuteCrossCloudReleaseDisasterResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


