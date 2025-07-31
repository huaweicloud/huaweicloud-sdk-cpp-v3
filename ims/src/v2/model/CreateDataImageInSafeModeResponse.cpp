

#include "huaweicloud/ims/v2/model/CreateDataImageInSafeModeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




CreateDataImageInSafeModeResponse::CreateDataImageInSafeModeResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

CreateDataImageInSafeModeResponse::~CreateDataImageInSafeModeResponse() = default;

void CreateDataImageInSafeModeResponse::validate()
{
}

web::json::value CreateDataImageInSafeModeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool CreateDataImageInSafeModeResponse::fromJson(const web::json::value& val)
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


std::string CreateDataImageInSafeModeResponse::getJobId() const
{
    return jobId_;
}

void CreateDataImageInSafeModeResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool CreateDataImageInSafeModeResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void CreateDataImageInSafeModeResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


