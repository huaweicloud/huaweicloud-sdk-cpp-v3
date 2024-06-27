

#include "huaweicloud/gaussdb/v3/model/DeleteClickHouseDataBaseReplicationResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




DeleteClickHouseDataBaseReplicationResponse::DeleteClickHouseDataBaseReplicationResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

DeleteClickHouseDataBaseReplicationResponse::~DeleteClickHouseDataBaseReplicationResponse() = default;

void DeleteClickHouseDataBaseReplicationResponse::validate()
{
}

web::json::value DeleteClickHouseDataBaseReplicationResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool DeleteClickHouseDataBaseReplicationResponse::fromJson(const web::json::value& val)
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


std::string DeleteClickHouseDataBaseReplicationResponse::getJobId() const
{
    return jobId_;
}

void DeleteClickHouseDataBaseReplicationResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool DeleteClickHouseDataBaseReplicationResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void DeleteClickHouseDataBaseReplicationResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


