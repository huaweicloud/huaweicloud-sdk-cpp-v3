

#include "huaweicloud/gaussdbforopengauss/v3/model/ConfirmRestoredDataResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ConfirmRestoredDataResponse::ConfirmRestoredDataResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

ConfirmRestoredDataResponse::~ConfirmRestoredDataResponse() = default;

void ConfirmRestoredDataResponse::validate()
{
}

web::json::value ConfirmRestoredDataResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool ConfirmRestoredDataResponse::fromJson(const web::json::value& val)
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


std::string ConfirmRestoredDataResponse::getJobId() const
{
    return jobId_;
}

void ConfirmRestoredDataResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ConfirmRestoredDataResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ConfirmRestoredDataResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


