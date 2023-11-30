

#include "huaweicloud/rds/v3/model/UpdateTdeStatusResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




UpdateTdeStatusResponse::UpdateTdeStatusResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

UpdateTdeStatusResponse::~UpdateTdeStatusResponse() = default;

void UpdateTdeStatusResponse::validate()
{
}

web::json::value UpdateTdeStatusResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool UpdateTdeStatusResponse::fromJson(const web::json::value& val)
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


std::string UpdateTdeStatusResponse::getJobId() const
{
    return jobId_;
}

void UpdateTdeStatusResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool UpdateTdeStatusResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void UpdateTdeStatusResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


