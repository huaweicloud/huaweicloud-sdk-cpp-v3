

#include "huaweicloud/codeartspipeline/v2/model/StepRun.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




StepRun::StepRun()
{
    name_ = "";
    nameIsSet_ = false;
    task_ = "";
    taskIsSet_ = false;
    businessType_ = "";
    businessTypeIsSet_ = false;
    inputsIsSet_ = false;
    sequence_ = 0;
    sequenceIsSet_ = false;
    officialTaskVersion_ = "";
    officialTaskVersionIsSet_ = false;
    identifier_ = "";
    identifierIsSet_ = false;
    multiStepEditable_ = 0;
    multiStepEditableIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    endpointIdsIsSet_ = false;
    lastDispatchId_ = "";
    lastDispatchIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
    startTime_ = 0L;
    startTimeIsSet_ = false;
    endTime_ = 0L;
    endTimeIsSet_ = false;
}

StepRun::~StepRun() = default;

void StepRun::validate()
{
}

web::json::value StepRun::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(taskIsSet_) {
        val[utility::conversions::to_string_t("task")] = ModelBase::toJson(task_);
    }
    if(businessTypeIsSet_) {
        val[utility::conversions::to_string_t("business_type")] = ModelBase::toJson(businessType_);
    }
    if(inputsIsSet_) {
        val[utility::conversions::to_string_t("inputs")] = ModelBase::toJson(inputs_);
    }
    if(sequenceIsSet_) {
        val[utility::conversions::to_string_t("sequence")] = ModelBase::toJson(sequence_);
    }
    if(officialTaskVersionIsSet_) {
        val[utility::conversions::to_string_t("official_task_version")] = ModelBase::toJson(officialTaskVersion_);
    }
    if(identifierIsSet_) {
        val[utility::conversions::to_string_t("identifier")] = ModelBase::toJson(identifier_);
    }
    if(multiStepEditableIsSet_) {
        val[utility::conversions::to_string_t("multi_step_editable")] = ModelBase::toJson(multiStepEditable_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(endpointIdsIsSet_) {
        val[utility::conversions::to_string_t("endpoint_ids")] = ModelBase::toJson(endpointIds_);
    }
    if(lastDispatchIdIsSet_) {
        val[utility::conversions::to_string_t("last_dispatch_id")] = ModelBase::toJson(lastDispatchId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }

    return val;
}
bool StepRun::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTask(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("business_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("business_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBusinessType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("inputs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("inputs"));
        if(!fieldValue.is_null())
        {
            std::vector<StepRun_inputs> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInputs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sequence"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sequence"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSequence(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("official_task_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("official_task_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOfficialTaskVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("identifier"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("identifier"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIdentifier(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("multi_step_editable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("multi_step_editable"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMultiStepEditable(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("endpoint_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("endpoint_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndpointIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_dispatch_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_dispatch_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastDispatchId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMessage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    return ok;
}


std::string StepRun::getName() const
{
    return name_;
}

void StepRun::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool StepRun::nameIsSet() const
{
    return nameIsSet_;
}

void StepRun::unsetname()
{
    nameIsSet_ = false;
}

std::string StepRun::getTask() const
{
    return task_;
}

void StepRun::setTask(const std::string& value)
{
    task_ = value;
    taskIsSet_ = true;
}

bool StepRun::taskIsSet() const
{
    return taskIsSet_;
}

void StepRun::unsettask()
{
    taskIsSet_ = false;
}

std::string StepRun::getBusinessType() const
{
    return businessType_;
}

void StepRun::setBusinessType(const std::string& value)
{
    businessType_ = value;
    businessTypeIsSet_ = true;
}

bool StepRun::businessTypeIsSet() const
{
    return businessTypeIsSet_;
}

void StepRun::unsetbusinessType()
{
    businessTypeIsSet_ = false;
}

std::vector<StepRun_inputs>& StepRun::getInputs()
{
    return inputs_;
}

void StepRun::setInputs(const std::vector<StepRun_inputs>& value)
{
    inputs_ = value;
    inputsIsSet_ = true;
}

bool StepRun::inputsIsSet() const
{
    return inputsIsSet_;
}

void StepRun::unsetinputs()
{
    inputsIsSet_ = false;
}

int32_t StepRun::getSequence() const
{
    return sequence_;
}

void StepRun::setSequence(int32_t value)
{
    sequence_ = value;
    sequenceIsSet_ = true;
}

bool StepRun::sequenceIsSet() const
{
    return sequenceIsSet_;
}

void StepRun::unsetsequence()
{
    sequenceIsSet_ = false;
}

std::string StepRun::getOfficialTaskVersion() const
{
    return officialTaskVersion_;
}

void StepRun::setOfficialTaskVersion(const std::string& value)
{
    officialTaskVersion_ = value;
    officialTaskVersionIsSet_ = true;
}

bool StepRun::officialTaskVersionIsSet() const
{
    return officialTaskVersionIsSet_;
}

void StepRun::unsetofficialTaskVersion()
{
    officialTaskVersionIsSet_ = false;
}

std::string StepRun::getIdentifier() const
{
    return identifier_;
}

void StepRun::setIdentifier(const std::string& value)
{
    identifier_ = value;
    identifierIsSet_ = true;
}

bool StepRun::identifierIsSet() const
{
    return identifierIsSet_;
}

void StepRun::unsetidentifier()
{
    identifierIsSet_ = false;
}

int32_t StepRun::getMultiStepEditable() const
{
    return multiStepEditable_;
}

void StepRun::setMultiStepEditable(int32_t value)
{
    multiStepEditable_ = value;
    multiStepEditableIsSet_ = true;
}

bool StepRun::multiStepEditableIsSet() const
{
    return multiStepEditableIsSet_;
}

void StepRun::unsetmultiStepEditable()
{
    multiStepEditableIsSet_ = false;
}

std::string StepRun::getId() const
{
    return id_;
}

void StepRun::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool StepRun::idIsSet() const
{
    return idIsSet_;
}

void StepRun::unsetid()
{
    idIsSet_ = false;
}

std::vector<std::string>& StepRun::getEndpointIds()
{
    return endpointIds_;
}

void StepRun::setEndpointIds(const std::vector<std::string>& value)
{
    endpointIds_ = value;
    endpointIdsIsSet_ = true;
}

bool StepRun::endpointIdsIsSet() const
{
    return endpointIdsIsSet_;
}

void StepRun::unsetendpointIds()
{
    endpointIdsIsSet_ = false;
}

std::string StepRun::getLastDispatchId() const
{
    return lastDispatchId_;
}

void StepRun::setLastDispatchId(const std::string& value)
{
    lastDispatchId_ = value;
    lastDispatchIdIsSet_ = true;
}

bool StepRun::lastDispatchIdIsSet() const
{
    return lastDispatchIdIsSet_;
}

void StepRun::unsetlastDispatchId()
{
    lastDispatchIdIsSet_ = false;
}

std::string StepRun::getStatus() const
{
    return status_;
}

void StepRun::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool StepRun::statusIsSet() const
{
    return statusIsSet_;
}

void StepRun::unsetstatus()
{
    statusIsSet_ = false;
}

std::string StepRun::getMessage() const
{
    return message_;
}

void StepRun::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool StepRun::messageIsSet() const
{
    return messageIsSet_;
}

void StepRun::unsetmessage()
{
    messageIsSet_ = false;
}

int64_t StepRun::getStartTime() const
{
    return startTime_;
}

void StepRun::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool StepRun::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void StepRun::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int64_t StepRun::getEndTime() const
{
    return endTime_;
}

void StepRun::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool StepRun::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void StepRun::unsetendTime()
{
    endTimeIsSet_ = false;
}

}
}
}
}
}


