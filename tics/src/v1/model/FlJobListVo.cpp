

#include "huaweicloud/tics/v1/model/FlJobListVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Tics {
namespace V1 {
namespace Model {




FlJobListVo::FlJobListVo()
{
    algorithmType_ = "";
    algorithmTypeIsSet_ = false;
    approvalStatus_ = "";
    approvalStatusIsSet_ = false;
    createTime_ = utility::datetime();
    createTimeIsSet_ = false;
    creatorName_ = "";
    creatorNameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    ext_ = "";
    extIsSet_ = false;
    hflPlatformType_ = "";
    hflPlatformTypeIsSet_ = false;
    hflType_ = "";
    hflTypeIsSet_ = false;
    isSinglePredict_ = false;
    isSinglePredictIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
    jobName_ = "";
    jobNameIsSet_ = false;
    jobType_ = "";
    jobTypeIsSet_ = false;
    learningTaskType_ = "";
    learningTaskTypeIsSet_ = false;
}

FlJobListVo::~FlJobListVo() = default;

void FlJobListVo::validate()
{
}

web::json::value FlJobListVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(algorithmTypeIsSet_) {
        val[utility::conversions::to_string_t("algorithm_type")] = ModelBase::toJson(algorithmType_);
    }
    if(approvalStatusIsSet_) {
        val[utility::conversions::to_string_t("approval_status")] = ModelBase::toJson(approvalStatus_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(creatorNameIsSet_) {
        val[utility::conversions::to_string_t("creator_name")] = ModelBase::toJson(creatorName_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(extIsSet_) {
        val[utility::conversions::to_string_t("ext")] = ModelBase::toJson(ext_);
    }
    if(hflPlatformTypeIsSet_) {
        val[utility::conversions::to_string_t("hfl_platform_type")] = ModelBase::toJson(hflPlatformType_);
    }
    if(hflTypeIsSet_) {
        val[utility::conversions::to_string_t("hfl_type")] = ModelBase::toJson(hflType_);
    }
    if(isSinglePredictIsSet_) {
        val[utility::conversions::to_string_t("is_single_predict")] = ModelBase::toJson(isSinglePredict_);
    }
    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(jobNameIsSet_) {
        val[utility::conversions::to_string_t("job_name")] = ModelBase::toJson(jobName_);
    }
    if(jobTypeIsSet_) {
        val[utility::conversions::to_string_t("job_type")] = ModelBase::toJson(jobType_);
    }
    if(learningTaskTypeIsSet_) {
        val[utility::conversions::to_string_t("learning_task_type")] = ModelBase::toJson(learningTaskType_);
    }

    return val;
}
bool FlJobListVo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("algorithm_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("algorithm_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlgorithmType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("approval_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("approval_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApprovalStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("creator_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creator_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatorName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ext"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ext"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hfl_platform_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hfl_platform_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHflPlatformType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hfl_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hfl_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHflType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_single_predict"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_single_predict"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsSinglePredict(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("job_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("learning_task_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("learning_task_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLearningTaskType(refVal);
        }
    }
    return ok;
}


std::string FlJobListVo::getAlgorithmType() const
{
    return algorithmType_;
}

void FlJobListVo::setAlgorithmType(const std::string& value)
{
    algorithmType_ = value;
    algorithmTypeIsSet_ = true;
}

bool FlJobListVo::algorithmTypeIsSet() const
{
    return algorithmTypeIsSet_;
}

void FlJobListVo::unsetalgorithmType()
{
    algorithmTypeIsSet_ = false;
}

std::string FlJobListVo::getApprovalStatus() const
{
    return approvalStatus_;
}

void FlJobListVo::setApprovalStatus(const std::string& value)
{
    approvalStatus_ = value;
    approvalStatusIsSet_ = true;
}

bool FlJobListVo::approvalStatusIsSet() const
{
    return approvalStatusIsSet_;
}

void FlJobListVo::unsetapprovalStatus()
{
    approvalStatusIsSet_ = false;
}

utility::datetime FlJobListVo::getCreateTime() const
{
    return createTime_;
}

void FlJobListVo::setCreateTime(const utility::datetime& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool FlJobListVo::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void FlJobListVo::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string FlJobListVo::getCreatorName() const
{
    return creatorName_;
}

void FlJobListVo::setCreatorName(const std::string& value)
{
    creatorName_ = value;
    creatorNameIsSet_ = true;
}

bool FlJobListVo::creatorNameIsSet() const
{
    return creatorNameIsSet_;
}

void FlJobListVo::unsetcreatorName()
{
    creatorNameIsSet_ = false;
}

std::string FlJobListVo::getDescription() const
{
    return description_;
}

void FlJobListVo::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool FlJobListVo::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void FlJobListVo::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string FlJobListVo::getExt() const
{
    return ext_;
}

void FlJobListVo::setExt(const std::string& value)
{
    ext_ = value;
    extIsSet_ = true;
}

bool FlJobListVo::extIsSet() const
{
    return extIsSet_;
}

void FlJobListVo::unsetext()
{
    extIsSet_ = false;
}

std::string FlJobListVo::getHflPlatformType() const
{
    return hflPlatformType_;
}

void FlJobListVo::setHflPlatformType(const std::string& value)
{
    hflPlatformType_ = value;
    hflPlatformTypeIsSet_ = true;
}

bool FlJobListVo::hflPlatformTypeIsSet() const
{
    return hflPlatformTypeIsSet_;
}

void FlJobListVo::unsethflPlatformType()
{
    hflPlatformTypeIsSet_ = false;
}

std::string FlJobListVo::getHflType() const
{
    return hflType_;
}

void FlJobListVo::setHflType(const std::string& value)
{
    hflType_ = value;
    hflTypeIsSet_ = true;
}

bool FlJobListVo::hflTypeIsSet() const
{
    return hflTypeIsSet_;
}

void FlJobListVo::unsethflType()
{
    hflTypeIsSet_ = false;
}

bool FlJobListVo::isIsSinglePredict() const
{
    return isSinglePredict_;
}

void FlJobListVo::setIsSinglePredict(bool value)
{
    isSinglePredict_ = value;
    isSinglePredictIsSet_ = true;
}

bool FlJobListVo::isSinglePredictIsSet() const
{
    return isSinglePredictIsSet_;
}

void FlJobListVo::unsetisSinglePredict()
{
    isSinglePredictIsSet_ = false;
}

std::string FlJobListVo::getJobId() const
{
    return jobId_;
}

void FlJobListVo::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool FlJobListVo::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void FlJobListVo::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string FlJobListVo::getJobName() const
{
    return jobName_;
}

void FlJobListVo::setJobName(const std::string& value)
{
    jobName_ = value;
    jobNameIsSet_ = true;
}

bool FlJobListVo::jobNameIsSet() const
{
    return jobNameIsSet_;
}

void FlJobListVo::unsetjobName()
{
    jobNameIsSet_ = false;
}

std::string FlJobListVo::getJobType() const
{
    return jobType_;
}

void FlJobListVo::setJobType(const std::string& value)
{
    jobType_ = value;
    jobTypeIsSet_ = true;
}

bool FlJobListVo::jobTypeIsSet() const
{
    return jobTypeIsSet_;
}

void FlJobListVo::unsetjobType()
{
    jobTypeIsSet_ = false;
}

std::string FlJobListVo::getLearningTaskType() const
{
    return learningTaskType_;
}

void FlJobListVo::setLearningTaskType(const std::string& value)
{
    learningTaskType_ = value;
    learningTaskTypeIsSet_ = true;
}

bool FlJobListVo::learningTaskTypeIsSet() const
{
    return learningTaskTypeIsSet_;
}

void FlJobListVo::unsetlearningTaskType()
{
    learningTaskTypeIsSet_ = false;
}

}
}
}
}
}


