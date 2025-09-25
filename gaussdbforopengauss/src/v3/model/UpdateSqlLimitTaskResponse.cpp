

#include "huaweicloud/gaussdbforopengauss/v3/model/UpdateSqlLimitTaskResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




UpdateSqlLimitTaskResponse::UpdateSqlLimitTaskResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

UpdateSqlLimitTaskResponse::~UpdateSqlLimitTaskResponse() = default;

void UpdateSqlLimitTaskResponse::validate()
{
}

web::json::value UpdateSqlLimitTaskResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool UpdateSqlLimitTaskResponse::fromJson(const web::json::value& val)
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


std::string UpdateSqlLimitTaskResponse::getJobId() const
{
    return jobId_;
}

void UpdateSqlLimitTaskResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool UpdateSqlLimitTaskResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void UpdateSqlLimitTaskResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


