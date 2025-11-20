

#include "huaweicloud/rds/v3/model/SyncReplicationMetadataResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SyncReplicationMetadataResponse::SyncReplicationMetadataResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

SyncReplicationMetadataResponse::~SyncReplicationMetadataResponse() = default;

void SyncReplicationMetadataResponse::validate()
{
}

web::json::value SyncReplicationMetadataResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool SyncReplicationMetadataResponse::fromJson(const web::json::value& val)
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


std::string SyncReplicationMetadataResponse::getJobId() const
{
    return jobId_;
}

void SyncReplicationMetadataResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool SyncReplicationMetadataResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void SyncReplicationMetadataResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


