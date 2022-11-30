

#include "huaweicloud/sdrs/v1/model/DeleteFailureJobRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




DeleteFailureJobRequest::DeleteFailureJobRequest()
{
    failureJobId_ = "";
    failureJobIdIsSet_ = false;
}

DeleteFailureJobRequest::~DeleteFailureJobRequest() = default;

void DeleteFailureJobRequest::validate()
{
}

web::json::value DeleteFailureJobRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(failureJobIdIsSet_) {
        val[utility::conversions::to_string_t("failure_job_id")] = ModelBase::toJson(failureJobId_);
    }

    return val;
}

bool DeleteFailureJobRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("failure_job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("failure_job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailureJobId(refVal);
        }
    }
    return ok;
}


std::string DeleteFailureJobRequest::getFailureJobId() const
{
    return failureJobId_;
}

void DeleteFailureJobRequest::setFailureJobId(const std::string& value)
{
    failureJobId_ = value;
    failureJobIdIsSet_ = true;
}

bool DeleteFailureJobRequest::failureJobIdIsSet() const
{
    return failureJobIdIsSet_;
}

void DeleteFailureJobRequest::unsetfailureJobId()
{
    failureJobIdIsSet_ = false;
}

}
}
}
}
}


