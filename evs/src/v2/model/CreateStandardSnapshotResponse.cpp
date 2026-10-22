

#include "huaweicloud/evs/v2/model/CreateStandardSnapshotResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




CreateStandardSnapshotResponse::CreateStandardSnapshotResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    snapshotId_ = "";
    snapshotIdIsSet_ = false;
}

CreateStandardSnapshotResponse::~CreateStandardSnapshotResponse() = default;

void CreateStandardSnapshotResponse::validate()
{
}

web::json::value CreateStandardSnapshotResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(snapshotIdIsSet_) {
        val[utility::conversions::to_string_t("snapshot_id")] = ModelBase::toJson(snapshotId_);
    }

    return val;
}
bool CreateStandardSnapshotResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("snapshot_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("snapshot_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSnapshotId(refVal);
        }
    }
    return ok;
}


std::string CreateStandardSnapshotResponse::getJobId() const
{
    return jobId_;
}

void CreateStandardSnapshotResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool CreateStandardSnapshotResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void CreateStandardSnapshotResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string CreateStandardSnapshotResponse::getSnapshotId() const
{
    return snapshotId_;
}

void CreateStandardSnapshotResponse::setSnapshotId(const std::string& value)
{
    snapshotId_ = value;
    snapshotIdIsSet_ = true;
}

bool CreateStandardSnapshotResponse::snapshotIdIsSet() const
{
    return snapshotIdIsSet_;
}

void CreateStandardSnapshotResponse::unsetsnapshotId()
{
    snapshotIdIsSet_ = false;
}

}
}
}
}
}


