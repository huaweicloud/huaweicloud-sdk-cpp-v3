

#include "huaweicloud/live/v1/model/UpdateHarvestJobStatusRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




UpdateHarvestJobStatusRequestBody::UpdateHarvestJobStatusRequestBody()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

UpdateHarvestJobStatusRequestBody::~UpdateHarvestJobStatusRequestBody() = default;

void UpdateHarvestJobStatusRequestBody::validate()
{
}

web::json::value UpdateHarvestJobStatusRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool UpdateHarvestJobStatusRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string UpdateHarvestJobStatusRequestBody::getJobId() const
{
    return jobId_;
}

void UpdateHarvestJobStatusRequestBody::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool UpdateHarvestJobStatusRequestBody::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void UpdateHarvestJobStatusRequestBody::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string UpdateHarvestJobStatusRequestBody::getStatus() const
{
    return status_;
}

void UpdateHarvestJobStatusRequestBody::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UpdateHarvestJobStatusRequestBody::statusIsSet() const
{
    return statusIsSet_;
}

void UpdateHarvestJobStatusRequestBody::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


