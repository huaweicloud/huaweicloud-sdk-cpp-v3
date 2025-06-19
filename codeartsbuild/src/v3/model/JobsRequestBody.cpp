

#include "huaweicloud/codeartsbuild/v3/model/JobsRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




JobsRequestBody::JobsRequestBody()
{
    jobIdsIsSet_ = false;
}

JobsRequestBody::~JobsRequestBody() = default;

void JobsRequestBody::validate()
{
}

web::json::value JobsRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdsIsSet_) {
        val[utility::conversions::to_string_t("job_ids")] = ModelBase::toJson(jobIds_);
    }

    return val;
}
bool JobsRequestBody::fromJson(const web::json::value& val)
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


std::vector<std::string>& JobsRequestBody::getJobIds()
{
    return jobIds_;
}

void JobsRequestBody::setJobIds(const std::vector<std::string>& value)
{
    jobIds_ = value;
    jobIdsIsSet_ = true;
}

bool JobsRequestBody::jobIdsIsSet() const
{
    return jobIdsIsSet_;
}

void JobsRequestBody::unsetjobIds()
{
    jobIdsIsSet_ = false;
}

}
}
}
}
}


