

#include "huaweicloud/sdrs/v1/model/CreateProtectionGroupResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




CreateProtectionGroupResponse::CreateProtectionGroupResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

CreateProtectionGroupResponse::~CreateProtectionGroupResponse() = default;

void CreateProtectionGroupResponse::validate()
{
}

web::json::value CreateProtectionGroupResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}

bool CreateProtectionGroupResponse::fromJson(const web::json::value& val)
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


std::string CreateProtectionGroupResponse::getJobId() const
{
    return jobId_;
}

void CreateProtectionGroupResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool CreateProtectionGroupResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void CreateProtectionGroupResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


