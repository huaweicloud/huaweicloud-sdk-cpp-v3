

#include "huaweicloud/modelarts/v1/model/HpaRule.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




HpaRule::HpaRule()
{
    id_ = "";
    idIsSet_ = false;
    hpaId_ = "";
    hpaIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    schedule_ = "";
    scheduleIsSet_ = false;
    targetReplicas_ = 0;
    targetReplicasIsSet_ = false;
    disable_ = "";
    disableIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

HpaRule::~HpaRule() = default;

void HpaRule::validate()
{
}

web::json::value HpaRule::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(hpaIdIsSet_) {
        val[utility::conversions::to_string_t("hpa_id")] = ModelBase::toJson(hpaId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(scheduleIsSet_) {
        val[utility::conversions::to_string_t("schedule")] = ModelBase::toJson(schedule_);
    }
    if(targetReplicasIsSet_) {
        val[utility::conversions::to_string_t("target_replicas")] = ModelBase::toJson(targetReplicas_);
    }
    if(disableIsSet_) {
        val[utility::conversions::to_string_t("disable")] = ModelBase::toJson(disable_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool HpaRule::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("hpa_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hpa_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHpaId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("schedule"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("schedule"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSchedule(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_replicas"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_replicas"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetReplicas(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("disable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("disable"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisable(refVal);
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


std::string HpaRule::getId() const
{
    return id_;
}

void HpaRule::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool HpaRule::idIsSet() const
{
    return idIsSet_;
}

void HpaRule::unsetid()
{
    idIsSet_ = false;
}

std::string HpaRule::getHpaId() const
{
    return hpaId_;
}

void HpaRule::setHpaId(const std::string& value)
{
    hpaId_ = value;
    hpaIdIsSet_ = true;
}

bool HpaRule::hpaIdIsSet() const
{
    return hpaIdIsSet_;
}

void HpaRule::unsethpaId()
{
    hpaIdIsSet_ = false;
}

std::string HpaRule::getName() const
{
    return name_;
}

void HpaRule::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool HpaRule::nameIsSet() const
{
    return nameIsSet_;
}

void HpaRule::unsetname()
{
    nameIsSet_ = false;
}

std::string HpaRule::getType() const
{
    return type_;
}

void HpaRule::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool HpaRule::typeIsSet() const
{
    return typeIsSet_;
}

void HpaRule::unsettype()
{
    typeIsSet_ = false;
}

std::string HpaRule::getSchedule() const
{
    return schedule_;
}

void HpaRule::setSchedule(const std::string& value)
{
    schedule_ = value;
    scheduleIsSet_ = true;
}

bool HpaRule::scheduleIsSet() const
{
    return scheduleIsSet_;
}

void HpaRule::unsetschedule()
{
    scheduleIsSet_ = false;
}

int32_t HpaRule::getTargetReplicas() const
{
    return targetReplicas_;
}

void HpaRule::setTargetReplicas(int32_t value)
{
    targetReplicas_ = value;
    targetReplicasIsSet_ = true;
}

bool HpaRule::targetReplicasIsSet() const
{
    return targetReplicasIsSet_;
}

void HpaRule::unsettargetReplicas()
{
    targetReplicasIsSet_ = false;
}

std::string HpaRule::getDisable() const
{
    return disable_;
}

void HpaRule::setDisable(const std::string& value)
{
    disable_ = value;
    disableIsSet_ = true;
}

bool HpaRule::disableIsSet() const
{
    return disableIsSet_;
}

void HpaRule::unsetdisable()
{
    disableIsSet_ = false;
}

std::string HpaRule::getStatus() const
{
    return status_;
}

void HpaRule::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool HpaRule::statusIsSet() const
{
    return statusIsSet_;
}

void HpaRule::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


