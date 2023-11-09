

#include "huaweicloud/tics/v1/model/StageVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Tics {
namespace V1 {
namespace Model {




StageVo::StageVo()
{
    id_ = 0;
    idIsSet_ = false;
    lastStepStageIdIsSet_ = false;
    processorsIsSet_ = false;
    stageName_ = "";
    stageNameIsSet_ = false;
}

StageVo::~StageVo() = default;

void StageVo::validate()
{
}

web::json::value StageVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(lastStepStageIdIsSet_) {
        val[utility::conversions::to_string_t("last_step_stage_id")] = ModelBase::toJson(lastStepStageId_);
    }
    if(processorsIsSet_) {
        val[utility::conversions::to_string_t("processors")] = ModelBase::toJson(processors_);
    }
    if(stageNameIsSet_) {
        val[utility::conversions::to_string_t("stage_name")] = ModelBase::toJson(stageName_);
    }

    return val;
}
bool StageVo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_step_stage_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_step_stage_id"));
        if(!fieldValue.is_null())
        {
            std::vector<int32_t> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastStepStageId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("processors"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("processors"));
        if(!fieldValue.is_null())
        {
            std::vector<ProcessorVo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProcessors(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("stage_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stage_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStageName(refVal);
        }
    }
    return ok;
}


int32_t StageVo::getId() const
{
    return id_;
}

void StageVo::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool StageVo::idIsSet() const
{
    return idIsSet_;
}

void StageVo::unsetid()
{
    idIsSet_ = false;
}

std::vector<int32_t>& StageVo::getLastStepStageId()
{
    return lastStepStageId_;
}

void StageVo::setLastStepStageId(std::vector<int32_t> value)
{
    lastStepStageId_ = value;
    lastStepStageIdIsSet_ = true;
}

bool StageVo::lastStepStageIdIsSet() const
{
    return lastStepStageIdIsSet_;
}

void StageVo::unsetlastStepStageId()
{
    lastStepStageIdIsSet_ = false;
}

std::vector<ProcessorVo>& StageVo::getProcessors()
{
    return processors_;
}

void StageVo::setProcessors(const std::vector<ProcessorVo>& value)
{
    processors_ = value;
    processorsIsSet_ = true;
}

bool StageVo::processorsIsSet() const
{
    return processorsIsSet_;
}

void StageVo::unsetprocessors()
{
    processorsIsSet_ = false;
}

std::string StageVo::getStageName() const
{
    return stageName_;
}

void StageVo::setStageName(const std::string& value)
{
    stageName_ = value;
    stageNameIsSet_ = true;
}

bool StageVo::stageNameIsSet() const
{
    return stageNameIsSet_;
}

void StageVo::unsetstageName()
{
    stageNameIsSet_ = false;
}

}
}
}
}
}


