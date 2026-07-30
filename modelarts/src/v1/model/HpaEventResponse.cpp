

#include "huaweicloud/modelarts/v1/model/HpaEventResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




HpaEventResponse::HpaEventResponse()
{
    id_ = "";
    idIsSet_ = false;
    hpaId_ = "";
    hpaIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
    currentReplicas_ = 0;
    currentReplicasIsSet_ = false;
    targetReplicas_ = 0;
    targetReplicasIsSet_ = false;
    finalReplicas_ = 0;
    finalReplicasIsSet_ = false;
    recordTime_ = "";
    recordTimeIsSet_ = false;
}

HpaEventResponse::~HpaEventResponse() = default;

void HpaEventResponse::validate()
{
}

web::json::value HpaEventResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(hpaIdIsSet_) {
        val[utility::conversions::to_string_t("hpa_id")] = ModelBase::toJson(hpaId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }
    if(currentReplicasIsSet_) {
        val[utility::conversions::to_string_t("current_replicas")] = ModelBase::toJson(currentReplicas_);
    }
    if(targetReplicasIsSet_) {
        val[utility::conversions::to_string_t("target_replicas")] = ModelBase::toJson(targetReplicas_);
    }
    if(finalReplicasIsSet_) {
        val[utility::conversions::to_string_t("final_replicas")] = ModelBase::toJson(finalReplicas_);
    }
    if(recordTimeIsSet_) {
        val[utility::conversions::to_string_t("record_time")] = ModelBase::toJson(recordTime_);
    }

    return val;
}
bool HpaEventResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("current_replicas"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("current_replicas"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCurrentReplicas(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("final_replicas"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("final_replicas"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFinalReplicas(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("record_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("record_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecordTime(refVal);
        }
    }
    return ok;
}


std::string HpaEventResponse::getId() const
{
    return id_;
}

void HpaEventResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool HpaEventResponse::idIsSet() const
{
    return idIsSet_;
}

void HpaEventResponse::unsetid()
{
    idIsSet_ = false;
}

std::string HpaEventResponse::getHpaId() const
{
    return hpaId_;
}

void HpaEventResponse::setHpaId(const std::string& value)
{
    hpaId_ = value;
    hpaIdIsSet_ = true;
}

bool HpaEventResponse::hpaIdIsSet() const
{
    return hpaIdIsSet_;
}

void HpaEventResponse::unsethpaId()
{
    hpaIdIsSet_ = false;
}

std::string HpaEventResponse::getStatus() const
{
    return status_;
}

void HpaEventResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool HpaEventResponse::statusIsSet() const
{
    return statusIsSet_;
}

void HpaEventResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string HpaEventResponse::getMessage() const
{
    return message_;
}

void HpaEventResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool HpaEventResponse::messageIsSet() const
{
    return messageIsSet_;
}

void HpaEventResponse::unsetmessage()
{
    messageIsSet_ = false;
}

int32_t HpaEventResponse::getCurrentReplicas() const
{
    return currentReplicas_;
}

void HpaEventResponse::setCurrentReplicas(int32_t value)
{
    currentReplicas_ = value;
    currentReplicasIsSet_ = true;
}

bool HpaEventResponse::currentReplicasIsSet() const
{
    return currentReplicasIsSet_;
}

void HpaEventResponse::unsetcurrentReplicas()
{
    currentReplicasIsSet_ = false;
}

int32_t HpaEventResponse::getTargetReplicas() const
{
    return targetReplicas_;
}

void HpaEventResponse::setTargetReplicas(int32_t value)
{
    targetReplicas_ = value;
    targetReplicasIsSet_ = true;
}

bool HpaEventResponse::targetReplicasIsSet() const
{
    return targetReplicasIsSet_;
}

void HpaEventResponse::unsettargetReplicas()
{
    targetReplicasIsSet_ = false;
}

int32_t HpaEventResponse::getFinalReplicas() const
{
    return finalReplicas_;
}

void HpaEventResponse::setFinalReplicas(int32_t value)
{
    finalReplicas_ = value;
    finalReplicasIsSet_ = true;
}

bool HpaEventResponse::finalReplicasIsSet() const
{
    return finalReplicasIsSet_;
}

void HpaEventResponse::unsetfinalReplicas()
{
    finalReplicasIsSet_ = false;
}

std::string HpaEventResponse::getRecordTime() const
{
    return recordTime_;
}

void HpaEventResponse::setRecordTime(const std::string& value)
{
    recordTime_ = value;
    recordTimeIsSet_ = true;
}

bool HpaEventResponse::recordTimeIsSet() const
{
    return recordTimeIsSet_;
}

void HpaEventResponse::unsetrecordTime()
{
    recordTimeIsSet_ = false;
}

}
}
}
}
}


