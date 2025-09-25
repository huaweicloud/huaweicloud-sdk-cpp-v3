

#include "huaweicloud/gaussdbforopengauss/v3/model/StartFullSqlResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




StartFullSqlResponse::StartFullSqlResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

StartFullSqlResponse::~StartFullSqlResponse() = default;

void StartFullSqlResponse::validate()
{
}

web::json::value StartFullSqlResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool StartFullSqlResponse::fromJson(const web::json::value& val)
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


std::string StartFullSqlResponse::getJobId() const
{
    return jobId_;
}

void StartFullSqlResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool StartFullSqlResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void StartFullSqlResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


