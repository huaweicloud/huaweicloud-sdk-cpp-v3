

#include "huaweicloud/gaussdb/v3/model/ResizeClickHouseInstanceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ResizeClickHouseInstanceResponse::ResizeClickHouseInstanceResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

ResizeClickHouseInstanceResponse::~ResizeClickHouseInstanceResponse() = default;

void ResizeClickHouseInstanceResponse::validate()
{
}

web::json::value ResizeClickHouseInstanceResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool ResizeClickHouseInstanceResponse::fromJson(const web::json::value& val)
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


std::string ResizeClickHouseInstanceResponse::getJobId() const
{
    return jobId_;
}

void ResizeClickHouseInstanceResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ResizeClickHouseInstanceResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ResizeClickHouseInstanceResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


