

#include "huaweicloud/sdrs/v1/model/DeleteReplicationResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




DeleteReplicationResponse::DeleteReplicationResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

DeleteReplicationResponse::~DeleteReplicationResponse() = default;

void DeleteReplicationResponse::validate()
{
}

web::json::value DeleteReplicationResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool DeleteReplicationResponse::fromJson(const web::json::value& val)
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


std::string DeleteReplicationResponse::getJobId() const
{
    return jobId_;
}

void DeleteReplicationResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool DeleteReplicationResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void DeleteReplicationResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


