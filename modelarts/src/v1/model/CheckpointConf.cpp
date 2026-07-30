

#include "huaweicloud/modelarts/v1/model/CheckpointConf.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




CheckpointConf::CheckpointConf()
{
    checkpointId_ = "";
    checkpointIdIsSet_ = false;
    saveCheckpointsMax_ = 0;
    saveCheckpointsMaxIsSet_ = false;
    skippedSteps_ = 0;
    skippedStepsIsSet_ = false;
    restoreTraining_ = 0;
    restoreTrainingIsSet_ = false;
}

CheckpointConf::~CheckpointConf() = default;

void CheckpointConf::validate()
{
}

web::json::value CheckpointConf::toJson() const
{
    web::json::value val = web::json::value::object();

    if(checkpointIdIsSet_) {
        val[utility::conversions::to_string_t("checkpoint_id")] = ModelBase::toJson(checkpointId_);
    }
    if(saveCheckpointsMaxIsSet_) {
        val[utility::conversions::to_string_t("save_checkpoints_max")] = ModelBase::toJson(saveCheckpointsMax_);
    }
    if(skippedStepsIsSet_) {
        val[utility::conversions::to_string_t("skipped_steps")] = ModelBase::toJson(skippedSteps_);
    }
    if(restoreTrainingIsSet_) {
        val[utility::conversions::to_string_t("restore_training")] = ModelBase::toJson(restoreTraining_);
    }

    return val;
}
bool CheckpointConf::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("checkpoint_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("checkpoint_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCheckpointId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("save_checkpoints_max"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("save_checkpoints_max"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSaveCheckpointsMax(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("skipped_steps"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("skipped_steps"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSkippedSteps(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("restore_training"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("restore_training"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRestoreTraining(refVal);
        }
    }
    return ok;
}


std::string CheckpointConf::getCheckpointId() const
{
    return checkpointId_;
}

void CheckpointConf::setCheckpointId(const std::string& value)
{
    checkpointId_ = value;
    checkpointIdIsSet_ = true;
}

bool CheckpointConf::checkpointIdIsSet() const
{
    return checkpointIdIsSet_;
}

void CheckpointConf::unsetcheckpointId()
{
    checkpointIdIsSet_ = false;
}

int32_t CheckpointConf::getSaveCheckpointsMax() const
{
    return saveCheckpointsMax_;
}

void CheckpointConf::setSaveCheckpointsMax(int32_t value)
{
    saveCheckpointsMax_ = value;
    saveCheckpointsMaxIsSet_ = true;
}

bool CheckpointConf::saveCheckpointsMaxIsSet() const
{
    return saveCheckpointsMaxIsSet_;
}

void CheckpointConf::unsetsaveCheckpointsMax()
{
    saveCheckpointsMaxIsSet_ = false;
}

int32_t CheckpointConf::getSkippedSteps() const
{
    return skippedSteps_;
}

void CheckpointConf::setSkippedSteps(int32_t value)
{
    skippedSteps_ = value;
    skippedStepsIsSet_ = true;
}

bool CheckpointConf::skippedStepsIsSet() const
{
    return skippedStepsIsSet_;
}

void CheckpointConf::unsetskippedSteps()
{
    skippedStepsIsSet_ = false;
}

int32_t CheckpointConf::getRestoreTraining() const
{
    return restoreTraining_;
}

void CheckpointConf::setRestoreTraining(int32_t value)
{
    restoreTraining_ = value;
    restoreTrainingIsSet_ = true;
}

bool CheckpointConf::restoreTrainingIsSet() const
{
    return restoreTrainingIsSet_;
}

void CheckpointConf::unsetrestoreTraining()
{
    restoreTrainingIsSet_ = false;
}

}
}
}
}
}


