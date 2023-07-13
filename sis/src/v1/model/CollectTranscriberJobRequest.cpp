

#include "huaweicloud/sis/v1/model/CollectTranscriberJobRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sis {
namespace V1 {
namespace Model {




CollectTranscriberJobRequest::CollectTranscriberJobRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

CollectTranscriberJobRequest::~CollectTranscriberJobRequest() = default;

void CollectTranscriberJobRequest::validate()
{
}

web::json::value CollectTranscriberJobRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}

bool CollectTranscriberJobRequest::fromJson(const web::json::value& val)
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

std::string CollectTranscriberJobRequest::getJobId() const
{
    return jobId_;
}

void CollectTranscriberJobRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool CollectTranscriberJobRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void CollectTranscriberJobRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


