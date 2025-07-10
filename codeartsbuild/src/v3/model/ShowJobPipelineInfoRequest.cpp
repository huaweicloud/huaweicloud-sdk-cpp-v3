

#include "huaweicloud/codeartsbuild/v3/model/ShowJobPipelineInfoRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowJobPipelineInfoRequest::ShowJobPipelineInfoRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    all_ = "";
    allIsSet_ = false;
    checkParamUsed_ = "";
    checkParamUsedIsSet_ = false;
}

ShowJobPipelineInfoRequest::~ShowJobPipelineInfoRequest() = default;

void ShowJobPipelineInfoRequest::validate()
{
}

web::json::value ShowJobPipelineInfoRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(allIsSet_) {
        val[utility::conversions::to_string_t("all")] = ModelBase::toJson(all_);
    }
    if(checkParamUsedIsSet_) {
        val[utility::conversions::to_string_t("check_param_used")] = ModelBase::toJson(checkParamUsed_);
    }

    return val;
}
bool ShowJobPipelineInfoRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("all"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("all"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAll(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("check_param_used"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("check_param_used"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCheckParamUsed(refVal);
        }
    }
    return ok;
}


std::string ShowJobPipelineInfoRequest::getJobId() const
{
    return jobId_;
}

void ShowJobPipelineInfoRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ShowJobPipelineInfoRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ShowJobPipelineInfoRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ShowJobPipelineInfoRequest::getAll() const
{
    return all_;
}

void ShowJobPipelineInfoRequest::setAll(const std::string& value)
{
    all_ = value;
    allIsSet_ = true;
}

bool ShowJobPipelineInfoRequest::allIsSet() const
{
    return allIsSet_;
}

void ShowJobPipelineInfoRequest::unsetall()
{
    allIsSet_ = false;
}

std::string ShowJobPipelineInfoRequest::getCheckParamUsed() const
{
    return checkParamUsed_;
}

void ShowJobPipelineInfoRequest::setCheckParamUsed(const std::string& value)
{
    checkParamUsed_ = value;
    checkParamUsedIsSet_ = true;
}

bool ShowJobPipelineInfoRequest::checkParamUsedIsSet() const
{
    return checkParamUsedIsSet_;
}

void ShowJobPipelineInfoRequest::unsetcheckParamUsed()
{
    checkParamUsedIsSet_ = false;
}

}
}
}
}
}


