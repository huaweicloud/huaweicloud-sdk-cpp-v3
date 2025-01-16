

#include "huaweicloud/gaussdb/v3/model/UpgradeSrKernelVersionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpgradeSrKernelVersionResponse::UpgradeSrKernelVersionResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

UpgradeSrKernelVersionResponse::~UpgradeSrKernelVersionResponse() = default;

void UpgradeSrKernelVersionResponse::validate()
{
}

web::json::value UpgradeSrKernelVersionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool UpgradeSrKernelVersionResponse::fromJson(const web::json::value& val)
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


std::string UpgradeSrKernelVersionResponse::getJobId() const
{
    return jobId_;
}

void UpgradeSrKernelVersionResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool UpgradeSrKernelVersionResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void UpgradeSrKernelVersionResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


