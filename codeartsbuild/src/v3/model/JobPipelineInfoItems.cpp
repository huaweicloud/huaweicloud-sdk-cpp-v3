

#include "huaweicloud/codeartsbuild/v3/model/JobPipelineInfoItems.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




JobPipelineInfoItems::JobPipelineInfoItems()
{
    scmsIsSet_ = false;
    parametersIsSet_ = false;
    jobName_ = "";
    jobNameIsSet_ = false;
    jobNameMassage_ = "";
    jobNameMassageIsSet_ = false;
    jobNameRegex_ = "";
    jobNameRegexIsSet_ = false;
    sourceCode_ = "";
    sourceCodeIsSet_ = false;
}

JobPipelineInfoItems::~JobPipelineInfoItems() = default;

void JobPipelineInfoItems::validate()
{
}

web::json::value JobPipelineInfoItems::toJson() const
{
    web::json::value val = web::json::value::object();

    if(scmsIsSet_) {
        val[utility::conversions::to_string_t("scms")] = ModelBase::toJson(scms_);
    }
    if(parametersIsSet_) {
        val[utility::conversions::to_string_t("parameters")] = ModelBase::toJson(parameters_);
    }
    if(jobNameIsSet_) {
        val[utility::conversions::to_string_t("job_name")] = ModelBase::toJson(jobName_);
    }
    if(jobNameMassageIsSet_) {
        val[utility::conversions::to_string_t("job_name_massage")] = ModelBase::toJson(jobNameMassage_);
    }
    if(jobNameRegexIsSet_) {
        val[utility::conversions::to_string_t("job_name_regex")] = ModelBase::toJson(jobNameRegex_);
    }
    if(sourceCodeIsSet_) {
        val[utility::conversions::to_string_t("source_code")] = ModelBase::toJson(sourceCode_);
    }

    return val;
}
bool JobPipelineInfoItems::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("scms"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scms"));
        if(!fieldValue.is_null())
        {
            std::vector<CreateBuildJobScm> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScms(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parameters"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parameters"));
        if(!fieldValue.is_null())
        {
            std::vector<JobPipelineInfoParameters> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParameters(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("job_name_massage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_name_massage"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobNameMassage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job_name_regex"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_name_regex"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobNameRegex(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceCode(refVal);
        }
    }
    return ok;
}


std::vector<CreateBuildJobScm>& JobPipelineInfoItems::getScms()
{
    return scms_;
}

void JobPipelineInfoItems::setScms(const std::vector<CreateBuildJobScm>& value)
{
    scms_ = value;
    scmsIsSet_ = true;
}

bool JobPipelineInfoItems::scmsIsSet() const
{
    return scmsIsSet_;
}

void JobPipelineInfoItems::unsetscms()
{
    scmsIsSet_ = false;
}

std::vector<JobPipelineInfoParameters>& JobPipelineInfoItems::getParameters()
{
    return parameters_;
}

void JobPipelineInfoItems::setParameters(const std::vector<JobPipelineInfoParameters>& value)
{
    parameters_ = value;
    parametersIsSet_ = true;
}

bool JobPipelineInfoItems::parametersIsSet() const
{
    return parametersIsSet_;
}

void JobPipelineInfoItems::unsetparameters()
{
    parametersIsSet_ = false;
}

std::string JobPipelineInfoItems::getJobName() const
{
    return jobName_;
}

void JobPipelineInfoItems::setJobName(const std::string& value)
{
    jobName_ = value;
    jobNameIsSet_ = true;
}

bool JobPipelineInfoItems::jobNameIsSet() const
{
    return jobNameIsSet_;
}

void JobPipelineInfoItems::unsetjobName()
{
    jobNameIsSet_ = false;
}

std::string JobPipelineInfoItems::getJobNameMassage() const
{
    return jobNameMassage_;
}

void JobPipelineInfoItems::setJobNameMassage(const std::string& value)
{
    jobNameMassage_ = value;
    jobNameMassageIsSet_ = true;
}

bool JobPipelineInfoItems::jobNameMassageIsSet() const
{
    return jobNameMassageIsSet_;
}

void JobPipelineInfoItems::unsetjobNameMassage()
{
    jobNameMassageIsSet_ = false;
}

std::string JobPipelineInfoItems::getJobNameRegex() const
{
    return jobNameRegex_;
}

void JobPipelineInfoItems::setJobNameRegex(const std::string& value)
{
    jobNameRegex_ = value;
    jobNameRegexIsSet_ = true;
}

bool JobPipelineInfoItems::jobNameRegexIsSet() const
{
    return jobNameRegexIsSet_;
}

void JobPipelineInfoItems::unsetjobNameRegex()
{
    jobNameRegexIsSet_ = false;
}

std::string JobPipelineInfoItems::getSourceCode() const
{
    return sourceCode_;
}

void JobPipelineInfoItems::setSourceCode(const std::string& value)
{
    sourceCode_ = value;
    sourceCodeIsSet_ = true;
}

bool JobPipelineInfoItems::sourceCodeIsSet() const
{
    return sourceCodeIsSet_;
}

void JobPipelineInfoItems::unsetsourceCode()
{
    sourceCodeIsSet_ = false;
}

}
}
}
}
}


