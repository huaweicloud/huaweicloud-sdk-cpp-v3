

#include "huaweicloud/codeartsbuild/v3/model/DeleteTheJobRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




DeleteTheJobRequest::DeleteTheJobRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

DeleteTheJobRequest::~DeleteTheJobRequest() = default;

void DeleteTheJobRequest::validate()
{
}

web::json::value DeleteTheJobRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool DeleteTheJobRequest::fromJson(const web::json::value& val)
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


std::string DeleteTheJobRequest::getJobId() const
{
    return jobId_;
}

void DeleteTheJobRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool DeleteTheJobRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void DeleteTheJobRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


