

#include "huaweicloud/gaussdb/v3/model/UpdateClickHouseDataBaseConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpdateClickHouseDataBaseConfigResponse::UpdateClickHouseDataBaseConfigResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

UpdateClickHouseDataBaseConfigResponse::~UpdateClickHouseDataBaseConfigResponse() = default;

void UpdateClickHouseDataBaseConfigResponse::validate()
{
}

web::json::value UpdateClickHouseDataBaseConfigResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool UpdateClickHouseDataBaseConfigResponse::fromJson(const web::json::value& val)
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


std::string UpdateClickHouseDataBaseConfigResponse::getJobId() const
{
    return jobId_;
}

void UpdateClickHouseDataBaseConfigResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool UpdateClickHouseDataBaseConfigResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void UpdateClickHouseDataBaseConfigResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


