

#include "huaweicloud/ecs/v2/model/BatchDetachVolumesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




BatchDetachVolumesResponse::BatchDetachVolumesResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

BatchDetachVolumesResponse::~BatchDetachVolumesResponse() = default;

void BatchDetachVolumesResponse::validate()
{
}

web::json::value BatchDetachVolumesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool BatchDetachVolumesResponse::fromJson(const web::json::value& val)
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


std::string BatchDetachVolumesResponse::getJobId() const
{
    return jobId_;
}

void BatchDetachVolumesResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool BatchDetachVolumesResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void BatchDetachVolumesResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


