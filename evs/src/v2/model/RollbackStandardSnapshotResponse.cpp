

#include "huaweicloud/evs/v2/model/RollbackStandardSnapshotResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




RollbackStandardSnapshotResponse::RollbackStandardSnapshotResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

RollbackStandardSnapshotResponse::~RollbackStandardSnapshotResponse() = default;

void RollbackStandardSnapshotResponse::validate()
{
}

web::json::value RollbackStandardSnapshotResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool RollbackStandardSnapshotResponse::fromJson(const web::json::value& val)
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


std::string RollbackStandardSnapshotResponse::getJobId() const
{
    return jobId_;
}

void RollbackStandardSnapshotResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool RollbackStandardSnapshotResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void RollbackStandardSnapshotResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


