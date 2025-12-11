

#include "huaweicloud/gaussdb/v3/model/SetAutoSqlLimitingResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




SetAutoSqlLimitingResponse::SetAutoSqlLimitingResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

SetAutoSqlLimitingResponse::~SetAutoSqlLimitingResponse() = default;

void SetAutoSqlLimitingResponse::validate()
{
}

web::json::value SetAutoSqlLimitingResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool SetAutoSqlLimitingResponse::fromJson(const web::json::value& val)
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


std::string SetAutoSqlLimitingResponse::getJobId() const
{
    return jobId_;
}

void SetAutoSqlLimitingResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool SetAutoSqlLimitingResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void SetAutoSqlLimitingResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


