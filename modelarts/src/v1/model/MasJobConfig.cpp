

#include "huaweicloud/modelarts/v1/model/MasJobConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




MasJobConfig::MasJobConfig()
{
    ftJobUuid_ = "";
    ftJobUuidIsSet_ = false;
    ftTrainType_ = "";
    ftTrainTypeIsSet_ = false;
    modelType_ = "";
    modelTypeIsSet_ = false;
    trainOutputPath_ = "";
    trainOutputPathIsSet_ = false;
    trainProcess_ = 0.0;
    trainProcessIsSet_ = false;
    checkpointId_ = "";
    checkpointIdIsSet_ = false;
    taskEnvIsSet_ = false;
    checkpointConfigIsSet_ = false;
}

MasJobConfig::~MasJobConfig() = default;

void MasJobConfig::validate()
{
}

web::json::value MasJobConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ftJobUuidIsSet_) {
        val[utility::conversions::to_string_t("ft_job_uuid")] = ModelBase::toJson(ftJobUuid_);
    }
    if(ftTrainTypeIsSet_) {
        val[utility::conversions::to_string_t("ft_train_type")] = ModelBase::toJson(ftTrainType_);
    }
    if(modelTypeIsSet_) {
        val[utility::conversions::to_string_t("model_type")] = ModelBase::toJson(modelType_);
    }
    if(trainOutputPathIsSet_) {
        val[utility::conversions::to_string_t("train_output_path")] = ModelBase::toJson(trainOutputPath_);
    }
    if(trainProcessIsSet_) {
        val[utility::conversions::to_string_t("train_process")] = ModelBase::toJson(trainProcess_);
    }
    if(checkpointIdIsSet_) {
        val[utility::conversions::to_string_t("checkpoint_id")] = ModelBase::toJson(checkpointId_);
    }
    if(taskEnvIsSet_) {
        val[utility::conversions::to_string_t("task_env")] = ModelBase::toJson(taskEnv_);
    }
    if(checkpointConfigIsSet_) {
        val[utility::conversions::to_string_t("checkpoint_config")] = ModelBase::toJson(checkpointConfig_);
    }

    return val;
}
bool MasJobConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("ft_job_uuid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ft_job_uuid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFtJobUuid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ft_train_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ft_train_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFtTrainType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("model_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("model_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModelType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("train_output_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("train_output_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTrainOutputPath(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("train_process"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("train_process"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTrainProcess(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("checkpoint_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("checkpoint_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCheckpointId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_env"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_env"));
        if(!fieldValue.is_null())
        {
            TaskEnv refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskEnv(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("checkpoint_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("checkpoint_config"));
        if(!fieldValue.is_null())
        {
            CheckpointConf refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCheckpointConfig(refVal);
        }
    }
    return ok;
}


std::string MasJobConfig::getFtJobUuid() const
{
    return ftJobUuid_;
}

void MasJobConfig::setFtJobUuid(const std::string& value)
{
    ftJobUuid_ = value;
    ftJobUuidIsSet_ = true;
}

bool MasJobConfig::ftJobUuidIsSet() const
{
    return ftJobUuidIsSet_;
}

void MasJobConfig::unsetftJobUuid()
{
    ftJobUuidIsSet_ = false;
}

std::string MasJobConfig::getFtTrainType() const
{
    return ftTrainType_;
}

void MasJobConfig::setFtTrainType(const std::string& value)
{
    ftTrainType_ = value;
    ftTrainTypeIsSet_ = true;
}

bool MasJobConfig::ftTrainTypeIsSet() const
{
    return ftTrainTypeIsSet_;
}

void MasJobConfig::unsetftTrainType()
{
    ftTrainTypeIsSet_ = false;
}

std::string MasJobConfig::getModelType() const
{
    return modelType_;
}

void MasJobConfig::setModelType(const std::string& value)
{
    modelType_ = value;
    modelTypeIsSet_ = true;
}

bool MasJobConfig::modelTypeIsSet() const
{
    return modelTypeIsSet_;
}

void MasJobConfig::unsetmodelType()
{
    modelTypeIsSet_ = false;
}

std::string MasJobConfig::getTrainOutputPath() const
{
    return trainOutputPath_;
}

void MasJobConfig::setTrainOutputPath(const std::string& value)
{
    trainOutputPath_ = value;
    trainOutputPathIsSet_ = true;
}

bool MasJobConfig::trainOutputPathIsSet() const
{
    return trainOutputPathIsSet_;
}

void MasJobConfig::unsettrainOutputPath()
{
    trainOutputPathIsSet_ = false;
}

double MasJobConfig::getTrainProcess() const
{
    return trainProcess_;
}

void MasJobConfig::setTrainProcess(double value)
{
    trainProcess_ = value;
    trainProcessIsSet_ = true;
}

bool MasJobConfig::trainProcessIsSet() const
{
    return trainProcessIsSet_;
}

void MasJobConfig::unsettrainProcess()
{
    trainProcessIsSet_ = false;
}

std::string MasJobConfig::getCheckpointId() const
{
    return checkpointId_;
}

void MasJobConfig::setCheckpointId(const std::string& value)
{
    checkpointId_ = value;
    checkpointIdIsSet_ = true;
}

bool MasJobConfig::checkpointIdIsSet() const
{
    return checkpointIdIsSet_;
}

void MasJobConfig::unsetcheckpointId()
{
    checkpointIdIsSet_ = false;
}

TaskEnv MasJobConfig::getTaskEnv() const
{
    return taskEnv_;
}

void MasJobConfig::setTaskEnv(const TaskEnv& value)
{
    taskEnv_ = value;
    taskEnvIsSet_ = true;
}

bool MasJobConfig::taskEnvIsSet() const
{
    return taskEnvIsSet_;
}

void MasJobConfig::unsettaskEnv()
{
    taskEnvIsSet_ = false;
}

CheckpointConf MasJobConfig::getCheckpointConfig() const
{
    return checkpointConfig_;
}

void MasJobConfig::setCheckpointConfig(const CheckpointConf& value)
{
    checkpointConfig_ = value;
    checkpointConfigIsSet_ = true;
}

bool MasJobConfig::checkpointConfigIsSet() const
{
    return checkpointConfigIsSet_;
}

void MasJobConfig::unsetcheckpointConfig()
{
    checkpointConfigIsSet_ = false;
}

}
}
}
}
}


