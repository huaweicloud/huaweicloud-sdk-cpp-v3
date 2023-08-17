

#include "huaweicloud/codeartsbuild/v3/model/RunJobRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




RunJobRequestBody::RunJobRequestBody()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    parameterIsSet_ = false;
    scmIsSet_ = false;
}

RunJobRequestBody::~RunJobRequestBody() = default;

void RunJobRequestBody::validate()
{
}

web::json::value RunJobRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(parameterIsSet_) {
        val[utility::conversions::to_string_t("parameter")] = ModelBase::toJson(parameter_);
    }
    if(scmIsSet_) {
        val[utility::conversions::to_string_t("scm")] = ModelBase::toJson(scm_);
    }

    return val;
}

bool RunJobRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("parameter"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parameter"));
        if(!fieldValue.is_null())
        {
            std::vector<ParameterItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParameter(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("scm"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scm"));
        if(!fieldValue.is_null())
        {
            Scm refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScm(refVal);
        }
    }
    return ok;
}

std::string RunJobRequestBody::getJobId() const
{
    return jobId_;
}

void RunJobRequestBody::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool RunJobRequestBody::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void RunJobRequestBody::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::vector<ParameterItem>& RunJobRequestBody::getParameter()
{
    return parameter_;
}

void RunJobRequestBody::setParameter(const std::vector<ParameterItem>& value)
{
    parameter_ = value;
    parameterIsSet_ = true;
}

bool RunJobRequestBody::parameterIsSet() const
{
    return parameterIsSet_;
}

void RunJobRequestBody::unsetparameter()
{
    parameterIsSet_ = false;
}

Scm RunJobRequestBody::getScm() const
{
    return scm_;
}

void RunJobRequestBody::setScm(const Scm& value)
{
    scm_ = value;
    scmIsSet_ = true;
}

bool RunJobRequestBody::scmIsSet() const
{
    return scmIsSet_;
}

void RunJobRequestBody::unsetscm()
{
    scmIsSet_ = false;
}

}
}
}
}
}


