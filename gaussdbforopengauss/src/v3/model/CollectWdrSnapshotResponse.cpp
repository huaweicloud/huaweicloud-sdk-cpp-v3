

#include "huaweicloud/gaussdbforopengauss/v3/model/CollectWdrSnapshotResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




CollectWdrSnapshotResponse::CollectWdrSnapshotResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

CollectWdrSnapshotResponse::~CollectWdrSnapshotResponse() = default;

void CollectWdrSnapshotResponse::validate()
{
}

web::json::value CollectWdrSnapshotResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool CollectWdrSnapshotResponse::fromJson(const web::json::value& val)
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


std::string CollectWdrSnapshotResponse::getJobId() const
{
    return jobId_;
}

void CollectWdrSnapshotResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool CollectWdrSnapshotResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void CollectWdrSnapshotResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


