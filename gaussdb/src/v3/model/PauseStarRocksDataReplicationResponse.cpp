

#include "huaweicloud/gaussdb/v3/model/PauseStarRocksDataReplicationResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




PauseStarRocksDataReplicationResponse::PauseStarRocksDataReplicationResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

PauseStarRocksDataReplicationResponse::~PauseStarRocksDataReplicationResponse() = default;

void PauseStarRocksDataReplicationResponse::validate()
{
}

web::json::value PauseStarRocksDataReplicationResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool PauseStarRocksDataReplicationResponse::fromJson(const web::json::value& val)
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


std::string PauseStarRocksDataReplicationResponse::getJobId() const
{
    return jobId_;
}

void PauseStarRocksDataReplicationResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool PauseStarRocksDataReplicationResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void PauseStarRocksDataReplicationResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


