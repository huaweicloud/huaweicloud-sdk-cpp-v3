

#include "huaweicloud/gaussdb/v3/model/CreateClickHouseDataBaseReplicationResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




CreateClickHouseDataBaseReplicationResponse::CreateClickHouseDataBaseReplicationResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

CreateClickHouseDataBaseReplicationResponse::~CreateClickHouseDataBaseReplicationResponse() = default;

void CreateClickHouseDataBaseReplicationResponse::validate()
{
}

web::json::value CreateClickHouseDataBaseReplicationResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool CreateClickHouseDataBaseReplicationResponse::fromJson(const web::json::value& val)
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


std::string CreateClickHouseDataBaseReplicationResponse::getJobId() const
{
    return jobId_;
}

void CreateClickHouseDataBaseReplicationResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool CreateClickHouseDataBaseReplicationResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void CreateClickHouseDataBaseReplicationResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


