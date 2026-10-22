

#include "huaweicloud/evs/v2/model/DeleteSnapshotGroupResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




DeleteSnapshotGroupResponse::DeleteSnapshotGroupResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

DeleteSnapshotGroupResponse::~DeleteSnapshotGroupResponse() = default;

void DeleteSnapshotGroupResponse::validate()
{
}

web::json::value DeleteSnapshotGroupResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool DeleteSnapshotGroupResponse::fromJson(const web::json::value& val)
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


std::string DeleteSnapshotGroupResponse::getJobId() const
{
    return jobId_;
}

void DeleteSnapshotGroupResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool DeleteSnapshotGroupResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void DeleteSnapshotGroupResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


