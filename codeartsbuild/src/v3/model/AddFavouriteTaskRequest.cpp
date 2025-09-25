

#include "huaweicloud/codeartsbuild/v3/model/AddFavouriteTaskRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




AddFavouriteTaskRequest::AddFavouriteTaskRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

AddFavouriteTaskRequest::~AddFavouriteTaskRequest() = default;

void AddFavouriteTaskRequest::validate()
{
}

web::json::value AddFavouriteTaskRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool AddFavouriteTaskRequest::fromJson(const web::json::value& val)
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


std::string AddFavouriteTaskRequest::getJobId() const
{
    return jobId_;
}

void AddFavouriteTaskRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool AddFavouriteTaskRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void AddFavouriteTaskRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


