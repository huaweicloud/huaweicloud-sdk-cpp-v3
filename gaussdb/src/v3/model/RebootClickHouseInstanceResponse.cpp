

#include "huaweicloud/gaussdb/v3/model/RebootClickHouseInstanceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




RebootClickHouseInstanceResponse::RebootClickHouseInstanceResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

RebootClickHouseInstanceResponse::~RebootClickHouseInstanceResponse() = default;

void RebootClickHouseInstanceResponse::validate()
{
}

web::json::value RebootClickHouseInstanceResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool RebootClickHouseInstanceResponse::fromJson(const web::json::value& val)
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


std::string RebootClickHouseInstanceResponse::getJobId() const
{
    return jobId_;
}

void RebootClickHouseInstanceResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool RebootClickHouseInstanceResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void RebootClickHouseInstanceResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


