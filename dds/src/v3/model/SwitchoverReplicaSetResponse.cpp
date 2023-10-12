

#include "huaweicloud/dds/v3/model/SwitchoverReplicaSetResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




SwitchoverReplicaSetResponse::SwitchoverReplicaSetResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

SwitchoverReplicaSetResponse::~SwitchoverReplicaSetResponse() = default;

void SwitchoverReplicaSetResponse::validate()
{
}

web::json::value SwitchoverReplicaSetResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool SwitchoverReplicaSetResponse::fromJson(const web::json::value& val)
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


std::string SwitchoverReplicaSetResponse::getJobId() const
{
    return jobId_;
}

void SwitchoverReplicaSetResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool SwitchoverReplicaSetResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void SwitchoverReplicaSetResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


