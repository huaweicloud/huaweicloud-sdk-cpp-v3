

#include "huaweicloud/modelarts/v1/model/ExecutionAction.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ExecutionAction::ExecutionAction()
{
    actionName_ = "";
    actionNameIsSet_ = false;
    policiesIsSet_ = false;
    parametersIsSet_ = false;
    dataRequirementsIsSet_ = false;
}

ExecutionAction::~ExecutionAction() = default;

void ExecutionAction::validate()
{
}

web::json::value ExecutionAction::toJson() const
{
    web::json::value val = web::json::value::object();

    if(actionNameIsSet_) {
        val[utility::conversions::to_string_t("action_name")] = ModelBase::toJson(actionName_);
    }
    if(policiesIsSet_) {
        val[utility::conversions::to_string_t("policies")] = ModelBase::toJson(policies_);
    }
    if(parametersIsSet_) {
        val[utility::conversions::to_string_t("parameters")] = ModelBase::toJson(parameters_);
    }
    if(dataRequirementsIsSet_) {
        val[utility::conversions::to_string_t("data_requirements")] = ModelBase::toJson(dataRequirements_);
    }

    return val;
}
bool ExecutionAction::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("policies"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("policies"));
        if(!fieldValue.is_null())
        {
            ExecutionActionPolicy refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPolicies(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("data_requirements"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_requirements"));
        if(!fieldValue.is_null())
        {
            std::vector<DataRequirement> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataRequirements(refVal);
        }
    }
    return ok;
}


std::string ExecutionAction::getActionName() const
{
    return actionName_;
}

void ExecutionAction::setActionName(const std::string& value)
{
    actionName_ = value;
    actionNameIsSet_ = true;
}

bool ExecutionAction::actionNameIsSet() const
{
    return actionNameIsSet_;
}

void ExecutionAction::unsetactionName()
{
    actionNameIsSet_ = false;
}

ExecutionActionPolicy ExecutionAction::getPolicies() const
{
    return policies_;
}

void ExecutionAction::setPolicies(const ExecutionActionPolicy& value)
{
    policies_ = value;
    policiesIsSet_ = true;
}

bool ExecutionAction::policiesIsSet() const
{
    return policiesIsSet_;
}

void ExecutionAction::unsetpolicies()
{
    policiesIsSet_ = false;
}

std::vector<WorkflowParameter>& ExecutionAction::getParameters()
{
    return parameters_;
}

void ExecutionAction::setParameters(const std::vector<WorkflowParameter>& value)
{
    parameters_ = value;
    parametersIsSet_ = true;
}

bool ExecutionAction::parametersIsSet() const
{
    return parametersIsSet_;
}

void ExecutionAction::unsetparameters()
{
    parametersIsSet_ = false;
}

std::vector<DataRequirement>& ExecutionAction::getDataRequirements()
{
    return dataRequirements_;
}

void ExecutionAction::setDataRequirements(const std::vector<DataRequirement>& value)
{
    dataRequirements_ = value;
    dataRequirementsIsSet_ = true;
}

bool ExecutionAction::dataRequirementsIsSet() const
{
    return dataRequirementsIsSet_;
}

void ExecutionAction::unsetdataRequirements()
{
    dataRequirementsIsSet_ = false;
}

}
}
}
}
}


