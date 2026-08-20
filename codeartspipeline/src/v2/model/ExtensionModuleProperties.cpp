

#include "huaweicloud/codeartspipeline/v2/model/ExtensionModuleProperties.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ExtensionModuleProperties::ExtensionModuleProperties()
{
    buildManifestVersion_ = "";
    buildManifestVersionIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    uuid_ = "";
    uuidIsSet_ = false;
    operationSystem_ = "";
    operationSystemIsSet_ = false;
    imageSource_ = "";
    imageSourceIsSet_ = false;
    image_ = "";
    imageIsSet_ = false;
    icon_ = "";
    iconIsSet_ = false;
    environmentVariablesIsSet_ = false;
    executionIsSet_ = false;
    parametersIsSet_ = false;
    tagsIsSet_ = false;
}

ExtensionModuleProperties::~ExtensionModuleProperties() = default;

void ExtensionModuleProperties::validate()
{
}

web::json::value ExtensionModuleProperties::toJson() const
{
    web::json::value val = web::json::value::object();

    if(buildManifestVersionIsSet_) {
        val[utility::conversions::to_string_t("build_manifestVersion")] = ModelBase::toJson(buildManifestVersion_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(uuidIsSet_) {
        val[utility::conversions::to_string_t("uuid")] = ModelBase::toJson(uuid_);
    }
    if(operationSystemIsSet_) {
        val[utility::conversions::to_string_t("operationSystem")] = ModelBase::toJson(operationSystem_);
    }
    if(imageSourceIsSet_) {
        val[utility::conversions::to_string_t("imageSource")] = ModelBase::toJson(imageSource_);
    }
    if(imageIsSet_) {
        val[utility::conversions::to_string_t("image")] = ModelBase::toJson(image_);
    }
    if(iconIsSet_) {
        val[utility::conversions::to_string_t("icon")] = ModelBase::toJson(icon_);
    }
    if(environmentVariablesIsSet_) {
        val[utility::conversions::to_string_t("environmentVariables")] = ModelBase::toJson(environmentVariables_);
    }
    if(executionIsSet_) {
        val[utility::conversions::to_string_t("execution")] = ModelBase::toJson(execution_);
    }
    if(parametersIsSet_) {
        val[utility::conversions::to_string_t("parameters")] = ModelBase::toJson(parameters_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}
bool ExtensionModuleProperties::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("build_manifestVersion"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("build_manifestVersion"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBuildManifestVersion(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("uuid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("uuid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUuid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("operationSystem"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operationSystem"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperationSystem(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("imageSource"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("imageSource"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageSource(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("image"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("icon"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("icon"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIcon(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("environmentVariables"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("environmentVariables"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::map<std::string, std::string>> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnvironmentVariables(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("execution"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("execution"));
        if(!fieldValue.is_null())
        {
            ExtensionExecution refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecution(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parameters"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parameters"));
        if(!fieldValue.is_null())
        {
            std::vector<ExtensionParameter> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParameters(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}


std::string ExtensionModuleProperties::getBuildManifestVersion() const
{
    return buildManifestVersion_;
}

void ExtensionModuleProperties::setBuildManifestVersion(const std::string& value)
{
    buildManifestVersion_ = value;
    buildManifestVersionIsSet_ = true;
}

bool ExtensionModuleProperties::buildManifestVersionIsSet() const
{
    return buildManifestVersionIsSet_;
}

void ExtensionModuleProperties::unsetbuildManifestVersion()
{
    buildManifestVersionIsSet_ = false;
}

std::string ExtensionModuleProperties::getName() const
{
    return name_;
}

void ExtensionModuleProperties::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ExtensionModuleProperties::nameIsSet() const
{
    return nameIsSet_;
}

void ExtensionModuleProperties::unsetname()
{
    nameIsSet_ = false;
}

std::string ExtensionModuleProperties::getDescription() const
{
    return description_;
}

void ExtensionModuleProperties::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ExtensionModuleProperties::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ExtensionModuleProperties::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string ExtensionModuleProperties::getUuid() const
{
    return uuid_;
}

void ExtensionModuleProperties::setUuid(const std::string& value)
{
    uuid_ = value;
    uuidIsSet_ = true;
}

bool ExtensionModuleProperties::uuidIsSet() const
{
    return uuidIsSet_;
}

void ExtensionModuleProperties::unsetuuid()
{
    uuidIsSet_ = false;
}

std::string ExtensionModuleProperties::getOperationSystem() const
{
    return operationSystem_;
}

void ExtensionModuleProperties::setOperationSystem(const std::string& value)
{
    operationSystem_ = value;
    operationSystemIsSet_ = true;
}

bool ExtensionModuleProperties::operationSystemIsSet() const
{
    return operationSystemIsSet_;
}

void ExtensionModuleProperties::unsetoperationSystem()
{
    operationSystemIsSet_ = false;
}

std::string ExtensionModuleProperties::getImageSource() const
{
    return imageSource_;
}

void ExtensionModuleProperties::setImageSource(const std::string& value)
{
    imageSource_ = value;
    imageSourceIsSet_ = true;
}

bool ExtensionModuleProperties::imageSourceIsSet() const
{
    return imageSourceIsSet_;
}

void ExtensionModuleProperties::unsetimageSource()
{
    imageSourceIsSet_ = false;
}

std::string ExtensionModuleProperties::getImage() const
{
    return image_;
}

void ExtensionModuleProperties::setImage(const std::string& value)
{
    image_ = value;
    imageIsSet_ = true;
}

bool ExtensionModuleProperties::imageIsSet() const
{
    return imageIsSet_;
}

void ExtensionModuleProperties::unsetimage()
{
    imageIsSet_ = false;
}

std::string ExtensionModuleProperties::getIcon() const
{
    return icon_;
}

void ExtensionModuleProperties::setIcon(const std::string& value)
{
    icon_ = value;
    iconIsSet_ = true;
}

bool ExtensionModuleProperties::iconIsSet() const
{
    return iconIsSet_;
}

void ExtensionModuleProperties::unseticon()
{
    iconIsSet_ = false;
}

std::map<std::string, std::map<std::string, std::string>>& ExtensionModuleProperties::getEnvironmentVariables()
{
    return environmentVariables_;
}

void ExtensionModuleProperties::setEnvironmentVariables(const std::map<std::string, std::map<std::string, std::string>>& value)
{
    environmentVariables_ = value;
    environmentVariablesIsSet_ = true;
}

bool ExtensionModuleProperties::environmentVariablesIsSet() const
{
    return environmentVariablesIsSet_;
}

void ExtensionModuleProperties::unsetenvironmentVariables()
{
    environmentVariablesIsSet_ = false;
}

ExtensionExecution ExtensionModuleProperties::getExecution() const
{
    return execution_;
}

void ExtensionModuleProperties::setExecution(const ExtensionExecution& value)
{
    execution_ = value;
    executionIsSet_ = true;
}

bool ExtensionModuleProperties::executionIsSet() const
{
    return executionIsSet_;
}

void ExtensionModuleProperties::unsetexecution()
{
    executionIsSet_ = false;
}

std::vector<ExtensionParameter>& ExtensionModuleProperties::getParameters()
{
    return parameters_;
}

void ExtensionModuleProperties::setParameters(const std::vector<ExtensionParameter>& value)
{
    parameters_ = value;
    parametersIsSet_ = true;
}

bool ExtensionModuleProperties::parametersIsSet() const
{
    return parametersIsSet_;
}

void ExtensionModuleProperties::unsetparameters()
{
    parametersIsSet_ = false;
}

std::vector<std::string>& ExtensionModuleProperties::getTags()
{
    return tags_;
}

void ExtensionModuleProperties::setTags(const std::vector<std::string>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ExtensionModuleProperties::tagsIsSet() const
{
    return tagsIsSet_;
}

void ExtensionModuleProperties::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


