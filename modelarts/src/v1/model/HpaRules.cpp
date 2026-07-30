

#include "huaweicloud/modelarts/v1/model/HpaRules.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




HpaRules::HpaRules()
{
    name_ = "";
    nameIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    disable_ = false;
    disableIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    operate_ = "";
    operateIsSet_ = false;
    schedule_ = "";
    scheduleIsSet_ = false;
    targetReplicas_ = 0;
    targetReplicasIsSet_ = false;
    minReplicas_ = 0;
    minReplicasIsSet_ = false;
    maxReplicas_ = 0;
    maxReplicasIsSet_ = false;
    downscaleWindow_ = 0;
    downscaleWindowIsSet_ = false;
    upscaleWindow_ = 0;
    upscaleWindowIsSet_ = false;
}

HpaRules::~HpaRules() = default;

void HpaRules::validate()
{
}

web::json::value HpaRules::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(disableIsSet_) {
        val[utility::conversions::to_string_t("disable")] = ModelBase::toJson(disable_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(operateIsSet_) {
        val[utility::conversions::to_string_t("operate")] = ModelBase::toJson(operate_);
    }
    if(scheduleIsSet_) {
        val[utility::conversions::to_string_t("schedule")] = ModelBase::toJson(schedule_);
    }
    if(targetReplicasIsSet_) {
        val[utility::conversions::to_string_t("target_replicas")] = ModelBase::toJson(targetReplicas_);
    }
    if(minReplicasIsSet_) {
        val[utility::conversions::to_string_t("min_replicas")] = ModelBase::toJson(minReplicas_);
    }
    if(maxReplicasIsSet_) {
        val[utility::conversions::to_string_t("max_replicas")] = ModelBase::toJson(maxReplicas_);
    }
    if(downscaleWindowIsSet_) {
        val[utility::conversions::to_string_t("downscale_window")] = ModelBase::toJson(downscaleWindow_);
    }
    if(upscaleWindowIsSet_) {
        val[utility::conversions::to_string_t("upscale_window")] = ModelBase::toJson(upscaleWindow_);
    }

    return val;
}
bool HpaRules::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("disable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("disable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisable(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("operate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operate"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperate(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("min_replicas"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("min_replicas"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMinReplicas(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("max_replicas"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_replicas"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxReplicas(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("downscale_window"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("downscale_window"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDownscaleWindow(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("upscale_window"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("upscale_window"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpscaleWindow(refVal);
        }
    }
    return ok;
}


std::string HpaRules::getName() const
{
    return name_;
}

void HpaRules::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool HpaRules::nameIsSet() const
{
    return nameIsSet_;
}

void HpaRules::unsetname()
{
    nameIsSet_ = false;
}

std::string HpaRules::getId() const
{
    return id_;
}

void HpaRules::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool HpaRules::idIsSet() const
{
    return idIsSet_;
}

void HpaRules::unsetid()
{
    idIsSet_ = false;
}

bool HpaRules::isDisable() const
{
    return disable_;
}

void HpaRules::setDisable(bool value)
{
    disable_ = value;
    disableIsSet_ = true;
}

bool HpaRules::disableIsSet() const
{
    return disableIsSet_;
}

void HpaRules::unsetdisable()
{
    disableIsSet_ = false;
}

std::string HpaRules::getType() const
{
    return type_;
}

void HpaRules::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool HpaRules::typeIsSet() const
{
    return typeIsSet_;
}

void HpaRules::unsettype()
{
    typeIsSet_ = false;
}

std::string HpaRules::getStatus() const
{
    return status_;
}

void HpaRules::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool HpaRules::statusIsSet() const
{
    return statusIsSet_;
}

void HpaRules::unsetstatus()
{
    statusIsSet_ = false;
}

std::string HpaRules::getOperate() const
{
    return operate_;
}

void HpaRules::setOperate(const std::string& value)
{
    operate_ = value;
    operateIsSet_ = true;
}

bool HpaRules::operateIsSet() const
{
    return operateIsSet_;
}

void HpaRules::unsetoperate()
{
    operateIsSet_ = false;
}

std::string HpaRules::getSchedule() const
{
    return schedule_;
}

void HpaRules::setSchedule(const std::string& value)
{
    schedule_ = value;
    scheduleIsSet_ = true;
}

bool HpaRules::scheduleIsSet() const
{
    return scheduleIsSet_;
}

void HpaRules::unsetschedule()
{
    scheduleIsSet_ = false;
}

int32_t HpaRules::getTargetReplicas() const
{
    return targetReplicas_;
}

void HpaRules::setTargetReplicas(int32_t value)
{
    targetReplicas_ = value;
    targetReplicasIsSet_ = true;
}

bool HpaRules::targetReplicasIsSet() const
{
    return targetReplicasIsSet_;
}

void HpaRules::unsettargetReplicas()
{
    targetReplicasIsSet_ = false;
}

int32_t HpaRules::getMinReplicas() const
{
    return minReplicas_;
}

void HpaRules::setMinReplicas(int32_t value)
{
    minReplicas_ = value;
    minReplicasIsSet_ = true;
}

bool HpaRules::minReplicasIsSet() const
{
    return minReplicasIsSet_;
}

void HpaRules::unsetminReplicas()
{
    minReplicasIsSet_ = false;
}

int32_t HpaRules::getMaxReplicas() const
{
    return maxReplicas_;
}

void HpaRules::setMaxReplicas(int32_t value)
{
    maxReplicas_ = value;
    maxReplicasIsSet_ = true;
}

bool HpaRules::maxReplicasIsSet() const
{
    return maxReplicasIsSet_;
}

void HpaRules::unsetmaxReplicas()
{
    maxReplicasIsSet_ = false;
}

int32_t HpaRules::getDownscaleWindow() const
{
    return downscaleWindow_;
}

void HpaRules::setDownscaleWindow(int32_t value)
{
    downscaleWindow_ = value;
    downscaleWindowIsSet_ = true;
}

bool HpaRules::downscaleWindowIsSet() const
{
    return downscaleWindowIsSet_;
}

void HpaRules::unsetdownscaleWindow()
{
    downscaleWindowIsSet_ = false;
}

int32_t HpaRules::getUpscaleWindow() const
{
    return upscaleWindow_;
}

void HpaRules::setUpscaleWindow(int32_t value)
{
    upscaleWindow_ = value;
    upscaleWindowIsSet_ = true;
}

bool HpaRules::upscaleWindowIsSet() const
{
    return upscaleWindowIsSet_;
}

void HpaRules::unsetupscaleWindow()
{
    upscaleWindowIsSet_ = false;
}

}
}
}
}
}


