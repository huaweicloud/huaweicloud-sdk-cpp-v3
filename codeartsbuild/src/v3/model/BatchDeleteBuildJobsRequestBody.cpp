

#include "huaweicloud/codeartsbuild/v3/model/BatchDeleteBuildJobsRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




BatchDeleteBuildJobsRequestBody::BatchDeleteBuildJobsRequestBody()
{
    jobIdsIsSet_ = false;
}

BatchDeleteBuildJobsRequestBody::~BatchDeleteBuildJobsRequestBody() = default;

void BatchDeleteBuildJobsRequestBody::validate()
{
}

web::json::value BatchDeleteBuildJobsRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdsIsSet_) {
        val[utility::conversions::to_string_t("job_ids")] = ModelBase::toJson(jobIds_);
    }

    return val;
}
bool BatchDeleteBuildJobsRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("job_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobIds(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& BatchDeleteBuildJobsRequestBody::getJobIds()
{
    return jobIds_;
}

void BatchDeleteBuildJobsRequestBody::setJobIds(const std::vector<std::string>& value)
{
    jobIds_ = value;
    jobIdsIsSet_ = true;
}

bool BatchDeleteBuildJobsRequestBody::jobIdsIsSet() const
{
    return jobIdsIsSet_;
}

void BatchDeleteBuildJobsRequestBody::unsetjobIds()
{
    jobIdsIsSet_ = false;
}

}
}
}
}
}


