

#include "huaweicloud/sdrs/v1/model/DeleteProtectionGroupResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




DeleteProtectionGroupResponse::DeleteProtectionGroupResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

DeleteProtectionGroupResponse::~DeleteProtectionGroupResponse() = default;

void DeleteProtectionGroupResponse::validate()
{
}

web::json::value DeleteProtectionGroupResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}

bool DeleteProtectionGroupResponse::fromJson(const web::json::value& val)
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


std::string DeleteProtectionGroupResponse::getJobId() const
{
    return jobId_;
}

void DeleteProtectionGroupResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool DeleteProtectionGroupResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void DeleteProtectionGroupResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


