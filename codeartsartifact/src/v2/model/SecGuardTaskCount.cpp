

#include "huaweicloud/codeartsartifact/v2/model/SecGuardTaskCount.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




SecGuardTaskCount::SecGuardTaskCount()
{
    task_ = 0;
    taskIsSet_ = false;
    artifact_ = 0;
    artifactIsSet_ = false;
    opensourceIsSet_ = false;
    virus_ = 0;
    virusIsSet_ = false;
    malwareIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
    listIsSet_ = false;
}

SecGuardTaskCount::~SecGuardTaskCount() = default;

void SecGuardTaskCount::validate()
{
}

web::json::value SecGuardTaskCount::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskIsSet_) {
        val[utility::conversions::to_string_t("task")] = ModelBase::toJson(task_);
    }
    if(artifactIsSet_) {
        val[utility::conversions::to_string_t("artifact")] = ModelBase::toJson(artifact_);
    }
    if(opensourceIsSet_) {
        val[utility::conversions::to_string_t("opensource")] = ModelBase::toJson(opensource_);
    }
    if(virusIsSet_) {
        val[utility::conversions::to_string_t("virus")] = ModelBase::toJson(virus_);
    }
    if(malwareIsSet_) {
        val[utility::conversions::to_string_t("malware")] = ModelBase::toJson(malware_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(listIsSet_) {
        val[utility::conversions::to_string_t("list")] = ModelBase::toJson(list_);
    }

    return val;
}
bool SecGuardTaskCount::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("task"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTask(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("artifact"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("artifact"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setArtifact(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("opensource"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("opensource"));
        if(!fieldValue.is_null())
        {
            OpensourceCount refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOpensource(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("virus"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("virus"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVirus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("malware"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("malware"));
        if(!fieldValue.is_null())
        {
            MalwareCount refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMalware(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("list"));
        if(!fieldValue.is_null())
        {
            std::vector<SecGuardTaskDetail> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setList(refVal);
        }
    }
    return ok;
}


int32_t SecGuardTaskCount::getTask() const
{
    return task_;
}

void SecGuardTaskCount::setTask(int32_t value)
{
    task_ = value;
    taskIsSet_ = true;
}

bool SecGuardTaskCount::taskIsSet() const
{
    return taskIsSet_;
}

void SecGuardTaskCount::unsettask()
{
    taskIsSet_ = false;
}

int32_t SecGuardTaskCount::getArtifact() const
{
    return artifact_;
}

void SecGuardTaskCount::setArtifact(int32_t value)
{
    artifact_ = value;
    artifactIsSet_ = true;
}

bool SecGuardTaskCount::artifactIsSet() const
{
    return artifactIsSet_;
}

void SecGuardTaskCount::unsetartifact()
{
    artifactIsSet_ = false;
}

OpensourceCount SecGuardTaskCount::getOpensource() const
{
    return opensource_;
}

void SecGuardTaskCount::setOpensource(const OpensourceCount& value)
{
    opensource_ = value;
    opensourceIsSet_ = true;
}

bool SecGuardTaskCount::opensourceIsSet() const
{
    return opensourceIsSet_;
}

void SecGuardTaskCount::unsetopensource()
{
    opensourceIsSet_ = false;
}

int32_t SecGuardTaskCount::getVirus() const
{
    return virus_;
}

void SecGuardTaskCount::setVirus(int32_t value)
{
    virus_ = value;
    virusIsSet_ = true;
}

bool SecGuardTaskCount::virusIsSet() const
{
    return virusIsSet_;
}

void SecGuardTaskCount::unsetvirus()
{
    virusIsSet_ = false;
}

MalwareCount SecGuardTaskCount::getMalware() const
{
    return malware_;
}

void SecGuardTaskCount::setMalware(const MalwareCount& value)
{
    malware_ = value;
    malwareIsSet_ = true;
}

bool SecGuardTaskCount::malwareIsSet() const
{
    return malwareIsSet_;
}

void SecGuardTaskCount::unsetmalware()
{
    malwareIsSet_ = false;
}

int32_t SecGuardTaskCount::getTotal() const
{
    return total_;
}

void SecGuardTaskCount::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool SecGuardTaskCount::totalIsSet() const
{
    return totalIsSet_;
}

void SecGuardTaskCount::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<SecGuardTaskDetail>& SecGuardTaskCount::getList()
{
    return list_;
}

void SecGuardTaskCount::setList(const std::vector<SecGuardTaskDetail>& value)
{
    list_ = value;
    listIsSet_ = true;
}

bool SecGuardTaskCount::listIsSet() const
{
    return listIsSet_;
}

void SecGuardTaskCount::unsetlist()
{
    listIsSet_ = false;
}

}
}
}
}
}


