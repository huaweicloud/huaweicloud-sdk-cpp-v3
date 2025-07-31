

#include "huaweicloud/ims/v2/model/CopyImageInRegionInSafeModeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




CopyImageInRegionInSafeModeResponse::CopyImageInRegionInSafeModeResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

CopyImageInRegionInSafeModeResponse::~CopyImageInRegionInSafeModeResponse() = default;

void CopyImageInRegionInSafeModeResponse::validate()
{
}

web::json::value CopyImageInRegionInSafeModeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool CopyImageInRegionInSafeModeResponse::fromJson(const web::json::value& val)
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


std::string CopyImageInRegionInSafeModeResponse::getJobId() const
{
    return jobId_;
}

void CopyImageInRegionInSafeModeResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool CopyImageInRegionInSafeModeResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void CopyImageInRegionInSafeModeResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


