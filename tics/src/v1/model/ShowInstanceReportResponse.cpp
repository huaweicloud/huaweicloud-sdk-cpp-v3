

#include "huaweicloud/tics/v1/model/ShowInstanceReportResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Tics {
namespace V1 {
namespace Model {




ShowInstanceReportResponse::ShowInstanceReportResponse()
{
    jobReportBaseInfoIsSet_ = false;
    jobReportEnvIsSet_ = false;
    jobReportOutputIsSet_ = false;
    jobReportPartnersIsSet_ = false;
    roundDeploysIsSet_ = false;
}

ShowInstanceReportResponse::~ShowInstanceReportResponse() = default;

void ShowInstanceReportResponse::validate()
{
}

web::json::value ShowInstanceReportResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobReportBaseInfoIsSet_) {
        val[utility::conversions::to_string_t("job_report_base_info")] = ModelBase::toJson(jobReportBaseInfo_);
    }
    if(jobReportEnvIsSet_) {
        val[utility::conversions::to_string_t("job_report_env")] = ModelBase::toJson(jobReportEnv_);
    }
    if(jobReportOutputIsSet_) {
        val[utility::conversions::to_string_t("job_report_output")] = ModelBase::toJson(jobReportOutput_);
    }
    if(jobReportPartnersIsSet_) {
        val[utility::conversions::to_string_t("job_report_partners")] = ModelBase::toJson(jobReportPartners_);
    }
    if(roundDeploysIsSet_) {
        val[utility::conversions::to_string_t("round_deploys")] = ModelBase::toJson(roundDeploys_);
    }

    return val;
}
bool ShowInstanceReportResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("job_report_base_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_report_base_info"));
        if(!fieldValue.is_null())
        {
            JobReportBaseInfoVo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobReportBaseInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job_report_env"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_report_env"));
        if(!fieldValue.is_null())
        {
            JobReportEnvVo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobReportEnv(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job_report_output"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_report_output"));
        if(!fieldValue.is_null())
        {
            JobReportOutputVo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobReportOutput(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job_report_partners"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_report_partners"));
        if(!fieldValue.is_null())
        {
            std::vector<JobReportPartnerVo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobReportPartners(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("round_deploys"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("round_deploys"));
        if(!fieldValue.is_null())
        {
            std::vector<RoundDeployVo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoundDeploys(refVal);
        }
    }
    return ok;
}


JobReportBaseInfoVo ShowInstanceReportResponse::getJobReportBaseInfo() const
{
    return jobReportBaseInfo_;
}

void ShowInstanceReportResponse::setJobReportBaseInfo(const JobReportBaseInfoVo& value)
{
    jobReportBaseInfo_ = value;
    jobReportBaseInfoIsSet_ = true;
}

bool ShowInstanceReportResponse::jobReportBaseInfoIsSet() const
{
    return jobReportBaseInfoIsSet_;
}

void ShowInstanceReportResponse::unsetjobReportBaseInfo()
{
    jobReportBaseInfoIsSet_ = false;
}

JobReportEnvVo ShowInstanceReportResponse::getJobReportEnv() const
{
    return jobReportEnv_;
}

void ShowInstanceReportResponse::setJobReportEnv(const JobReportEnvVo& value)
{
    jobReportEnv_ = value;
    jobReportEnvIsSet_ = true;
}

bool ShowInstanceReportResponse::jobReportEnvIsSet() const
{
    return jobReportEnvIsSet_;
}

void ShowInstanceReportResponse::unsetjobReportEnv()
{
    jobReportEnvIsSet_ = false;
}

JobReportOutputVo ShowInstanceReportResponse::getJobReportOutput() const
{
    return jobReportOutput_;
}

void ShowInstanceReportResponse::setJobReportOutput(const JobReportOutputVo& value)
{
    jobReportOutput_ = value;
    jobReportOutputIsSet_ = true;
}

bool ShowInstanceReportResponse::jobReportOutputIsSet() const
{
    return jobReportOutputIsSet_;
}

void ShowInstanceReportResponse::unsetjobReportOutput()
{
    jobReportOutputIsSet_ = false;
}

std::vector<JobReportPartnerVo>& ShowInstanceReportResponse::getJobReportPartners()
{
    return jobReportPartners_;
}

void ShowInstanceReportResponse::setJobReportPartners(const std::vector<JobReportPartnerVo>& value)
{
    jobReportPartners_ = value;
    jobReportPartnersIsSet_ = true;
}

bool ShowInstanceReportResponse::jobReportPartnersIsSet() const
{
    return jobReportPartnersIsSet_;
}

void ShowInstanceReportResponse::unsetjobReportPartners()
{
    jobReportPartnersIsSet_ = false;
}

std::vector<RoundDeployVo>& ShowInstanceReportResponse::getRoundDeploys()
{
    return roundDeploys_;
}

void ShowInstanceReportResponse::setRoundDeploys(const std::vector<RoundDeployVo>& value)
{
    roundDeploys_ = value;
    roundDeploysIsSet_ = true;
}

bool ShowInstanceReportResponse::roundDeploysIsSet() const
{
    return roundDeploysIsSet_;
}

void ShowInstanceReportResponse::unsetroundDeploys()
{
    roundDeploysIsSet_ = false;
}

}
}
}
}
}


