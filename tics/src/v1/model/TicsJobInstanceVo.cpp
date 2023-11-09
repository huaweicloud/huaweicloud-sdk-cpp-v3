

#include "huaweicloud/tics/v1/model/TicsJobInstanceVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Tics {
namespace V1 {
namespace Model {




TicsJobInstanceVo::TicsJobInstanceVo()
{
    endTime_ = utility::datetime();
    endTimeIsSet_ = false;
    ext_ = "";
    extIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    isSinglePredict_ = false;
    isSinglePredictIsSet_ = false;
    jobInstanceType_ = "";
    jobInstanceTypeIsSet_ = false;
    jobName_ = "";
    jobNameIsSet_ = false;
    jobPartner_ = "";
    jobPartnerIsSet_ = false;
    resultExt_ = "";
    resultExtIsSet_ = false;
    roundId_ = 0;
    roundIdIsSet_ = false;
    startTime_ = utility::datetime();
    startTimeIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

TicsJobInstanceVo::~TicsJobInstanceVo() = default;

void TicsJobInstanceVo::validate()
{
}

web::json::value TicsJobInstanceVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(extIsSet_) {
        val[utility::conversions::to_string_t("ext")] = ModelBase::toJson(ext_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(isSinglePredictIsSet_) {
        val[utility::conversions::to_string_t("is_single_predict")] = ModelBase::toJson(isSinglePredict_);
    }
    if(jobInstanceTypeIsSet_) {
        val[utility::conversions::to_string_t("job_instance_type")] = ModelBase::toJson(jobInstanceType_);
    }
    if(jobNameIsSet_) {
        val[utility::conversions::to_string_t("job_name")] = ModelBase::toJson(jobName_);
    }
    if(jobPartnerIsSet_) {
        val[utility::conversions::to_string_t("job_partner")] = ModelBase::toJson(jobPartner_);
    }
    if(resultExtIsSet_) {
        val[utility::conversions::to_string_t("result_ext")] = ModelBase::toJson(resultExt_);
    }
    if(roundIdIsSet_) {
        val[utility::conversions::to_string_t("round_id")] = ModelBase::toJson(roundId_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool TicsJobInstanceVo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("job_instance_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_instance_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobInstanceType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("job_partner"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_partner"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobPartner(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("result_ext"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result_ext"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResultExt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("round_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("round_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoundId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


utility::datetime TicsJobInstanceVo::getEndTime() const
{
    return endTime_;
}

void TicsJobInstanceVo::setEndTime(const utility::datetime& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool TicsJobInstanceVo::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void TicsJobInstanceVo::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string TicsJobInstanceVo::getExt() const
{
    return ext_;
}

void TicsJobInstanceVo::setExt(const std::string& value)
{
    ext_ = value;
    extIsSet_ = true;
}

bool TicsJobInstanceVo::extIsSet() const
{
    return extIsSet_;
}

void TicsJobInstanceVo::unsetext()
{
    extIsSet_ = false;
}

std::string TicsJobInstanceVo::getId() const
{
    return id_;
}

void TicsJobInstanceVo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool TicsJobInstanceVo::idIsSet() const
{
    return idIsSet_;
}

void TicsJobInstanceVo::unsetid()
{
    idIsSet_ = false;
}

bool TicsJobInstanceVo::isIsSinglePredict() const
{
    return isSinglePredict_;
}

void TicsJobInstanceVo::setIsSinglePredict(bool value)
{
    isSinglePredict_ = value;
    isSinglePredictIsSet_ = true;
}

bool TicsJobInstanceVo::isSinglePredictIsSet() const
{
    return isSinglePredictIsSet_;
}

void TicsJobInstanceVo::unsetisSinglePredict()
{
    isSinglePredictIsSet_ = false;
}

std::string TicsJobInstanceVo::getJobInstanceType() const
{
    return jobInstanceType_;
}

void TicsJobInstanceVo::setJobInstanceType(const std::string& value)
{
    jobInstanceType_ = value;
    jobInstanceTypeIsSet_ = true;
}

bool TicsJobInstanceVo::jobInstanceTypeIsSet() const
{
    return jobInstanceTypeIsSet_;
}

void TicsJobInstanceVo::unsetjobInstanceType()
{
    jobInstanceTypeIsSet_ = false;
}

std::string TicsJobInstanceVo::getJobName() const
{
    return jobName_;
}

void TicsJobInstanceVo::setJobName(const std::string& value)
{
    jobName_ = value;
    jobNameIsSet_ = true;
}

bool TicsJobInstanceVo::jobNameIsSet() const
{
    return jobNameIsSet_;
}

void TicsJobInstanceVo::unsetjobName()
{
    jobNameIsSet_ = false;
}

std::string TicsJobInstanceVo::getJobPartner() const
{
    return jobPartner_;
}

void TicsJobInstanceVo::setJobPartner(const std::string& value)
{
    jobPartner_ = value;
    jobPartnerIsSet_ = true;
}

bool TicsJobInstanceVo::jobPartnerIsSet() const
{
    return jobPartnerIsSet_;
}

void TicsJobInstanceVo::unsetjobPartner()
{
    jobPartnerIsSet_ = false;
}

std::string TicsJobInstanceVo::getResultExt() const
{
    return resultExt_;
}

void TicsJobInstanceVo::setResultExt(const std::string& value)
{
    resultExt_ = value;
    resultExtIsSet_ = true;
}

bool TicsJobInstanceVo::resultExtIsSet() const
{
    return resultExtIsSet_;
}

void TicsJobInstanceVo::unsetresultExt()
{
    resultExtIsSet_ = false;
}

int32_t TicsJobInstanceVo::getRoundId() const
{
    return roundId_;
}

void TicsJobInstanceVo::setRoundId(int32_t value)
{
    roundId_ = value;
    roundIdIsSet_ = true;
}

bool TicsJobInstanceVo::roundIdIsSet() const
{
    return roundIdIsSet_;
}

void TicsJobInstanceVo::unsetroundId()
{
    roundIdIsSet_ = false;
}

utility::datetime TicsJobInstanceVo::getStartTime() const
{
    return startTime_;
}

void TicsJobInstanceVo::setStartTime(const utility::datetime& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool TicsJobInstanceVo::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void TicsJobInstanceVo::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string TicsJobInstanceVo::getStatus() const
{
    return status_;
}

void TicsJobInstanceVo::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool TicsJobInstanceVo::statusIsSet() const
{
    return statusIsSet_;
}

void TicsJobInstanceVo::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


