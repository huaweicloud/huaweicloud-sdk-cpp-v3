

#include "huaweicloud/codeartsbuild/v3/model/CreateBuildJobResponseBody_result.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




CreateBuildJobResponseBody_result::CreateBuildJobResponseBody_result()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

CreateBuildJobResponseBody_result::~CreateBuildJobResponseBody_result() = default;

void CreateBuildJobResponseBody_result::validate()
{
}

web::json::value CreateBuildJobResponseBody_result::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool CreateBuildJobResponseBody_result::fromJson(const web::json::value& val)
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


std::string CreateBuildJobResponseBody_result::getJobId() const
{
    return jobId_;
}

void CreateBuildJobResponseBody_result::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool CreateBuildJobResponseBody_result::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void CreateBuildJobResponseBody_result::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


