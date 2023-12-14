

#include "huaweicloud/cfw/v1/model/ListJobRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListJobRequest::ListJobRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

ListJobRequest::~ListJobRequest() = default;

void ListJobRequest::validate()
{
}

web::json::value ListJobRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool ListJobRequest::fromJson(const web::json::value& val)
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


std::string ListJobRequest::getJobId() const
{
    return jobId_;
}

void ListJobRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ListJobRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ListJobRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


