

#include "huaweicloud/modelarts/v1/model/Task_algorithm_job_config.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




Task_algorithm_job_config::Task_algorithm_job_config()
{
    parametersIsSet_ = false;
    inputsIsSet_ = false;
    outputsIsSet_ = false;
    engineIsSet_ = false;
}

Task_algorithm_job_config::~Task_algorithm_job_config() = default;

void Task_algorithm_job_config::validate()
{
}

web::json::value Task_algorithm_job_config::toJson() const
{
    web::json::value val = web::json::value::object();

    if(parametersIsSet_) {
        val[utility::conversions::to_string_t("parameters")] = ModelBase::toJson(parameters_);
    }
    if(inputsIsSet_) {
        val[utility::conversions::to_string_t("inputs")] = ModelBase::toJson(inputs_);
    }
    if(outputsIsSet_) {
        val[utility::conversions::to_string_t("outputs")] = ModelBase::toJson(outputs_);
    }
    if(engineIsSet_) {
        val[utility::conversions::to_string_t("engine")] = ModelBase::toJson(engine_);
    }

    return val;
}
bool Task_algorithm_job_config::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("parameters"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parameters"));
        if(!fieldValue.is_null())
        {
            std::vector<Parameter> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParameters(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("inputs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("inputs"));
        if(!fieldValue.is_null())
        {
            std::vector<Input> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInputs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("outputs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("outputs"));
        if(!fieldValue.is_null())
        {
            std::vector<Output> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutputs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("engine"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("engine"));
        if(!fieldValue.is_null())
        {
            Task_algorithm_job_config_engine refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEngine(refVal);
        }
    }
    return ok;
}


std::vector<Parameter>& Task_algorithm_job_config::getParameters()
{
    return parameters_;
}

void Task_algorithm_job_config::setParameters(const std::vector<Parameter>& value)
{
    parameters_ = value;
    parametersIsSet_ = true;
}

bool Task_algorithm_job_config::parametersIsSet() const
{
    return parametersIsSet_;
}

void Task_algorithm_job_config::unsetparameters()
{
    parametersIsSet_ = false;
}

std::vector<Input>& Task_algorithm_job_config::getInputs()
{
    return inputs_;
}

void Task_algorithm_job_config::setInputs(const std::vector<Input>& value)
{
    inputs_ = value;
    inputsIsSet_ = true;
}

bool Task_algorithm_job_config::inputsIsSet() const
{
    return inputsIsSet_;
}

void Task_algorithm_job_config::unsetinputs()
{
    inputsIsSet_ = false;
}

std::vector<Output>& Task_algorithm_job_config::getOutputs()
{
    return outputs_;
}

void Task_algorithm_job_config::setOutputs(const std::vector<Output>& value)
{
    outputs_ = value;
    outputsIsSet_ = true;
}

bool Task_algorithm_job_config::outputsIsSet() const
{
    return outputsIsSet_;
}

void Task_algorithm_job_config::unsetoutputs()
{
    outputsIsSet_ = false;
}

Task_algorithm_job_config_engine Task_algorithm_job_config::getEngine() const
{
    return engine_;
}

void Task_algorithm_job_config::setEngine(const Task_algorithm_job_config_engine& value)
{
    engine_ = value;
    engineIsSet_ = true;
}

bool Task_algorithm_job_config::engineIsSet() const
{
    return engineIsSet_;
}

void Task_algorithm_job_config::unsetengine()
{
    engineIsSet_ = false;
}

}
}
}
}
}


