

#include "huaweicloud/modelarts/v1/model/PoolJob.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




PoolJob::PoolJob()
{
    startTimestamp_ = 0L;
    startTimestampIsSet_ = false;
    endTimestamp_ = 0L;
    endTimestampIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
    jobName_ = "";
    jobNameIsSet_ = false;
    involvedObjects_ = "";
    involvedObjectsIsSet_ = false;
    inputs_ = "";
    inputsIsSet_ = false;
    phase_ = "";
    phaseIsSet_ = false;
    suspend_ = false;
    suspendIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    conditions_ = "";
    conditionsIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
}

PoolJob::~PoolJob() = default;

void PoolJob::validate()
{
}

web::json::value PoolJob::toJson() const
{
    web::json::value val = web::json::value::object();

    if(startTimestampIsSet_) {
        val[utility::conversions::to_string_t("startTimestamp")] = ModelBase::toJson(startTimestamp_);
    }
    if(endTimestampIsSet_) {
        val[utility::conversions::to_string_t("endTimestamp")] = ModelBase::toJson(endTimestamp_);
    }
    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("jobId")] = ModelBase::toJson(jobId_);
    }
    if(jobNameIsSet_) {
        val[utility::conversions::to_string_t("jobName")] = ModelBase::toJson(jobName_);
    }
    if(involvedObjectsIsSet_) {
        val[utility::conversions::to_string_t("involvedObjects")] = ModelBase::toJson(involvedObjects_);
    }
    if(inputsIsSet_) {
        val[utility::conversions::to_string_t("inputs")] = ModelBase::toJson(inputs_);
    }
    if(phaseIsSet_) {
        val[utility::conversions::to_string_t("phase")] = ModelBase::toJson(phase_);
    }
    if(suspendIsSet_) {
        val[utility::conversions::to_string_t("suspend")] = ModelBase::toJson(suspend_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(conditionsIsSet_) {
        val[utility::conversions::to_string_t("conditions")] = ModelBase::toJson(conditions_);
    }
    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }

    return val;
}
bool PoolJob::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("startTimestamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("startTimestamp"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTimestamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("endTimestamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("endTimestamp"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTimestamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("jobId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("jobId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("jobName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("jobName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("involvedObjects"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("involvedObjects"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInvolvedObjects(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("inputs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("inputs"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInputs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("phase"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("phase"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPhase(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("suspend"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("suspend"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSuspend(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("conditions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("conditions"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConditions(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMessage(refVal);
        }
    }
    return ok;
}


int64_t PoolJob::getStartTimestamp() const
{
    return startTimestamp_;
}

void PoolJob::setStartTimestamp(int64_t value)
{
    startTimestamp_ = value;
    startTimestampIsSet_ = true;
}

bool PoolJob::startTimestampIsSet() const
{
    return startTimestampIsSet_;
}

void PoolJob::unsetstartTimestamp()
{
    startTimestampIsSet_ = false;
}

int64_t PoolJob::getEndTimestamp() const
{
    return endTimestamp_;
}

void PoolJob::setEndTimestamp(int64_t value)
{
    endTimestamp_ = value;
    endTimestampIsSet_ = true;
}

bool PoolJob::endTimestampIsSet() const
{
    return endTimestampIsSet_;
}

void PoolJob::unsetendTimestamp()
{
    endTimestampIsSet_ = false;
}

std::string PoolJob::getJobId() const
{
    return jobId_;
}

void PoolJob::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool PoolJob::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void PoolJob::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string PoolJob::getJobName() const
{
    return jobName_;
}

void PoolJob::setJobName(const std::string& value)
{
    jobName_ = value;
    jobNameIsSet_ = true;
}

bool PoolJob::jobNameIsSet() const
{
    return jobNameIsSet_;
}

void PoolJob::unsetjobName()
{
    jobNameIsSet_ = false;
}

std::string PoolJob::getInvolvedObjects() const
{
    return involvedObjects_;
}

void PoolJob::setInvolvedObjects(const std::string& value)
{
    involvedObjects_ = value;
    involvedObjectsIsSet_ = true;
}

bool PoolJob::involvedObjectsIsSet() const
{
    return involvedObjectsIsSet_;
}

void PoolJob::unsetinvolvedObjects()
{
    involvedObjectsIsSet_ = false;
}

std::string PoolJob::getInputs() const
{
    return inputs_;
}

void PoolJob::setInputs(const std::string& value)
{
    inputs_ = value;
    inputsIsSet_ = true;
}

bool PoolJob::inputsIsSet() const
{
    return inputsIsSet_;
}

void PoolJob::unsetinputs()
{
    inputsIsSet_ = false;
}

std::string PoolJob::getPhase() const
{
    return phase_;
}

void PoolJob::setPhase(const std::string& value)
{
    phase_ = value;
    phaseIsSet_ = true;
}

bool PoolJob::phaseIsSet() const
{
    return phaseIsSet_;
}

void PoolJob::unsetphase()
{
    phaseIsSet_ = false;
}

bool PoolJob::isSuspend() const
{
    return suspend_;
}

void PoolJob::setSuspend(bool value)
{
    suspend_ = value;
    suspendIsSet_ = true;
}

bool PoolJob::suspendIsSet() const
{
    return suspendIsSet_;
}

void PoolJob::unsetsuspend()
{
    suspendIsSet_ = false;
}

std::string PoolJob::getType() const
{
    return type_;
}

void PoolJob::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool PoolJob::typeIsSet() const
{
    return typeIsSet_;
}

void PoolJob::unsettype()
{
    typeIsSet_ = false;
}

std::string PoolJob::getConditions() const
{
    return conditions_;
}

void PoolJob::setConditions(const std::string& value)
{
    conditions_ = value;
    conditionsIsSet_ = true;
}

bool PoolJob::conditionsIsSet() const
{
    return conditionsIsSet_;
}

void PoolJob::unsetconditions()
{
    conditionsIsSet_ = false;
}

std::string PoolJob::getMessage() const
{
    return message_;
}

void PoolJob::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool PoolJob::messageIsSet() const
{
    return messageIsSet_;
}

void PoolJob::unsetmessage()
{
    messageIsSet_ = false;
}

}
}
}
}
}


