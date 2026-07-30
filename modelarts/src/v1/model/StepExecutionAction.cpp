

#include "huaweicloud/modelarts/v1/model/StepExecutionAction.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




StepExecutionAction::StepExecutionAction()
{
    actionName_ = "";
    actionNameIsSet_ = false;
    dataRequirementsIsSet_ = false;
    parametersIsSet_ = false;
}

StepExecutionAction::~StepExecutionAction() = default;

void StepExecutionAction::validate()
{
}

web::json::value StepExecutionAction::toJson() const
{
    web::json::value val = web::json::value::object();

    if(actionNameIsSet_) {
        val[utility::conversions::to_string_t("action_name")] = ModelBase::toJson(actionName_);
    }
    if(dataRequirementsIsSet_) {
        val[utility::conversions::to_string_t("data_requirements")] = ModelBase::toJson(dataRequirements_);
    }
    if(parametersIsSet_) {
        val[utility::conversions::to_string_t("parameters")] = ModelBase::toJson(parameters_);
    }

    return val;
}
bool StepExecutionAction::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("action_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActionName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data_requirements"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_requirements"));
        if(!fieldValue.is_null())
        {
            std::vector<DataRequirement> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataRequirements(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parameters"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parameters"));
        if(!fieldValue.is_null())
        {
            std::vector<WorkflowParameter> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParameters(refVal);
        }
    }
    return ok;
}


std::string StepExecutionAction::getActionName() const
{
    return actionName_;
}

void StepExecutionAction::setActionName(const std::string& value)
{
    actionName_ = value;
    actionNameIsSet_ = true;
}

bool StepExecutionAction::actionNameIsSet() const
{
    return actionNameIsSet_;
}

void StepExecutionAction::unsetactionName()
{
    actionNameIsSet_ = false;
}

std::vector<DataRequirement>& StepExecutionAction::getDataRequirements()
{
    return dataRequirements_;
}

void StepExecutionAction::setDataRequirements(const std::vector<DataRequirement>& value)
{
    dataRequirements_ = value;
    dataRequirementsIsSet_ = true;
}

bool StepExecutionAction::dataRequirementsIsSet() const
{
    return dataRequirementsIsSet_;
}

void StepExecutionAction::unsetdataRequirements()
{
    dataRequirementsIsSet_ = false;
}

std::vector<WorkflowParameter>& StepExecutionAction::getParameters()
{
    return parameters_;
}

void StepExecutionAction::setParameters(const std::vector<WorkflowParameter>& value)
{
    parameters_ = value;
    parametersIsSet_ = true;
}

bool StepExecutionAction::parametersIsSet() const
{
    return parametersIsSet_;
}

void StepExecutionAction::unsetparameters()
{
    parametersIsSet_ = false;
}

}
}
}
}
}


