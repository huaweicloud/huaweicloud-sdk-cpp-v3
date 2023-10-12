

#include "huaweicloud/ecs/v2/model/BatchAttachSharableVolumesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




BatchAttachSharableVolumesResponse::BatchAttachSharableVolumesResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

BatchAttachSharableVolumesResponse::~BatchAttachSharableVolumesResponse() = default;

void BatchAttachSharableVolumesResponse::validate()
{
}

web::json::value BatchAttachSharableVolumesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool BatchAttachSharableVolumesResponse::fromJson(const web::json::value& val)
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


std::string BatchAttachSharableVolumesResponse::getJobId() const
{
    return jobId_;
}

void BatchAttachSharableVolumesResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool BatchAttachSharableVolumesResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void BatchAttachSharableVolumesResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


