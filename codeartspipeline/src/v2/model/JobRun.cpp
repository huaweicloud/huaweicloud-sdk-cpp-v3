

#include "huaweicloud/codeartspipeline/v2/model/JobRun.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




JobRun::JobRun()
{
    id_ = "";
    idIsSet_ = false;
    category_ = "";
    categoryIsSet_ = false;
    sequence_ = 0;
    sequenceIsSet_ = false;
    async_ = "";
    asyncIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    identifier_ = "";
    identifierIsSet_ = false;
    dependsOnIsSet_ = false;
    condition_ = "";
    conditionIsSet_ = false;
    resource_ = "";
    resourceIsSet_ = false;
    isSelect_ = false;
    isSelectIsSet_ = false;
    timeout_ = "";
    timeoutIsSet_ = false;
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
    stepsIsSet_ = false;
    execId_ = "";
    execIdIsSet_ = false;
}

JobRun::~JobRun() = default;

void JobRun::validate()
{
}

web::json::value JobRun::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(categoryIsSet_) {
        val[utility::conversions::to_string_t("category")] = ModelBase::toJson(category_);
    }
    if(sequenceIsSet_) {
        val[utility::conversions::to_string_t("sequence")] = ModelBase::toJson(sequence_);
    }
    if(asyncIsSet_) {
        val[utility::conversions::to_string_t("async")] = ModelBase::toJson(async_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(identifierIsSet_) {
        val[utility::conversions::to_string_t("identifier")] = ModelBase::toJson(identifier_);
    }
    if(dependsOnIsSet_) {
        val[utility::conversions::to_string_t("depends_on")] = ModelBase::toJson(dependsOn_);
    }
    if(conditionIsSet_) {
        val[utility::conversions::to_string_t("condition")] = ModelBase::toJson(condition_);
    }
    if(resourceIsSet_) {
        val[utility::conversions::to_string_t("resource")] = ModelBase::toJson(resource_);
    }
    if(isSelectIsSet_) {
        val[utility::conversions::to_string_t("is_select")] = ModelBase::toJson(isSelect_);
    }
    if(timeoutIsSet_) {
        val[utility::conversions::to_string_t("timeout")] = ModelBase::toJson(timeout_);
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
    if(stepsIsSet_) {
        val[utility::conversions::to_string_t("steps")] = ModelBase::toJson(steps_);
    }
    if(execIdIsSet_) {
        val[utility::conversions::to_string_t("exec_id")] = ModelBase::toJson(execId_);
    }

    return val;
}
bool JobRun::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("category"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("category"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCategory(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("async"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("async"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAsync(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("depends_on"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("depends_on"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDependsOn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("condition"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("condition"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCondition(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResource(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_select"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_select"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsSelect(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("timeout"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("timeout"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimeout(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("steps"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("steps"));
        if(!fieldValue.is_null())
        {
            std::vector<StepRun> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSteps(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("exec_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("exec_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecId(refVal);
        }
    }
    return ok;
}


std::string JobRun::getId() const
{
    return id_;
}

void JobRun::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool JobRun::idIsSet() const
{
    return idIsSet_;
}

void JobRun::unsetid()
{
    idIsSet_ = false;
}

std::string JobRun::getCategory() const
{
    return category_;
}

void JobRun::setCategory(const std::string& value)
{
    category_ = value;
    categoryIsSet_ = true;
}

bool JobRun::categoryIsSet() const
{
    return categoryIsSet_;
}

void JobRun::unsetcategory()
{
    categoryIsSet_ = false;
}

int32_t JobRun::getSequence() const
{
    return sequence_;
}

void JobRun::setSequence(int32_t value)
{
    sequence_ = value;
    sequenceIsSet_ = true;
}

bool JobRun::sequenceIsSet() const
{
    return sequenceIsSet_;
}

void JobRun::unsetsequence()
{
    sequenceIsSet_ = false;
}

std::string JobRun::getAsync() const
{
    return async_;
}

void JobRun::setAsync(const std::string& value)
{
    async_ = value;
    asyncIsSet_ = true;
}

bool JobRun::asyncIsSet() const
{
    return asyncIsSet_;
}

void JobRun::unsetasync()
{
    asyncIsSet_ = false;
}

std::string JobRun::getName() const
{
    return name_;
}

void JobRun::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool JobRun::nameIsSet() const
{
    return nameIsSet_;
}

void JobRun::unsetname()
{
    nameIsSet_ = false;
}

std::string JobRun::getIdentifier() const
{
    return identifier_;
}

void JobRun::setIdentifier(const std::string& value)
{
    identifier_ = value;
    identifierIsSet_ = true;
}

bool JobRun::identifierIsSet() const
{
    return identifierIsSet_;
}

void JobRun::unsetidentifier()
{
    identifierIsSet_ = false;
}

std::vector<std::string>& JobRun::getDependsOn()
{
    return dependsOn_;
}

void JobRun::setDependsOn(const std::vector<std::string>& value)
{
    dependsOn_ = value;
    dependsOnIsSet_ = true;
}

bool JobRun::dependsOnIsSet() const
{
    return dependsOnIsSet_;
}

void JobRun::unsetdependsOn()
{
    dependsOnIsSet_ = false;
}

std::string JobRun::getCondition() const
{
    return condition_;
}

void JobRun::setCondition(const std::string& value)
{
    condition_ = value;
    conditionIsSet_ = true;
}

bool JobRun::conditionIsSet() const
{
    return conditionIsSet_;
}

void JobRun::unsetcondition()
{
    conditionIsSet_ = false;
}

std::string JobRun::getResource() const
{
    return resource_;
}

void JobRun::setResource(const std::string& value)
{
    resource_ = value;
    resourceIsSet_ = true;
}

bool JobRun::resourceIsSet() const
{
    return resourceIsSet_;
}

void JobRun::unsetresource()
{
    resourceIsSet_ = false;
}

bool JobRun::isIsSelect() const
{
    return isSelect_;
}

void JobRun::setIsSelect(bool value)
{
    isSelect_ = value;
    isSelectIsSet_ = true;
}

bool JobRun::isSelectIsSet() const
{
    return isSelectIsSet_;
}

void JobRun::unsetisSelect()
{
    isSelectIsSet_ = false;
}

std::string JobRun::getTimeout() const
{
    return timeout_;
}

void JobRun::setTimeout(const std::string& value)
{
    timeout_ = value;
    timeoutIsSet_ = true;
}

bool JobRun::timeoutIsSet() const
{
    return timeoutIsSet_;
}

void JobRun::unsettimeout()
{
    timeoutIsSet_ = false;
}

std::string JobRun::getLastDispatchId() const
{
    return lastDispatchId_;
}

void JobRun::setLastDispatchId(const std::string& value)
{
    lastDispatchId_ = value;
    lastDispatchIdIsSet_ = true;
}

bool JobRun::lastDispatchIdIsSet() const
{
    return lastDispatchIdIsSet_;
}

void JobRun::unsetlastDispatchId()
{
    lastDispatchIdIsSet_ = false;
}

std::string JobRun::getStatus() const
{
    return status_;
}

void JobRun::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool JobRun::statusIsSet() const
{
    return statusIsSet_;
}

void JobRun::unsetstatus()
{
    statusIsSet_ = false;
}

std::string JobRun::getMessage() const
{
    return message_;
}

void JobRun::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool JobRun::messageIsSet() const
{
    return messageIsSet_;
}

void JobRun::unsetmessage()
{
    messageIsSet_ = false;
}

int64_t JobRun::getStartTime() const
{
    return startTime_;
}

void JobRun::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool JobRun::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void JobRun::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int64_t JobRun::getEndTime() const
{
    return endTime_;
}

void JobRun::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool JobRun::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void JobRun::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::vector<StepRun>& JobRun::getSteps()
{
    return steps_;
}

void JobRun::setSteps(const std::vector<StepRun>& value)
{
    steps_ = value;
    stepsIsSet_ = true;
}

bool JobRun::stepsIsSet() const
{
    return stepsIsSet_;
}

void JobRun::unsetsteps()
{
    stepsIsSet_ = false;
}

std::string JobRun::getExecId() const
{
    return execId_;
}

void JobRun::setExecId(const std::string& value)
{
    execId_ = value;
    execIdIsSet_ = true;
}

bool JobRun::execIdIsSet() const
{
    return execIdIsSet_;
}

void JobRun::unsetexecId()
{
    execIdIsSet_ = false;
}

}
}
}
}
}


