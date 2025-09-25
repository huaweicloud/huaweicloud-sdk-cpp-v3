

#include "huaweicloud/codeartsbuild/v3/model/RemoverFavouriteTaskRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




RemoverFavouriteTaskRequest::RemoverFavouriteTaskRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

RemoverFavouriteTaskRequest::~RemoverFavouriteTaskRequest() = default;

void RemoverFavouriteTaskRequest::validate()
{
}

web::json::value RemoverFavouriteTaskRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool RemoverFavouriteTaskRequest::fromJson(const web::json::value& val)
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


std::string RemoverFavouriteTaskRequest::getJobId() const
{
    return jobId_;
}

void RemoverFavouriteTaskRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool RemoverFavouriteTaskRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void RemoverFavouriteTaskRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


