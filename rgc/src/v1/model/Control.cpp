

#include "huaweicloud/rgc/v1/model/Control.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




Control::Control()
{
    identifier_ = "";
    identifierIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    guidance_ = "";
    guidanceIsSet_ = false;
    resourceIsSet_ = false;
    frameworkIsSet_ = false;
    service_ = "";
    serviceIsSet_ = false;
    implementation_ = "";
    implementationIsSet_ = false;
    behavior_ = "";
    behaviorIsSet_ = false;
    owner_ = "";
    ownerIsSet_ = false;
    severity_ = "";
    severityIsSet_ = false;
    controlObjective_ = "";
    controlObjectiveIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
    releaseDate_ = utility::datetime();
    releaseDateIsSet_ = false;
}

Control::~Control() = default;

void Control::validate()
{
}

web::json::value Control::toJson() const
{
    web::json::value val = web::json::value::object();

    if(identifierIsSet_) {
        val[utility::conversions::to_string_t("identifier")] = ModelBase::toJson(identifier_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(guidanceIsSet_) {
        val[utility::conversions::to_string_t("guidance")] = ModelBase::toJson(guidance_);
    }
    if(resourceIsSet_) {
        val[utility::conversions::to_string_t("resource")] = ModelBase::toJson(resource_);
    }
    if(frameworkIsSet_) {
        val[utility::conversions::to_string_t("framework")] = ModelBase::toJson(framework_);
    }
    if(serviceIsSet_) {
        val[utility::conversions::to_string_t("service")] = ModelBase::toJson(service_);
    }
    if(implementationIsSet_) {
        val[utility::conversions::to_string_t("implementation")] = ModelBase::toJson(implementation_);
    }
    if(behaviorIsSet_) {
        val[utility::conversions::to_string_t("behavior")] = ModelBase::toJson(behavior_);
    }
    if(ownerIsSet_) {
        val[utility::conversions::to_string_t("owner")] = ModelBase::toJson(owner_);
    }
    if(severityIsSet_) {
        val[utility::conversions::to_string_t("severity")] = ModelBase::toJson(severity_);
    }
    if(controlObjectiveIsSet_) {
        val[utility::conversions::to_string_t("control_objective")] = ModelBase::toJson(controlObjective_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(releaseDateIsSet_) {
        val[utility::conversions::to_string_t("release_date")] = ModelBase::toJson(releaseDate_);
    }

    return val;
}
bool Control::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("identifier"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("identifier"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIdentifier(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("guidance"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("guidance"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGuidance(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResource(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("framework"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("framework"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFramework(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("service"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setService(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("implementation"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("implementation"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImplementation(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("behavior"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("behavior"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBehavior(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("owner"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("owner"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOwner(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("severity"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("severity"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSeverity(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("control_objective"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("control_objective"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setControlObjective(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("release_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("release_date"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReleaseDate(refVal);
        }
    }
    return ok;
}


std::string Control::getIdentifier() const
{
    return identifier_;
}

void Control::setIdentifier(const std::string& value)
{
    identifier_ = value;
    identifierIsSet_ = true;
}

bool Control::identifierIsSet() const
{
    return identifierIsSet_;
}

void Control::unsetidentifier()
{
    identifierIsSet_ = false;
}

std::string Control::getName() const
{
    return name_;
}

void Control::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool Control::nameIsSet() const
{
    return nameIsSet_;
}

void Control::unsetname()
{
    nameIsSet_ = false;
}

std::string Control::getDescription() const
{
    return description_;
}

void Control::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool Control::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void Control::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string Control::getGuidance() const
{
    return guidance_;
}

void Control::setGuidance(const std::string& value)
{
    guidance_ = value;
    guidanceIsSet_ = true;
}

bool Control::guidanceIsSet() const
{
    return guidanceIsSet_;
}

void Control::unsetguidance()
{
    guidanceIsSet_ = false;
}

std::vector<std::string>& Control::getResource()
{
    return resource_;
}

void Control::setResource(const std::vector<std::string>& value)
{
    resource_ = value;
    resourceIsSet_ = true;
}

bool Control::resourceIsSet() const
{
    return resourceIsSet_;
}

void Control::unsetresource()
{
    resourceIsSet_ = false;
}

std::vector<std::string>& Control::getFramework()
{
    return framework_;
}

void Control::setFramework(const std::vector<std::string>& value)
{
    framework_ = value;
    frameworkIsSet_ = true;
}

bool Control::frameworkIsSet() const
{
    return frameworkIsSet_;
}

void Control::unsetframework()
{
    frameworkIsSet_ = false;
}

std::string Control::getService() const
{
    return service_;
}

void Control::setService(const std::string& value)
{
    service_ = value;
    serviceIsSet_ = true;
}

bool Control::serviceIsSet() const
{
    return serviceIsSet_;
}

void Control::unsetservice()
{
    serviceIsSet_ = false;
}

std::string Control::getImplementation() const
{
    return implementation_;
}

void Control::setImplementation(const std::string& value)
{
    implementation_ = value;
    implementationIsSet_ = true;
}

bool Control::implementationIsSet() const
{
    return implementationIsSet_;
}

void Control::unsetimplementation()
{
    implementationIsSet_ = false;
}

std::string Control::getBehavior() const
{
    return behavior_;
}

void Control::setBehavior(const std::string& value)
{
    behavior_ = value;
    behaviorIsSet_ = true;
}

bool Control::behaviorIsSet() const
{
    return behaviorIsSet_;
}

void Control::unsetbehavior()
{
    behaviorIsSet_ = false;
}

std::string Control::getOwner() const
{
    return owner_;
}

void Control::setOwner(const std::string& value)
{
    owner_ = value;
    ownerIsSet_ = true;
}

bool Control::ownerIsSet() const
{
    return ownerIsSet_;
}

void Control::unsetowner()
{
    ownerIsSet_ = false;
}

std::string Control::getSeverity() const
{
    return severity_;
}

void Control::setSeverity(const std::string& value)
{
    severity_ = value;
    severityIsSet_ = true;
}

bool Control::severityIsSet() const
{
    return severityIsSet_;
}

void Control::unsetseverity()
{
    severityIsSet_ = false;
}

std::string Control::getControlObjective() const
{
    return controlObjective_;
}

void Control::setControlObjective(const std::string& value)
{
    controlObjective_ = value;
    controlObjectiveIsSet_ = true;
}

bool Control::controlObjectiveIsSet() const
{
    return controlObjectiveIsSet_;
}

void Control::unsetcontrolObjective()
{
    controlObjectiveIsSet_ = false;
}

std::string Control::getVersion() const
{
    return version_;
}

void Control::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool Control::versionIsSet() const
{
    return versionIsSet_;
}

void Control::unsetversion()
{
    versionIsSet_ = false;
}

utility::datetime Control::getReleaseDate() const
{
    return releaseDate_;
}

void Control::setReleaseDate(const utility::datetime& value)
{
    releaseDate_ = value;
    releaseDateIsSet_ = true;
}

bool Control::releaseDateIsSet() const
{
    return releaseDateIsSet_;
}

void Control::unsetreleaseDate()
{
    releaseDateIsSet_ = false;
}

}
}
}
}
}


