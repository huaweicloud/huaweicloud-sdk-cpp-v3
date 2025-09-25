

#include "huaweicloud/gaussdbforopengauss/v3/model/CreateSqlLimitTaskResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




CreateSqlLimitTaskResponse::CreateSqlLimitTaskResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

CreateSqlLimitTaskResponse::~CreateSqlLimitTaskResponse() = default;

void CreateSqlLimitTaskResponse::validate()
{
}

web::json::value CreateSqlLimitTaskResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool CreateSqlLimitTaskResponse::fromJson(const web::json::value& val)
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


std::string CreateSqlLimitTaskResponse::getJobId() const
{
    return jobId_;
}

void CreateSqlLimitTaskResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool CreateSqlLimitTaskResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void CreateSqlLimitTaskResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


