

#include "huaweicloud/rds/v3/model/NotifyReplaceNodeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




NotifyReplaceNodeResponse::NotifyReplaceNodeResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

NotifyReplaceNodeResponse::~NotifyReplaceNodeResponse() = default;

void NotifyReplaceNodeResponse::validate()
{
}

web::json::value NotifyReplaceNodeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool NotifyReplaceNodeResponse::fromJson(const web::json::value& val)
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


std::string NotifyReplaceNodeResponse::getJobId() const
{
    return jobId_;
}

void NotifyReplaceNodeResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool NotifyReplaceNodeResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void NotifyReplaceNodeResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


