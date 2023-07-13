

#include "huaweicloud/evs/v2/model/DeleteVolumeResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




DeleteVolumeResponse::DeleteVolumeResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

DeleteVolumeResponse::~DeleteVolumeResponse() = default;

void DeleteVolumeResponse::validate()
{
}

web::json::value DeleteVolumeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}

bool DeleteVolumeResponse::fromJson(const web::json::value& val)
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

std::string DeleteVolumeResponse::getJobId() const
{
    return jobId_;
}

void DeleteVolumeResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool DeleteVolumeResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void DeleteVolumeResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


