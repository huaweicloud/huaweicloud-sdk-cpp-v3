

#include "huaweicloud/gaussdbforopengauss/v3/model/StopFullSqlResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




StopFullSqlResponse::StopFullSqlResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

StopFullSqlResponse::~StopFullSqlResponse() = default;

void StopFullSqlResponse::validate()
{
}

web::json::value StopFullSqlResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool StopFullSqlResponse::fromJson(const web::json::value& val)
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


std::string StopFullSqlResponse::getJobId() const
{
    return jobId_;
}

void StopFullSqlResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool StopFullSqlResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void StopFullSqlResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


