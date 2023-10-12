

#include "huaweicloud/ims/v2/model/CopyImageCrossRegionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




CopyImageCrossRegionResponse::CopyImageCrossRegionResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

CopyImageCrossRegionResponse::~CopyImageCrossRegionResponse() = default;

void CopyImageCrossRegionResponse::validate()
{
}

web::json::value CopyImageCrossRegionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool CopyImageCrossRegionResponse::fromJson(const web::json::value& val)
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


std::string CopyImageCrossRegionResponse::getJobId() const
{
    return jobId_;
}

void CopyImageCrossRegionResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool CopyImageCrossRegionResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void CopyImageCrossRegionResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


