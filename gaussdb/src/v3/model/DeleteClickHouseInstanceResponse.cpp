

#include "huaweicloud/gaussdb/v3/model/DeleteClickHouseInstanceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




DeleteClickHouseInstanceResponse::DeleteClickHouseInstanceResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

DeleteClickHouseInstanceResponse::~DeleteClickHouseInstanceResponse() = default;

void DeleteClickHouseInstanceResponse::validate()
{
}

web::json::value DeleteClickHouseInstanceResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool DeleteClickHouseInstanceResponse::fromJson(const web::json::value& val)
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


std::string DeleteClickHouseInstanceResponse::getJobId() const
{
    return jobId_;
}

void DeleteClickHouseInstanceResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool DeleteClickHouseInstanceResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void DeleteClickHouseInstanceResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


