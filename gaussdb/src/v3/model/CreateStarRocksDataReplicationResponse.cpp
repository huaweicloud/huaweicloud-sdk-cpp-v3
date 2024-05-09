

#include "huaweicloud/gaussdb/v3/model/CreateStarRocksDataReplicationResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




CreateStarRocksDataReplicationResponse::CreateStarRocksDataReplicationResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

CreateStarRocksDataReplicationResponse::~CreateStarRocksDataReplicationResponse() = default;

void CreateStarRocksDataReplicationResponse::validate()
{
}

web::json::value CreateStarRocksDataReplicationResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool CreateStarRocksDataReplicationResponse::fromJson(const web::json::value& val)
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


std::string CreateStarRocksDataReplicationResponse::getJobId() const
{
    return jobId_;
}

void CreateStarRocksDataReplicationResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool CreateStarRocksDataReplicationResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void CreateStarRocksDataReplicationResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


