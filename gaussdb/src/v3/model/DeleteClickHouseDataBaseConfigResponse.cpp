

#include "huaweicloud/gaussdb/v3/model/DeleteClickHouseDataBaseConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




DeleteClickHouseDataBaseConfigResponse::DeleteClickHouseDataBaseConfigResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

DeleteClickHouseDataBaseConfigResponse::~DeleteClickHouseDataBaseConfigResponse() = default;

void DeleteClickHouseDataBaseConfigResponse::validate()
{
}

web::json::value DeleteClickHouseDataBaseConfigResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool DeleteClickHouseDataBaseConfigResponse::fromJson(const web::json::value& val)
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


std::string DeleteClickHouseDataBaseConfigResponse::getJobId() const
{
    return jobId_;
}

void DeleteClickHouseDataBaseConfigResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool DeleteClickHouseDataBaseConfigResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void DeleteClickHouseDataBaseConfigResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


