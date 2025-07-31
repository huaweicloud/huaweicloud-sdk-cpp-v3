

#include "huaweicloud/ims/v2/model/CreateImageInSafeModeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




CreateImageInSafeModeResponse::CreateImageInSafeModeResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

CreateImageInSafeModeResponse::~CreateImageInSafeModeResponse() = default;

void CreateImageInSafeModeResponse::validate()
{
}

web::json::value CreateImageInSafeModeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool CreateImageInSafeModeResponse::fromJson(const web::json::value& val)
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


std::string CreateImageInSafeModeResponse::getJobId() const
{
    return jobId_;
}

void CreateImageInSafeModeResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool CreateImageInSafeModeResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void CreateImageInSafeModeResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


