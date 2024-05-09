

#include "huaweicloud/gaussdb/v3/model/DeleteStarRocksDataReplicationResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




DeleteStarRocksDataReplicationResponse::DeleteStarRocksDataReplicationResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

DeleteStarRocksDataReplicationResponse::~DeleteStarRocksDataReplicationResponse() = default;

void DeleteStarRocksDataReplicationResponse::validate()
{
}

web::json::value DeleteStarRocksDataReplicationResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool DeleteStarRocksDataReplicationResponse::fromJson(const web::json::value& val)
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


std::string DeleteStarRocksDataReplicationResponse::getJobId() const
{
    return jobId_;
}

void DeleteStarRocksDataReplicationResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool DeleteStarRocksDataReplicationResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void DeleteStarRocksDataReplicationResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


