

#include "huaweicloud/evs/v2/model/DeleteStandardSnapshotResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




DeleteStandardSnapshotResponse::DeleteStandardSnapshotResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

DeleteStandardSnapshotResponse::~DeleteStandardSnapshotResponse() = default;

void DeleteStandardSnapshotResponse::validate()
{
}

web::json::value DeleteStandardSnapshotResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool DeleteStandardSnapshotResponse::fromJson(const web::json::value& val)
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


std::string DeleteStandardSnapshotResponse::getJobId() const
{
    return jobId_;
}

void DeleteStandardSnapshotResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool DeleteStandardSnapshotResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void DeleteStandardSnapshotResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


