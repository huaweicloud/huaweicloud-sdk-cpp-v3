

#include "huaweicloud/codeartspipeline/v2/model/ShowBasicPluginResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ShowBasicPluginResponse::ShowBasicPluginResponse()
{
    type_ = "";
    typeIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    friendlyName_ = "";
    friendlyNameIsSet_ = false;
    category_ = "";
    categoryIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
    versionDescription_ = "";
    versionDescriptionIsSet_ = false;
    inputsIsSet_ = false;
    dataSourceBindingsIsSet_ = false;
    outputsIsSet_ = false;
    executionIsSet_ = false;
}

ShowBasicPluginResponse::~ShowBasicPluginResponse() = default;

void ShowBasicPluginResponse::validate()
{
}

web::json::value ShowBasicPluginResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(friendlyNameIsSet_) {
        val[utility::conversions::to_string_t("friendly_name")] = ModelBase::toJson(friendlyName_);
    }
    if(categoryIsSet_) {
        val[utility::conversions::to_string_t("category")] = ModelBase::toJson(category_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(versionDescriptionIsSet_) {
        val[utility::conversions::to_string_t("version_description")] = ModelBase::toJson(versionDescription_);
    }
    if(inputsIsSet_) {
        val[utility::conversions::to_string_t("inputs")] = ModelBase::toJson(inputs_);
    }
    if(dataSourceBindingsIsSet_) {
        val[utility::conversions::to_string_t("data_source_bindings")] = ModelBase::toJson(dataSourceBindings_);
    }
    if(outputsIsSet_) {
        val[utility::conversions::to_string_t("outputs")] = ModelBase::toJson(outputs_);
    }
    if(executionIsSet_) {
        val[utility::conversions::to_string_t("execution")] = ModelBase::toJson(execution_);
    }

    return val;
}
bool ShowBasicPluginResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("friendly_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("friendly_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFriendlyName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("category"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("category"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCategory(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version_description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version_description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersionDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("inputs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("inputs"));
        if(!fieldValue.is_null())
        {
            std::vector<NewExtension_inputs> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInputs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data_source_bindings"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_source_bindings"));
        if(!fieldValue.is_null())
        {
            std::vector<NewExtension_data_source_bindings> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataSourceBindings(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("outputs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("outputs"));
        if(!fieldValue.is_null())
        {
            std::vector<NewExtension_outputs> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutputs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("execution"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("execution"));
        if(!fieldValue.is_null())
        {
            NewExtension_execution refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecution(refVal);
        }
    }
    return ok;
}


std::string ShowBasicPluginResponse::getType() const
{
    return type_;
}

void ShowBasicPluginResponse::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ShowBasicPluginResponse::typeIsSet() const
{
    return typeIsSet_;
}

void ShowBasicPluginResponse::unsettype()
{
    typeIsSet_ = false;
}

std::string ShowBasicPluginResponse::getName() const
{
    return name_;
}

void ShowBasicPluginResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShowBasicPluginResponse::nameIsSet() const
{
    return nameIsSet_;
}

void ShowBasicPluginResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string ShowBasicPluginResponse::getFriendlyName() const
{
    return friendlyName_;
}

void ShowBasicPluginResponse::setFriendlyName(const std::string& value)
{
    friendlyName_ = value;
    friendlyNameIsSet_ = true;
}

bool ShowBasicPluginResponse::friendlyNameIsSet() const
{
    return friendlyNameIsSet_;
}

void ShowBasicPluginResponse::unsetfriendlyName()
{
    friendlyNameIsSet_ = false;
}

std::string ShowBasicPluginResponse::getCategory() const
{
    return category_;
}

void ShowBasicPluginResponse::setCategory(const std::string& value)
{
    category_ = value;
    categoryIsSet_ = true;
}

bool ShowBasicPluginResponse::categoryIsSet() const
{
    return categoryIsSet_;
}

void ShowBasicPluginResponse::unsetcategory()
{
    categoryIsSet_ = false;
}

std::string ShowBasicPluginResponse::getDescription() const
{
    return description_;
}

void ShowBasicPluginResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ShowBasicPluginResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ShowBasicPluginResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string ShowBasicPluginResponse::getVersion() const
{
    return version_;
}

void ShowBasicPluginResponse::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool ShowBasicPluginResponse::versionIsSet() const
{
    return versionIsSet_;
}

void ShowBasicPluginResponse::unsetversion()
{
    versionIsSet_ = false;
}

std::string ShowBasicPluginResponse::getVersionDescription() const
{
    return versionDescription_;
}

void ShowBasicPluginResponse::setVersionDescription(const std::string& value)
{
    versionDescription_ = value;
    versionDescriptionIsSet_ = true;
}

bool ShowBasicPluginResponse::versionDescriptionIsSet() const
{
    return versionDescriptionIsSet_;
}

void ShowBasicPluginResponse::unsetversionDescription()
{
    versionDescriptionIsSet_ = false;
}

std::vector<NewExtension_inputs>& ShowBasicPluginResponse::getInputs()
{
    return inputs_;
}

void ShowBasicPluginResponse::setInputs(const std::vector<NewExtension_inputs>& value)
{
    inputs_ = value;
    inputsIsSet_ = true;
}

bool ShowBasicPluginResponse::inputsIsSet() const
{
    return inputsIsSet_;
}

void ShowBasicPluginResponse::unsetinputs()
{
    inputsIsSet_ = false;
}

std::vector<NewExtension_data_source_bindings>& ShowBasicPluginResponse::getDataSourceBindings()
{
    return dataSourceBindings_;
}

void ShowBasicPluginResponse::setDataSourceBindings(const std::vector<NewExtension_data_source_bindings>& value)
{
    dataSourceBindings_ = value;
    dataSourceBindingsIsSet_ = true;
}

bool ShowBasicPluginResponse::dataSourceBindingsIsSet() const
{
    return dataSourceBindingsIsSet_;
}

void ShowBasicPluginResponse::unsetdataSourceBindings()
{
    dataSourceBindingsIsSet_ = false;
}

std::vector<NewExtension_outputs>& ShowBasicPluginResponse::getOutputs()
{
    return outputs_;
}

void ShowBasicPluginResponse::setOutputs(const std::vector<NewExtension_outputs>& value)
{
    outputs_ = value;
    outputsIsSet_ = true;
}

bool ShowBasicPluginResponse::outputsIsSet() const
{
    return outputsIsSet_;
}

void ShowBasicPluginResponse::unsetoutputs()
{
    outputsIsSet_ = false;
}

NewExtension_execution ShowBasicPluginResponse::getExecution() const
{
    return execution_;
}

void ShowBasicPluginResponse::setExecution(const NewExtension_execution& value)
{
    execution_ = value;
    executionIsSet_ = true;
}

bool ShowBasicPluginResponse::executionIsSet() const
{
    return executionIsSet_;
}

void ShowBasicPluginResponse::unsetexecution()
{
    executionIsSet_ = false;
}

}
}
}
}
}


