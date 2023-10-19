

#include "huaweicloud/codeartsbuild/v3/model/DeleteBuildJobResponseBody_result.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




DeleteBuildJobResponseBody_result::DeleteBuildJobResponseBody_result()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
}

DeleteBuildJobResponseBody_result::~DeleteBuildJobResponseBody_result() = default;

void DeleteBuildJobResponseBody_result::validate()
{
}

web::json::value DeleteBuildJobResponseBody_result::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }

    return val;
}
bool DeleteBuildJobResponseBody_result::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    return ok;
}


std::string DeleteBuildJobResponseBody_result::getJobId() const
{
    return jobId_;
}

void DeleteBuildJobResponseBody_result::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool DeleteBuildJobResponseBody_result::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void DeleteBuildJobResponseBody_result::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string DeleteBuildJobResponseBody_result::getProjectId() const
{
    return projectId_;
}

void DeleteBuildJobResponseBody_result::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool DeleteBuildJobResponseBody_result::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void DeleteBuildJobResponseBody_result::unsetprojectId()
{
    projectIdIsSet_ = false;
}

}
}
}
}
}


