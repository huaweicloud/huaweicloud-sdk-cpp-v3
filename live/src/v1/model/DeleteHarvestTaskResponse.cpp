

#include "huaweicloud/live/v1/model/DeleteHarvestTaskResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




DeleteHarvestTaskResponse::DeleteHarvestTaskResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

DeleteHarvestTaskResponse::~DeleteHarvestTaskResponse() = default;

void DeleteHarvestTaskResponse::validate()
{
}

web::json::value DeleteHarvestTaskResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool DeleteHarvestTaskResponse::fromJson(const web::json::value& val)
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


std::string DeleteHarvestTaskResponse::getJobId() const
{
    return jobId_;
}

void DeleteHarvestTaskResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool DeleteHarvestTaskResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void DeleteHarvestTaskResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


