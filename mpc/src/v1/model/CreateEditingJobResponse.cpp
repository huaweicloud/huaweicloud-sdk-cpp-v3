

#include "huaweicloud/mpc/v1/model/CreateEditingJobResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




CreateEditingJobResponse::CreateEditingJobResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

CreateEditingJobResponse::~CreateEditingJobResponse() = default;

void CreateEditingJobResponse::validate()
{
}

web::json::value CreateEditingJobResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}

bool CreateEditingJobResponse::fromJson(const web::json::value& val)
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

std::string CreateEditingJobResponse::getJobId() const
{
    return jobId_;
}

void CreateEditingJobResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool CreateEditingJobResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void CreateEditingJobResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


