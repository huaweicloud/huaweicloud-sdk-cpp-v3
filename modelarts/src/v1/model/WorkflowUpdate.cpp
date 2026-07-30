

#include "huaweicloud/modelarts/v1/model/WorkflowUpdate.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




WorkflowUpdate::WorkflowUpdate()
{
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    dataRequirementsIsSet_ = false;
    parametersIsSet_ = false;
    storagesIsSet_ = false;
    labelsIsSet_ = false;
    smnSwitch_ = "";
    smnSwitchIsSet_ = false;
    stepsIsSet_ = false;
}

WorkflowUpdate::~WorkflowUpdate() = default;

void WorkflowUpdate::validate()
{
}

web::json::value WorkflowUpdate::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(dataRequirementsIsSet_) {
        val[utility::conversions::to_string_t("data_requirements")] = ModelBase::toJson(dataRequirements_);
    }
    if(parametersIsSet_) {
        val[utility::conversions::to_string_t("parameters")] = ModelBase::toJson(parameters_);
    }
    if(storagesIsSet_) {
        val[utility::conversions::to_string_t("storages")] = ModelBase::toJson(storages_);
    }
    if(labelsIsSet_) {
        val[utility::conversions::to_string_t("labels")] = ModelBase::toJson(labels_);
    }
    if(smnSwitchIsSet_) {
        val[utility::conversions::to_string_t("smn_switch")] = ModelBase::toJson(smnSwitch_);
    }
    if(stepsIsSet_) {
        val[utility::conversions::to_string_t("steps")] = ModelBase::toJson(steps_);
    }

    return val;
}
bool WorkflowUpdate::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("storages"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("storages"));
        if(!fieldValue.is_null())
        {
            std::vector<WorkflowStorage> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStorages(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("labels"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("labels"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLabels(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("smn_switch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("smn_switch"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSmnSwitch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("steps"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("steps"));
        if(!fieldValue.is_null())
        {
            std::vector<WorkflowStep> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSteps(refVal);
        }
    }
    return ok;
}


std::string WorkflowUpdate::getName() const
{
    return name_;
}

void WorkflowUpdate::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool WorkflowUpdate::nameIsSet() const
{
    return nameIsSet_;
}

void WorkflowUpdate::unsetname()
{
    nameIsSet_ = false;
}

std::string WorkflowUpdate::getDescription() const
{
    return description_;
}

void WorkflowUpdate::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool WorkflowUpdate::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void WorkflowUpdate::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::vector<DataRequirement>& WorkflowUpdate::getDataRequirements()
{
    return dataRequirements_;
}

void WorkflowUpdate::setDataRequirements(const std::vector<DataRequirement>& value)
{
    dataRequirements_ = value;
    dataRequirementsIsSet_ = true;
}

bool WorkflowUpdate::dataRequirementsIsSet() const
{
    return dataRequirementsIsSet_;
}

void WorkflowUpdate::unsetdataRequirements()
{
    dataRequirementsIsSet_ = false;
}

std::vector<WorkflowParameter>& WorkflowUpdate::getParameters()
{
    return parameters_;
}

void WorkflowUpdate::setParameters(const std::vector<WorkflowParameter>& value)
{
    parameters_ = value;
    parametersIsSet_ = true;
}

bool WorkflowUpdate::parametersIsSet() const
{
    return parametersIsSet_;
}

void WorkflowUpdate::unsetparameters()
{
    parametersIsSet_ = false;
}

std::vector<WorkflowStorage>& WorkflowUpdate::getStorages()
{
    return storages_;
}

void WorkflowUpdate::setStorages(const std::vector<WorkflowStorage>& value)
{
    storages_ = value;
    storagesIsSet_ = true;
}

bool WorkflowUpdate::storagesIsSet() const
{
    return storagesIsSet_;
}

void WorkflowUpdate::unsetstorages()
{
    storagesIsSet_ = false;
}

std::vector<std::string>& WorkflowUpdate::getLabels()
{
    return labels_;
}

void WorkflowUpdate::setLabels(const std::vector<std::string>& value)
{
    labels_ = value;
    labelsIsSet_ = true;
}

bool WorkflowUpdate::labelsIsSet() const
{
    return labelsIsSet_;
}

void WorkflowUpdate::unsetlabels()
{
    labelsIsSet_ = false;
}

std::string WorkflowUpdate::getSmnSwitch() const
{
    return smnSwitch_;
}

void WorkflowUpdate::setSmnSwitch(const std::string& value)
{
    smnSwitch_ = value;
    smnSwitchIsSet_ = true;
}

bool WorkflowUpdate::smnSwitchIsSet() const
{
    return smnSwitchIsSet_;
}

void WorkflowUpdate::unsetsmnSwitch()
{
    smnSwitchIsSet_ = false;
}

std::vector<WorkflowStep>& WorkflowUpdate::getSteps()
{
    return steps_;
}

void WorkflowUpdate::setSteps(const std::vector<WorkflowStep>& value)
{
    steps_ = value;
    stepsIsSet_ = true;
}

bool WorkflowUpdate::stepsIsSet() const
{
    return stepsIsSet_;
}

void WorkflowUpdate::unsetsteps()
{
    stepsIsSet_ = false;
}

}
}
}
}
}


