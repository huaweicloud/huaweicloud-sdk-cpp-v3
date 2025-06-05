

#include "huaweicloud/codeartsbuild/v3/model/CheckJobNameIsExistsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




CheckJobNameIsExistsRequest::CheckJobNameIsExistsRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    jobName_ = "";
    jobNameIsSet_ = false;
}

CheckJobNameIsExistsRequest::~CheckJobNameIsExistsRequest() = default;

void CheckJobNameIsExistsRequest::validate()
{
}

web::json::value CheckJobNameIsExistsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(jobNameIsSet_) {
        val[utility::conversions::to_string_t("job_name")] = ModelBase::toJson(jobName_);
    }

    return val;
}
bool CheckJobNameIsExistsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobName(refVal);
        }
    }
    return ok;
}


std::string CheckJobNameIsExistsRequest::getProjectId() const
{
    return projectId_;
}

void CheckJobNameIsExistsRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool CheckJobNameIsExistsRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void CheckJobNameIsExistsRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string CheckJobNameIsExistsRequest::getJobName() const
{
    return jobName_;
}

void CheckJobNameIsExistsRequest::setJobName(const std::string& value)
{
    jobName_ = value;
    jobNameIsSet_ = true;
}

bool CheckJobNameIsExistsRequest::jobNameIsSet() const
{
    return jobNameIsSet_;
}

void CheckJobNameIsExistsRequest::unsetjobName()
{
    jobNameIsSet_ = false;
}

}
}
}
}
}


