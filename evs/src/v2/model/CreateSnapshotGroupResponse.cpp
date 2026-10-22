

#include "huaweicloud/evs/v2/model/CreateSnapshotGroupResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




CreateSnapshotGroupResponse::CreateSnapshotGroupResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    snapshotGroupId_ = "";
    snapshotGroupIdIsSet_ = false;
}

CreateSnapshotGroupResponse::~CreateSnapshotGroupResponse() = default;

void CreateSnapshotGroupResponse::validate()
{
}

web::json::value CreateSnapshotGroupResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(snapshotGroupIdIsSet_) {
        val[utility::conversions::to_string_t("snapshot_group_id")] = ModelBase::toJson(snapshotGroupId_);
    }

    return val;
}
bool CreateSnapshotGroupResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("snapshot_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("snapshot_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSnapshotGroupId(refVal);
        }
    }
    return ok;
}


std::string CreateSnapshotGroupResponse::getJobId() const
{
    return jobId_;
}

void CreateSnapshotGroupResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool CreateSnapshotGroupResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void CreateSnapshotGroupResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string CreateSnapshotGroupResponse::getSnapshotGroupId() const
{
    return snapshotGroupId_;
}

void CreateSnapshotGroupResponse::setSnapshotGroupId(const std::string& value)
{
    snapshotGroupId_ = value;
    snapshotGroupIdIsSet_ = true;
}

bool CreateSnapshotGroupResponse::snapshotGroupIdIsSet() const
{
    return snapshotGroupIdIsSet_;
}

void CreateSnapshotGroupResponse::unsetsnapshotGroupId()
{
    snapshotGroupIdIsSet_ = false;
}

}
}
}
}
}


