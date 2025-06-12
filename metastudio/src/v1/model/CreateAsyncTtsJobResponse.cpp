

#include "huaweicloud/metastudio/v1/model/CreateAsyncTtsJobResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateAsyncTtsJobResponse::CreateAsyncTtsJobResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

CreateAsyncTtsJobResponse::~CreateAsyncTtsJobResponse() = default;

void CreateAsyncTtsJobResponse::validate()
{
}

web::json::value CreateAsyncTtsJobResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool CreateAsyncTtsJobResponse::fromJson(const web::json::value& val)
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


std::string CreateAsyncTtsJobResponse::getJobId() const
{
    return jobId_;
}

void CreateAsyncTtsJobResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool CreateAsyncTtsJobResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void CreateAsyncTtsJobResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


