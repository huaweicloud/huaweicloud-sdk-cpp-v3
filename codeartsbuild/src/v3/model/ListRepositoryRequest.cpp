

#include "huaweicloud/codeartsbuild/v3/model/ListRepositoryRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ListRepositoryRequest::ListRepositoryRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

ListRepositoryRequest::~ListRepositoryRequest() = default;

void ListRepositoryRequest::validate()
{
}

web::json::value ListRepositoryRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool ListRepositoryRequest::fromJson(const web::json::value& val)
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


std::string ListRepositoryRequest::getJobId() const
{
    return jobId_;
}

void ListRepositoryRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ListRepositoryRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ListRepositoryRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


